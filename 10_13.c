#include <stdio.h>

void func1(int *ptr);

int main()
{
	int i, count[50]={100,200,300,400,500};

	printf("count �迭�� �����ּ�: %p, �迭�� ũ��: %d \n\n", 
		                             count, sizeof(count));

	func1(count);   //�Լ� ȣ��
	printf("count �迭�� ��: ");
    for(i=0;i<5;i++)
		printf("%d ," , count[i]);
    printf("\n\n");

	return 0;
}

void func1(int *ptr)
{
	int i;
	printf("func1() �����ͺ����� ������ �ּ�: %p, �����ͺ����� ũ�� :%d \n\n", 
		                         ptr, sizeof(ptr));

	for(i=0;i<5;i++)
	   *(ptr+i) = *(ptr+i) + 50;
}