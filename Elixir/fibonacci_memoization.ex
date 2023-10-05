defmodule FibonacciMemoization do
  use Agent

  @moduledoc """
  Memoization is a technique that stores already calculated results in cache
  If the information exists in memory, the value is retrieved. If not, calc it and store

  There are multiple ways to do it. One of them, in Elixir, is with Agent
  From the Elixir doc, Agents are a simple abstraction around state, that allows state to be
  retrieved and updated via API
  [https://hexdocs.pm/elixir/1.12/Agent.html]
  """

  def start_fib(value) do
    Agent.start_link(fn -> %{0 => 0, 1 => 1} end, name: __MODULE__)

    calc_fib(value)
  end

  def calc_fib(curr_value) do
    cached_value = Agent.get(__MODULE__, &(Map.get(&1, curr_value)))

    case cached_value do
      nil -> calc_and_store(curr_value)
      _ -> cached_value
    end
  end

  def calc_and_store(curr_value) do
    result = calc_fib(curr_value - 1) + calc_fib(curr_value - 2)
    Agent.update(__MODULE__, &(Map.put(&1, curr_value, result)))

    result
  end
end

FibonacciMemoization.start_fib(999)
