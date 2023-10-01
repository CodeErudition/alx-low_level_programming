# 0x08. C - Recursion

## Below are projects related to recursion.

# Task 0
## Pseudo Code to Task 0 (0-puts_recursion.c).

```c
Start program
Function void _puts_recursion(char *s):
	Set base condition:

	If (*s is == null terminator '\0'):
		Print new line
	End If 

	Else 
		Print the first character of the string:
		_putchar(*s);
		Make a recursive call:
		_puts_recursion(s + 1);
	End Else

End program
```
# Task 1
## Pseudo Code to Task 1 (1-print_rev_recursion.c).

```c
Start program
Function void _print_rev_recursion(char *s):

	Set base condition:

	If (*s is == null terminator '\0'):
		Return;
	End If

	Else
		Make a recursive call:
		_print_rev_recursion(s + 1);
		Print the current character pointed to by s:
		_putchar(*s);
	End Else

End program
```
# Task 2
## Pseudo Code to Task 2 (2-strlen_recursion.c).

```c
Start program
Function int _strlen_recursion(char *s):

	Declear a variable slen to keep track of the string length.
        Set base condition:

        If (*s is == null terminator '\0'):
                Return (0);
	End If

        Else
		Assign a recursive call to the variable slen to calculate 
		the length of the rest string:
		slen = _strlen_recursion(s + 1);
		Increment slen by one:
		slen++;
                Return (slen);
	End Else

End program
```
# Task 3
## Pseudo Code to Task 3 (3-factorial.c).

```c
Start program
Function int factorial(int n):

	Set base condition:

        If (n < 0):
                Return (-1);
	End If

	If (n <= 1):
		Return (1);
	End If

	Make a recursive function call:
        Return (n * factorial(n-1));

End program
```
# Task 4
## Pseudo Code to Task 4 (4-pow_recursion.c).

```c
Start program
Function int _pow_recursion(int x, int y):

        Set base condition:

        If (n < 0):
                Return (-1);
	End If

        If (n == 0):
                Return (1);
	End If

	Make a recursive function call:
        Return (x * _pow_recursion(x, y - 1);

End program
```
# Task 5
## Pseudo Code to Task 5 (5-sqrt_recursion.c).
```c
Start program
Function(helper) int dummy_sqrt(int num, int trial):

	Set base conditions:

	If (trial * trial ==  num):
        	Return (trial);
	End If

	If (trial == num / 2):
        	Return (-1);
	End If
	
	Continue the search with the next trial value
	Return (dummy_sqrt(num, trial + 1));

End program

Start program
Function int _sqrt_recursion(int n):

	Set base condition:

	If (n < 0):
		Return (-1);
	End If
	
	Make a recursive to dummy_sqrt to search for the square root
	Return (dummy_sqrt(n, 1));

End program
```
# Task 6
## Pseudo Code to Task 6 (6-is_prime_number.c).
```c
Start program
Function(helper) int is_prime(int n, int denominator):

        Set base conditions:

        If (n <= 1):
        	Return (0);
        End If

	If (denominator == 1):
		Return (1);
	End If

        If (num % denominator == 0):
        	Return (0);
        End If

        Make a recursive call to move to the next denominator:
        Return (is_prime(n, denominator - 1));

End program

Start program
Function int is_prime_number(int n):

        Make a recursive to is_prime  to check the primality of the n:
        Return (dummy_sqrt(n, 1));

End program
```
# Task 7
## Pseudo Code to Task 7 (100-is_palindrome.c).
```c
Start program
Function(helper) int palindrome_test(char *str, int forward, int backward):

        Set base conditions:

        If (forward >= backward):
                Return (1);
        End If

        If (str[forward] != str[backward]):
                Return (0);
        End If

        Make a recursive call to continue comparing the rest of the string:
        Return (palindrome_test(str, forward + 1, backward - 1));

End program

Start program
Function int is_prime_number(int n):
	
	Declare a variable slen to keep track of the string length:
	
	Loop through the string using For Loop to get the string length:
	For (slen = 0; s[slen] != '\0'; slen++):
	
	Setting base conditions
	
	If (s <= 1):
		Return (1);
	End If

        Make a recursive to_palindrome  to check if the string is a palindrome:
        Return (palindrome_test(s, 0, slen - 1));

End program
```
