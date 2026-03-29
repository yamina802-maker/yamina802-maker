#include <stdio.h>
int main()
{
int a;
printf("entrer l'année");
scanf("%d",&a);
if((a%4==0&&a%100!=0)||(a%400==0)){
  printf("l'année %d bissextile",a);}
  else {
  printf("l'année %d non bissextile",a);
  }
    return 0;
}
