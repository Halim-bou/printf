#include "main.h"

/**
 * print_binary - convert a number to binary
 * @list: argument passed to this function
 * Return: length of the number
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_octal - convert to octal
 * @list: list of arguments
 * Return: number of symbols
 */
int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *oc_rep;
	char *rev_s;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);
	oc_rep = malloc(sizeof(char) * len + 1);
	if (oc_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		oc_rep[len] = (num % 8) + 48;
		num = num / 8;
	}
	oc_rep[len] = '\0';
	rev_s = rev_string(oc_rep);
	if (rev_s == NULL)
		return (-1);
	write_base(rev_s);
	free(oc_rep);
	free(rev_s);
	return (len);
}

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len, rem_num;
	char *hex_rep, *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list list)
{
	unsigned int num;
	int len, rem_num;
	char *hex_rep, *rev_hex;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
