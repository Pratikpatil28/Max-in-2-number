#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Enter the 1st number: ");
  scanf("%d",&a);
  printf("Enter the 2nd number: ");
  scanf("%d",&b);
  printf("Enter the 3rd number: ");
  scanf("%d",&c);
  
  if (a>b&&a>c){
    printf("\n%d is greater than other number %d,%d",a,b,c);
  }
  else if (b>c){
    printf("\n%d is greater than other number %d,%d",b,a,c);
  }
  else{
    printf("\n%d is greater than other number %d,%d",c,a,b);
  }

  return 0;
}