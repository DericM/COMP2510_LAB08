#include <stdio.h>

int *arr_first_max(const int *a, size_t n);
int *arr_last_max(const int *a, size_t n);
size_t str_replace(char *s, int oldc, int newc);
char *str_find_last(const char *s, int c);

int main()
{

	int a[] = {1,3,4,5,7,7,3,5,7,4,4,2,3,7};
	char b[] = "hello world";


	printf("%d\n",*arr_first_max(a, 14));
	printf("%d\n", *arr_last_max(a, 14));
	printf("%ld\n", str_replace(b, 'l', 'x'));
	printf("%c\n", *str_find_last(b, 'e'));
	
	getchar();
    return 0;
}




int *arr_first_max(const int *a, size_t n) {
	const int *p;
	const int *max = a;
	for (p = a; p<a + n; p++)
		if (p > max)
			max = p;
	return (int*)max;
}




int *arr_last_max(const int *a, size_t n) {
	const int *p;
	const int *max = a;
	for (p = a; p<a + n; p++)
		if (p >= max)
			max = p;
	return (int*)max;

}



size_t str_replace(char *s, int oldc, int newc) {
	size_t rep = 0;
	char *p;
	for (p = s; *p != '\0'; p++)
		if (*p == oldc) {
			*p = newc;
			rep++;
		}
	return rep;
}


char *str_find_last(const char *s, int c) {
	const char *p;
	const char *last = 0;
	for (p = s; *p != '\0'; p++)
		if (*p == c)
			last = p;
	return (char*)last;
}