/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:02 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/07 14:02:48 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>


int	main(int argc, char **argv)
	{
	int i;
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
	int _strncmp_amount_character;
	char *_strncmp_string1;
	char *_strncmp_string2;
//	int	 _memset_array;
//	char	*_memset_string;
//	char	_memset_char;


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

//	/* Test ft_strncmp.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_strncmp()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	_strncmp_string1 = "12345'\0'789"; /* String to test*/
//	_strncmp_string2 = "123456889"; /* String to test*/
////	printf("Amount of characters to compare :%d:\n", _strncmp_amount_character); 
////	_strncmp_amount_character = getc(stdin); 
//	_strncmp_amount_character = 0;
//	printf("String1 is: :%s:\n", _strncmp_string1);
//	printf("String2 is: :%s:\n", _strncmp_string2);
//	printf("Amount of character to compare: :%d:\n", _strncmp_amount_character); 
//	printf("ft_strncmp returns :%d:\n", ft_strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("strncmp returns :%d:\n", strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("\n");
//	_strncmp_amount_character = 5;
//	printf("String1 is: :%s:\n", _strncmp_string1);
//	printf("String2 is: :%s:\n", _strncmp_string2);
//	printf("Amount of character to compare: :%d:\n", _strncmp_amount_character); 
//	printf("ft_strncmp returns :%d:\n", ft_strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("strncmp returns :%d:\n", strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("\n");
//	_strncmp_amount_character = 6;
//	printf("String1 is: :%s:\n", _strncmp_string1);
//	printf("String2 is: :%s:\n", _strncmp_string2);
//	printf("Amount of character to compare: :%d:\n", _strncmp_amount_character); 
//	printf("ft_strncmp returns :%d:\n", ft_strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("strncmp returns :%d:\n", strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("\n");
//	_strncmp_amount_character = 7;
//	printf("String1 is: :%s:\n", _strncmp_string1);
//	printf("String2 is: :%s:\n", _strncmp_string2);
//	printf("Amount of character to compare: :%d:\n", _strncmp_amount_character); 
//	printf("ft_strncmp returns :%d:\n", ft_strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("strncmp returns :%d:\n", strncmp(_strncmp_string1, _strncmp_string2, _strncmp_amount_character));
//	printf("\n");
//	/* End of ft_strncmp.c */

//	/* Test ft_memset.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_memset()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	char ft_memset_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	char _memset_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	
//	printf("Original string\n");
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", ft_memset_array[i]);
//	}
//	printf("\n");
//
//	printf("ft_memset rewrites first 5 chars to '0':\n");
//	ft_memset(ft_memset_array, 0, sizeof(char) * 5);
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", ft_memset_array[i]);
//	}
//	printf("\n");
//
//	printf("memset rewrites the first 5 chars to '0':\n");
//	memset(_memset_array, 0, sizeof(char) * 5);
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", _memset_array[i]);
//	}
//	printf("\n");
//
//	/* End of ft_memset.c */
//
//	/* Test ft_bzero.c */
//	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n*        Checking ft_bzero()        *\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
//	char ft_bzero_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	char _bzero_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	
//	printf("Original string\n");
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", ft_bzero_array[i]);
//	}
//	printf("\n");
//
//	printf("ft_bzero rewrites first 5 chars to '0':\n");
//	ft_bzero(ft_bzero_array, sizeof(char) * 5);
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", ft_bzero_array[i]);
//	}
//	printf("\n");
//
//	printf("bzero rewrites the first 5 chars to '0':\n");
//	bzero(_bzero_array, sizeof(char) * 5);
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", _bzero_array[i]);
//	}
//	printf("\n");
//
//	/* End of ft_bzero.c */
	
//	/* Test ft_memcpy.c */
//	char src[] = "abcdefghijklmnopqrstuvxyz";
//	char dst_ft_memcpy[27];
//	char dst_memcpy[27];
//	
//
//	ft_memcpy(dst_ft_memcpy, src, sizeof(char) * 27);
//	printf("ft_memcpy copied src to dst as:\n");
//	printf("dest: %s\n", dst_ft_memcpy);
//
//	memcpy(dst_memcpy, src, sizeof(char) * 27);
//	printf("memcpy copied src to dst as:\n");
//	printf("dest: %s\n", dst_memcpy);
//	
//	/* copys only part of src into dest for testing purposes*/
//	ft_memcpy(dst_ft_memcpy, src+8, sizeof(char) * 9);
//	dst_ft_memcpy[9] = '\0';
//	printf("ft_memcpy copied src to dst as:\n");
//	printf("dest: %s\n", dst_ft_memcpy);
//	
//	ft_memcpy(dst_memcpy, src+8, sizeof(char) * 9);
//	dst_memcpy[9] = '\0';
//	printf("memcpy copied src to dst as:\n");
//	printf("dest: %s\n", dst_memcpy);
//	/* End of ft_memcpy.c */
//
//	
//	/* Test ft_memmove.c */
//	char src[] = "abcdefghijklmnopqrstuvxyz";
//	char dst_ft_memmove[27];
//	char dst_memmove[27];
//	
//
//	ft_memmove(dst_ft_memmove, src, sizeof(char) * 27);
//	printf("ft_memmove copied src to dst as:\n");
//	printf("dest: %s\n", dst_ft_memmove);
//
//	memmove(dst_memmove, src, sizeof(char) * 27);
//	printf("memmove copied src to dst as:\n");
//	printf("dest: %s\n", dst_memmove);
//	
//	/* copys only part of src into dest for testing purposes*/
//	ft_memmove(src, src+1, sizeof(char) * 9);
//	printf("ft_memmove copied end of src to overlapping start of src as:\n");
//	printf("dest: %s\n", src);
//
//	char src2[] = "abcdefghijklmnopqrstuvxyz";
//	memmove(src2, src2+1, sizeof(char) * 9);
//	printf("memmove did the same:\n");
//	printf("dest: %s\n", src2);
//	/* End of ft_memmove.c */
	
//	/* Test ft_strlcpy.c */
//	char src[] = "abcdefghijklmnopqrstuvxyz0123456789";
//	char dst_ft_strlcpy[27];
//	char dst_strlcpy[27];
//
//	printf("ft_strlcpy copied src to dst as:\n");
//	printf("dest: %s :%zu:\n", dst_ft_strlcpy, ft_strlcpy(dst_ft_strlcpy, src, sizeof(char) * 13));
//
//	printf("strlcpy copied src to dst as:\n");
//	printf("dest: %s :%zu:\n", dst_strlcpy, strlcpy(dst_strlcpy, src, sizeof(char) * 27));
//	
//	/* copys only part of src into dest for testing purposes*/
//	printf("ft_strlcpy copy to dest more than dstsize:\n");
//	printf("dest: %s :%zu:\n", dst_ft_strlcpy, ft_strlcpy(dst_ft_strlcpy, src, sizeof(char) * 33));
//
//	char src2[] = "abcdefghijklmnopqrstuvxyz";
//	printf("strlcpy copy to dest more than dstsize:\n");
//	printf("dest: %s :%zu:\n", dst_strlcpy, strlcpy(dst_strlcpy, src, sizeof(char) * 33));
//	/* End of ft_strlcpy.c */

//	/* Testing memchr.c */
//	char str_memchr[] = "john.smith@blabla.com";
//	
//	char *position = (char *)ft_memchr(str_memchr, '@',15 );
//	printf("My Function:\nPosition of returned pointer = :%s:\n", position);
//	char *domain = (char *)ft_memchr(str_memchr, '@', strlen(str_memchr));
//	printf("Hostname is :%s:\n", domain);
//
//	char *position2 = (char *)memchr(str_memchr, '@', 15);
//	printf("BSD Function:\nPosition of returned pointer = :%s:\n", position2);
//	char *domain2 = (char *)memchr(str_memchr, '@', strlen(str_memchr));
//	printf("Hostname is :%s:\n", domain2);
//	/* End of testing memchr.c */

//	/* Testing memcmp.c */
//	char	_memcmp_string1[] = "abcdefghijklmnopqrstuvwxyz";
//	char	_memcmp_string2[] = "abcdefghijklmnopqrstu";
//
//	printf("Comparing string 1 and 2 with \"n\" = 27:\n");
//	printf("String1 is:\n:%s:\n", _memcmp_string1);
//	printf("String2 is:\n:%s:\n", _memcmp_string2);
//	printf("Original memcmp: :%d:\n", memcmp(_memcmp_string1, _memcmp_string2, sizeof(char) * 27));
//	printf("ft_memcmp:       :%d:\n\n", ft_memcmp(_memcmp_string1, _memcmp_string2, sizeof(char) * 27));
//	
//	printf("Let's use a different \"n\" = 4\n");
//	printf("Original memcmp: :%d:\n", memcmp(_memcmp_string1, _memcmp_string2, sizeof(char) * 1));
//	printf("ft_memcmp:       :%d:\n", ft_memcmp(_memcmp_string1, _memcmp_string2, sizeof(char) * 1));		
	/* End of testing memcmp.c */

//	/* Testing atoi */
//	int _ft_atoi;
//	int _atoi;
//
//	if(argc == 2)
//	{
//		_ft_atoi =  ft_atoi(argv[1]);
//		_atoi = atoi(argv[1]);
//
//		printf("ft_atoi gives 	:%i:\n", _ft_atoi);
//		printf("Real atoi gives	:%i:\n", _atoi);
//	}
//	/* End of testing atoi */

//	/* Testing ft_strdup */
//	char *_ft_strdup_string;
//	char *_strdup_string;
//
//	if(argc == 2)
//	{
//		_ft_strdup_string = ft_strdup(argv[1]);
//		_strdup_string = strdup(argv[1]);
//
//		printf("ft_strdup gives	:%s:\n", _ft_strdup_string);	
//		printf("strdup gives	:%s:\n", _strdup_string);	
//	}
//	/* End of testing ft_strdup */
//
//	/* Testing calloc */
//	int n;
//	int *a;
//
//	printf("Number of elemnents to be entered:");
//	scanf("%d", &n);
//
//	a = (int*)calloc(n, sizeof(int));
//	printf("Checking if bzero works: ");
//	for( i = 0; i < n ; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	printf("Enter %d numbers:\n", n);
//	for( i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("The numbers entered are: ");
//	for( i = 0; i < n ; i++)
//		printf("%d ", a[i]);
//	free(a);
//	/* End of testing calloc */

//	/* Testing ft_strlcat */
//	char ft_destination[20] = "1234567890_";
//	char destination[20] = "1234567890_";
//	char source[] = "Concatenateme";
//	size_t	dstsize;
//	
//	dstsize = 100; //CHANGE MY NUMBER
//	printf("Testing strlcat:\n");
//	printf("The source string to copy to destination is:\n:%s:\n", source);
//	printf("The destination string to copy to source is:\n:%s:\n", destination);
//	printf("The returned value is:\n:%lu:\n", strlcat(destination, source, dstsize));
//	printf("Applying strlcat to source string gives:\n:%s:\n", destination);
//	
//	printf("Testing ft_strlcat:\n");
//	printf("The source string to copy to destination is:\n:%s:\n", source);
//	printf("The destination string to copy to source is:\n:%s:\n", ft_destination);
//	printf("The returned value is:\n:%zu:\n", ft_strlcat(ft_destination, source, dstsize));
//	printf("Applying ft_strlcat to source string gives:\n:%s:\n\n", ft_destination);

	/* Testing ft_strnstr.c */
	char haystack [] = "haystack";
	char needle [] = "z";
	size_t length = 4;

	printf("Looking :%zu: character in my haystack :%s: to find for my needle :%s:\n", length, haystack, needle);
	printf(":%s: <- ft_strnstir@address	:%p:\n:%s: <- strnstr@address	:%p:\n", ft_strnstr(haystack,needle,length), ft_strnstr(haystack,needle,length), strnstr(haystack,needle,length), strnstr(haystack,needle,length));

	printf("Looking :%d: character in my haystack :%s: to find for my needle :%s:\n", 0, haystack, needle);
	printf(":%s: <- ft_strnstir@address	:%p:\n:%s: <- strnstr@addressi	:%p:\n", ft_strnstr(haystack,needle,0), ft_strnstr(haystack,needle,0), strnstr(haystack,needle,0), strnstr(haystack,needle,0));
	/* End of  ft_strnstr.c */

	return (0);

}	
