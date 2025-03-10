## #include <[cctype](https://cplusplus.com/reference/cctype/)>: to classify and transform individual characters

`isalpha(c)`: Check if c is alphabetic <br>
`isalnum(c)`: Check if c is alphanumeric <br>
`isdigit(c)`: Check if c is decimal digit <br>
`islower(c)`: Check if c is lowercase letter <br>
`isupper(c)`:	Check if c is uppercase letter <br>
`tolower(c)`: Convert c to lowercase (if it is uppercase) <br>
`toupper(c)`: Convert c to uppercase (if it is lowercase) <br>

**`tolower(c)` or `toupper(c)` returns an integer. To converse it to char, use `static_cast<char>(tolower(c))`.**

## #include <[cstring](https://cplusplus.com/reference/cstring/)>
`memset(ptr, value, num)`: Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
to set all elements to **0 or -1** in an array <br>
`int a[6];` <br>
`memset(a, -1, sizeof(a)); `

## #include <[utility](https://cplusplus.com/reference/utility/)>
`pair<char, int> a('a', 97);`
`a.first` ->  a
`a.second` -> 97
