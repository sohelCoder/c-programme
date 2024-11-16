#include<stdio.h>
int main () {
int number,i;
printf(" enter the number : ");
scanf("%d",&number);
printf(" multiplication table : %d\n ",number);
for (i=1;i<=10;i++) { 
printf("%d x %d = %d\n", number, i, number * i);

}
}