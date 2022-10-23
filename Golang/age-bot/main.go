package main

import (
	"context"
	"fmt"
	"log"
	"os"
	"strconv"

	"github.com/joho/godotenv"

	"github.com/shomali11/slacker"
)

// Reading on the analytics coming from routine
func printCommandEvents(analyticsChannel <-chan *slacker.CommandEvent) {
	for event := range analyticsChannel {
		fmt.Println("command events")
		fmt.Println(event.Timestamp)
		fmt.Println(event.Command)
		fmt.Println(event.Parameters)
		fmt.Println(event.Event)
		fmt.Println()
	}
}

// Calculating yob and vote eligibility with bot command definition
func slackerYobCommandDefinition(slackBot *slacker.Slacker) {
	slackBot.Command("my yob is <year>", &slacker.CommandDefinition{
		Description: "YOB calculator",
		Handler: func(botCtx slacker.BotContext, request slacker.Request, response slacker.ResponseWriter) {
			year := request.Param("year")
			yob, err := strconv.Atoi(year)
			if err != nil {
				println("error")
			}
			age := 2022 - yob
			dob := fmt.Sprintf("age is %d", age)
			eligibleAge := ""
			if age >= 18 {
				eligibleAge = fmt.Sprintf("You're eligible to vote")
				response.Reply(eligibleAge)
			} else {
				eligibleAge = fmt.Sprintf("You're not eligible to vote")
			}
			response.Reply(dob)
		},
	})
}

func main() {
	// To load environment variables
	envErr := godotenv.Load()

	// Sanity check if there are not environmental variables
	if envErr != nil {
		log.Fatal("Error while loading .env file")
	}
	os.Setenv("SLACK_BOT_TOKEN", os.Getenv("SLACK_BOT_TOKEN"))
	os.Setenv("SLACK_APP_TOKEN", os.Getenv("SLACK_APP_TOKEN"))

	// Creating slack bot client
	bot := slacker.NewClient(os.Getenv("SLACK_BOT_TOKEN"), os.Getenv("SLACK_APP_TOKEN"))

	go slackerYobCommandDefinition(bot)

	// go printCommandEvents(bot.CommandEvents())

	ctx, cancel := context.WithCancel(context.Background())
	defer cancel()

	// Listening bot
	err := bot.Listen(ctx)
	if err != nil {
		log.Fatal(err)
	}
}
