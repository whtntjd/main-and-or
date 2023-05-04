#include <stdio.h>
main(){
 int a;
  printf("나의 점수 입력: ");
  scanf("%d" ,&a);

  if(a>=90)
     printf("A");
  else if(a>=80)
    printf("B");
  else if(a>=70)
    printf("C");
  else if(a>=60)
    printf("D");
  else 
    printf("F");
  
}