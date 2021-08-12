#include <stdio.h>

void func1(int *ptr);

int main()
{
	int i, count[50]={100,200,300,400,500};

	printf("count 배열의 시작주소: %p, 배열의 크기: %d \n\n", 
		                             count, sizeof(count));

	func1(count);   //함수 호출
	printf("count 배열의 값: ");
    for(i=0;i<5;i++)
		printf("%d ," , count[i]);
    printf("\n\n");

	return 0;
}

void func1(int *ptr)
{
	int i;
	printf("func1() 포인터변수가 저장한 주소: %p, 포인터변수의 크기 :%d \n\n", 
		                         ptr, sizeof(ptr));

	for(i=0;i<5;i++)
	   *(ptr+i) = *(ptr+i) + 50;
}