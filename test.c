#include "./includes/ft_printf.h"
#include "stdio.h"

int	main()
{
	int	count1;
	int	count2;

	
	// printf("-----------TEST 1 d-----------\n");
	// count1 = printf("%d\n", -1256);
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("[%15d]\n", -1256);
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("%d\n", 000);
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("[%15d]\n", 000);
	// printf("char_count = %d\n\n", count1);
	// printf("------BELOW FT_PRINTF-------\n");
	// count1 = ft_printf("%d\n", -1256);
	// ft_printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("[%15d]\n", -1256);
	// ft_printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("%d\n", 000);
	// ft_printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("[%15d]\n", 000);
	// ft_printf("char_count = %d\n\n", count1);
	// printf("---------------------------------\n\n");

	// printf("-----------TEST 2 X-----------\n");
	// count1 = printf("%X\n", -1256);
	// printf("char_count = %X\n\n", count1);
	// count1 = printf("[%15X]\n", -1256);
	// printf("char_count = %X\n\n", count1);
	// count1 = printf("%X\n", 000);
	// printf("char_count = %X\n\n", count1);
	// count1 = printf("[%15X]\n", 000);
	// printf("char_count = %X\n\n", count1);
	// printf("------BELOW FT_PRINTF-------\n");
	// count1 = ft_printf("%X\n", -1256);
	// ft_printf("char_count = %X\n\n", count1);
	// count1 = ft_printf("[%15X]\n", -1256);
	// ft_printf("char_count = %X\n\n", count1);
	// count1 = ft_printf("%X\n", 000);
	// ft_printf("char_count = %X\n\n", count1);
	// count1 = ft_printf("[%15X]\n", 000);
	// ft_printf("char_count = %X\n\n", count1);
	// printf("---------------------------------\n\n");

	// printf("-----------TEST 3 s-----------\n");
	// count1 = printf("%s\n", "hellow world!");
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("[%15s]\n", "help me!");
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("%s\n", "");
	// printf("char_count = %d\n\n", count1);
	// count1 = printf("[%15s]\n", "  help the world!");
	// printf("char_count = %d\n\n", count1);
	// printf("------BELOW FT_PRINTF-------\n");
	// count1 = ft_printf("%s\n", "hellow world!");
	// ft_printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("[%15s]\n", "help me!");
	// ft_printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("%s\n", "");
	// printf("char_count = %d\n\n", count1);
	// count1 = ft_printf("[%15s]\n", "  help the world!");
	// ft_printf("char_count = %d\n\n", count1);
	// printf("---------------------------------\n\n");

	count1 = printf("%%\n");
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%%\n");
	printf("orig count = %d\n\n", count1);

	count1 = printf("%c + %c = %c\n", '2', '2', '4');
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%c + %c = %c\n", '2', '2', '4');
	printf("orig count = %d\n\n", count1);

	count1 = printf("%s + %s = %s\n", "hello", "world", "hello world!");
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%s + %s = %s\n", "hello", "world", "hello world!");
	printf("orig count = %d\n", count1);
	count1 = printf("%s + %s = %s\n", "hello", "", "hello  ");
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%s + %s = %s\n", "hello", "", "hello  ");
	printf("orig count = %d\n\n", count1);


	count1 = printf("%d + %d = %d\n", -10, 30, 20);
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%d + %d = %d\n", -10, 30, 20);
	printf("orig count = %d\n\n", count1);

	count1 = printf("%X + %X = %x\n", -10, 30, 20);
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%X + %X = %x\n", -10, 30, 20);
	printf("orig count = %d\n\n", count1);


	count1 = printf("%u + %u = %u\n", -10, 30, 20);
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%u + %u = %u\n", -10, 30, 20);
	printf("orig count = %d\n\n", count1);

	int	*p1 = NULL;
	int *p2 = &count1;

	count1 = printf("%p + %p\n", p1, p2);
	printf("orig count = %d\n", count1);
	count1 = ft_printf("%p + %p\n", p1, p2);
	printf("orig count = %d\n\n", count1);
//cspdiuxX%

	return (0);
}