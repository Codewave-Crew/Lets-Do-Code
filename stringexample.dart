// Single-line string
String name = 'Alice';

// Multi-line string using double quotes
String greeting = "Hello, $name!";

// Multi-line string using triple quotes
String poem = """
Roses are red,
Violets are blue,
Sugar is sweet,
And so are you.
""";

// String interpolation
print('Your name is $name and your greeting is $greeting.');

// String concatenation
print('${name} says, "${greeting}"');

// String methods
String upperName = name.toUpperCase();
String lowerName = name.toLowerCase();
String trimmedName = name.trim();

// String comparison
if (name == 'Alice') {
  print('Hello, Alice!');
} else {
  print('Hello, stranger!');
}
