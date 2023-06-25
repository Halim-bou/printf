# The awesome _printf() function

**_printf** - formatted output conversion

**#include "main.h"**
**int _printf(const char** *format* **, ...);**

## Description
The **_printf()** function produce output according to a *format* as described below. Also, write output to *stdout*, the standard output stream.

The  **_printf()** function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

### Format of the format string

The format string is a character string, beginning and ending inits  initial shift state, if any. The format string is composed of zero or more  directives:  ordinary  characters  (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.

### Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:
-  **d, i**: The **_int_** argument should be signed decimal notation, and the resulting number is written.
-  **c**: The **_int_** argument is converted to a char, and the resulting character is written.
-  **s**: The **_const char_** * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up  to  (but not including) a terminating null byte ('\0').
- **%**: A '**%**' is written. No argument is converted. The complete conversion specification is '**%%**'.

## Exemples:
_printf("Hello ALX"); **// the output will be: Hello ALX**

_printf("%c", 'H'); // **the output will be: H**

_printf("%s", "Hello ALX"); **// the output will be: Hello ALX**

_printf("%!\n"); **// the output will be '%!'**

_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); **// the output will be: Complete the sentence: You know nothing, Jon Snow.**

_printf("%        s", "Hello"); **// the output will be: Hello**

_printf("%        k"); **// the output will be: % k**

## Author

**_printf()** is written and maintained by **Rania Elmoussaoui** and **Abd elhalim El bouaami** (hbouaami@gmail.com).
