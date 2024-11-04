#include<stdio.h>
int main () {
int n;
printf(" enter the number : ");
scanf(" %d",&n);
if ( n>0) {
printf(" number is positive : %d\n",n);
} else if ( n<0) {
printf(" number is negative  : %d\n",n);
} else {
printf("the number is zero %d\n",n);
}
}