# Custom Printf Implementation

This repository contains a custom implementation of the printf function in C. The custom printf function is designed to handle various format specifiers and provides similar functionality to the standard printf from the C standard library.

### Usage

To use the custom printf function, include the necessary header files and call the _printf function with the desired format string and arguments.

## Supported Format Specifiers

The custom printf function supports the following format specifiers:

- %c: Character
- %s: String
- %%: Percent sign
- %d, %i: Integer
- %b: Binary (Custom format specifier)
- %u: Unsigned integer
- %o: Octal
- %x, %X: Hexadecimal (lowercase/uppercase)
- %p: Pointer address
- %S: String with non-printable characters represented as \x followed by ASCII code in hexadecimal
- %r: Reversed string (Custom format specifier)
- %R: Rot13-encoded string (Custom format specifier)

## Custom Format Specifiers

### %b: Binary
The %b format specifier is a custom addition, allowing you to print integers in binary format.

### %S: String with Non-Printable Characters
The %S format specifier represents strings with non-printable characters. Non-printable characters are displayed as \x followed by the ASCII code value in hexadecimal.

### %r: Reversed String
The %r format specifier is a custom addition that prints the reversed version of the provided string.

### %R: Rot13-encoded String
The %R format specifier is a custom addition that prints the ROT13-encoded version of the provided string.

## Build and Run

###Compile the program with the custom printf implementation:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf

###Run the program:

./printf
