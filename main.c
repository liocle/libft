/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:02 by lclerc            #+#    #+#             */
/*   Updated: 2022/10/29 17:30:09 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

	{
	char _isalpha;
	char _isdigit;
	char _isalnum;
	int _isascii;
	int _isprint;
	char *_strlen;
	char input;
	char _toupper;
	char _tolower;
	char _strchr_char;
	char *_strchr_string;
	char _strrchr_char;
	char *_strrchr_string;
	char _strncmp_amount_character;
	char *_strncmp_string1;
	char *_strncmp_string2;

//	/* Test ft_isalpha.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_isalpha()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_isalpha = '7'; /* Check ft_isalpha with non alpha */
//	printf("Check ft_isalpha() with a non letter :%c:, ft_isalpha returns: :%d:\n", _isalpha, ft_isalpha(_isalpha));
//	printf("Check system isalpha() with a non letter :%c:, isalpha returns: :%d:\n\n", _isalpha, isalpha(_isalpha));
//	
//	_isalpha = 'A'; /* Check ft_isalpha with alpha */
//	printf("Check ft_isalpha() with a letter :%c:, ft_isalpha returns: :%d:\n", _isalpha, ft_isalpha(_isalpha));
//	printf("Check system isalpha() with a letter :%c:, isalpha returns: :%d:\n\n\n", _isalpha, isalpha(_isalpha));
//
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_isalpha() with a non letter :%c:, ft_isalpha returns: :%d:\n", input, ft_isalpha(input));
//	printf("Check system isalpha() with a non letter :%c:, isalpha returns: :%d:\n\n", input, isalpha(input));
//	
//	/* End of test ft_isalpha.c */	
//
//	/* Test ft_isdigit.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_isdigit()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of isdigit() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_isdigit = ' '; /* Check ft_isdigit with non isdigit */
//	printf("Check ft_isdigit() with a non digit :%c:, ft_isdigit returns: :%d:\n", _isdigit, ft_isdigit(_isdigit));
//	printf("Check system isdigit() with a non digit :%c:, isdigit returns: :%d:\n\n", _isdigit, isdigit(_isdigit));
//
//	_isdigit = '0'; /* Check ft_isdigit with isdigit */
//	printf("Check ft_isdigit() with a digit :%c:, ft_isdigit returns: :%d:\n", _isdigit, ft_isdigit(_isdigit));
//	printf("Check system isdigit() with a digit :%c:, isdigit returns: :%d:\n\n\n", _isdigit, isdigit(_isdigit));
//
//	printf("Enter a character to test this function: ");
//	_isdigit = getc(stdin);
//	printf("\nCheck ft_isdigit() with a non letter :%c:, ft_isdigit returns: :%d:\n", _isdigit, ft_isdigit(_isdigit));
//	printf("Check system isdigit() with a non letter :%c:, isdigit returns: :%d:\n\n", _isdigit, isdigit(_isdigit));
//	/* End of test ft_isdigit.c */	
//
//
//	/* Test ft_isalnum.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_isalnum()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_isalnum = ' '; /* Check ft_isalnum with non isalnum */
//	printf("Check ft_isalnum() with a non alnum :%c:, ft_isalnum returns: :%d:\n", _isalnum, ft_isalnum(_isalnum));
//	printf("Check system isalnum() with a non alnum :%c:, isalnum returns: :%d:\n\n", _isalnum, isalnum(_isalnum));
//
//	_isalnum = '0'; /* Check ft_isalnum with isalnum */
//	printf("Check ft_isalnum() with a alnum :%c:, ft_isalnum returns: :%d:\n", _isalnum, ft_isalnum(_isalnum));
//	printf("Check system isalnum() with a alnum :%c:, isalnum returns: :%d:\n\n\n", _isalnum, isalnum(_isalnum));
//
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_isalnum() with a non letter :%c:, ft_isalnum returns: :%d:\n", input, ft_isalnum(input));
//	printf("Check system isalnum() with a non letter :%c:, isalnum returns: :%d:\n\n", input, isalnum(input));
//	/* End of test ft_isalnum.c */	
//
//
//	/* Test ft_isascii.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_isascii()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of isascii() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_isascii = 424; /* Check ft_isascii with non isascii */
//	printf("Check ft_isascii() with a non ascii :%i:, ft_isascii returns: :%d:\n", _isascii, ft_isascii(_isascii));
//	printf("Check system isascii() with a non ascii :%i:, isascii returns: :%d:\n\n", _isascii, isascii(_isascii));
//
//	_isascii = '0'; /* Check ft_isascii with isascii */
//	printf("Check ft_isascii() with a ascii :%i:, ft_isascii returns: :%d:\n", _isascii, ft_isascii(_isascii));
//	printf("Check system isascii() with a ascii :%i:, isascii returns: :%d:\n\n\n", _isascii, isascii(_isascii));
//
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_isascii() with a non letter :%c: ft_isascii returns: :%d:\n", input, ft_isascii(input));
//	printf("Check system isascii() with a non letter :%c: isascii returns: :%d:\n\n", input, isascii(input));
//	/* End of test ft_isascii.c */	
//
//	/* Test ft_isprint.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_isprint()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of isprint() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_isprint = 424; /* Check ft_isprint with non isprint */
//	printf("Check ft_isprint() with a non ascii :%i:, ft_isprint returns: :%d:\n", _isprint, ft_isprint(_isprint));
//	printf("Check system isprint() with a non ascii :%i:, isprint returns: :%d:\n\n", _isprint, isprint(_isprint));
//	_isprint = '0'; /* Check ft_isprint with isprint */
//	printf("Check ft_isprint() with a ascii :%i:, ft_isprint returns: :%d:\n", _isprint, ft_isprint(_isprint));
//	printf("Check system isprint() with a ascii :%i:, isprint returns: :%d:\n\n\n", _isprint, isprint(_isprint));
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_isprint() with a non letter :%c: ft_isprint returns: :%d:\n", input, ft_isprint(input));
//	printf("Check system isprint() with a non letter :%c: isprint returns: :%d:\n\n", input, isprint(input));
//	/* End of test ft_isprint.c */
//
//	/* Test ft_strlen.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_strlen()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	input = getc(stdin); 
//	_strlen = "Length me up";		
//	printf("Input string to be measured by strlen :%s:\n", _strlen); 
//	printf("ft_strlen found :%zu: characters\n", ft_strlen(_strlen));
//	printf("strlen finds :%lu: characters\n", strlen(_strlen));
//	/* End of ft_strlen.c */
//
//	/* Test ft_toupper.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_toupper()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of toupper() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_toupper = 'z'; /* Check ft_toupper with non toupper */
//	printf("Check ft_toupper() with a lower case :%c:, ft_toupper returns: :%c:\n", _toupper, ft_toupper(_toupper));
//	printf("Check system toupper() with a lower case :%c:, toupper returns: :%c:\n\n", _toupper, toupper(_toupper));
//	_toupper = 'Z'; /* Check ft_toupper with toupper */
//	printf("Check ft_toupper() with a upper case: %c:, ft_toupper returns: :%c:\n", _toupper, ft_toupper(_toupper));
//	printf("Check system toupper() with a upper case :%c:, toupper returns: :%c:\n\n\n", _toupper, toupper(_toupper));
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_toupper() with your character :%c: ft_toupper returns: :%c:\n", input, ft_toupper(input));
//		printf("Check system toupper() with your character :%c: toupper returns: :%c:\n\n", input, toupper(input));
//	/* If the argument is a lower-case letter, the toupper() function returns the corre
//	sponding upper-case letter if there is one; otherwise, the argument is unchanged.*/	
//	/* End of test ft_toupper.c */
//	
//	/* Test ft_tolower.c */
//	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_tolower()        *\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\nRETURN VALUES of tolower() function returns zero if the character tests false and returns non-zero if the character tests true.\n\n");
//	_tolower = 'z'; /* Check ft_tolower with non tolower */
//	printf("Check ft_tolower() with a lower case :%c:, ft_tolower returns: :%c:\n", _tolower, ft_tolower(_tolower));
//	printf("Check system tolower() with a lower case :%c:, tolower returns: :%c:\n\n", _tolower, tolower(_tolower));
//	_tolower = 'Z'; /* Check ft_tolower with tolower */
//	printf("Check ft_tolower() with a upper case: %c:, ft_tolower returns: :%c:\n", _tolower, ft_tolower(_tolower));
//	printf("Check system tolower() with a upper case :%c:, tolower returns: :%c:\n\n\n", _tolower, tolower(_tolower));
//	printf("Enter a character to test this function: ");
//	input = getc(stdin);
//	printf("\nCheck ft_tolower() with your character :%c: ft_tolower returns: :%c:\n", input, ft_tolower(input));
//		printf("Check system tolower() with your character :%c: tolower returns: :%c:\n\n", input, tolower(input));
//	/* End of test ft_tolower.c */

//	/* Test ft_strchr.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_strchr()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	_strchr_string = "Find character"; /* String to test*/
//	printf("Type character to truncate string :%s:\n", _strchr_string); 
//	_strchr_char = getc(stdin); 
//	printf("ft_strchr: String after :%c: is :%s:\n", _strchr_char, ft_strchr(_strchr_string, _strchr_char));
//	printf("strchr: String after :%c: is :%s:\n", _strchr_char, strchr(_strchr_string, _strchr_char ));
//	/* End of ft_strchr.c */

//	/* Test ft_strrchr.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_strrchr()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	_strrchr_string = "Find character"; /* String to test*/
//	printf("Type character to truncate string :%s:\n", _strrchr_string); 
//	_strrchr_char = getc(stdin); 
//	printf("ft_strrchr: String after :%c: is :%s:\n", _strrchr_char, ft_strrchr(_strrchr_string, _strrchr_char));
//	printf("strrchr: String after :%c: is :%s:\n", _strrchr_char, strrchr(_strrchr_string, _strrchr_char ));
//	/* End of ft_strrchr.c */

	/* Test ft_strncmp.c */
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_strncmp()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
	_strncmp_string1 = "Find character"; /* String to test*/
	_strncmp_string2 = "Find cha42cter"; /* String to test*/
	printf("Amount of characters to compare :%d:\n", _strncmp_amount_character); 
	_strncmp_amount_character = getc(stdin); 
	printf("ft_strncmp returns :%d:\n", ft_strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
	printf("strncmp returns :%d:\n", strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
	/* End of ft_strncmp.c */

	return 1;
	}	
