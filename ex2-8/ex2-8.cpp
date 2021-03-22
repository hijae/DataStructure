#include<stdio.h>
int main()
{
	int i = 10, j = 20;
	int* ptr;
	printf("i의 값 = %d \n j의 값 \n", i, j);
	printf("i의 메모리 주소(&i) = %u\n", &i);
	printf("j의 메모리 주소(&j) = %u\n", &j);

	ptr = &i;
	printf("\n\n << ptr=&i 실행 >>\n");
	printf("ptr의 메모리주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %u\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n", *ptr);

	ptr = &j;
	printf("\n\n << ptr=&j 실행 >>");
	printf("ptr의 메모리주소(&ptr) = %u\n", &ptr);
	printf("ptr의 값(ptr) = %u\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n", *ptr);

	i = *ptr;
	printf("\n << i=*ptr 실행 >>\n");
	printf("i의 값 = %d\n", i);
	return 0;
}