#include<stdio.h>

int main()
{
int a[10];
int i, n;

printf("How many element you want input \n");
scanf("%d", &n);

printf("input the element one by one \n");


for(i = 0; i<n; i++)
{

scanf("%d", &a[i]);

}

printf("show the total element \n");

for(i = 0; i<n; i++)
{

printf("%d ", a[i]);

}
return 1;
}
