#include<stdio.h>
int main () {
int n;
printf(" enter integer number : ");
scanf("%d",&n);
printf(" multiplication table  %d\n ",n);
for ( int i=1;i<=10;i++) {
printf(" %d X %d=%d\n",n,i, n * i,n);	
}
}