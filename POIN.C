#include <stdio.h>
int main()
{
  int Mat1[2][2];
  int *p1=&Mat1[0][0];

  printf("Entrez 4 nombre pour la Mat1 :\n");
  for(int i=0; i<4; i++){
    scanf("%d",p1+i);
  }
  printf("\nMat1 :\n");
  for(int i=0; i<4; i++){
      printf("%d",*(p1+i));
      if((i+1)% 2==0)
           printf("\n");
  }
  int Mat2[2][2];
  int *p2=&Mat2[0][0];

  printf("Entrez 4 nombre pour la Mat2 :\n");
  for(int i=0; i<4; i++){
    scanf("%d",p2+i);
  }
  printf("\nMat2 :\n");
  for(int i=0; i<4; i++){
      printf("%d",*(p2+i));
      if((i+1)% 2==0)
           printf("\n");
  }
  int sommeMat;
  int *p3=&sommeMat;
  for( int i=0; i<4; i++){
    *(p3+i)=*(p1+i)+*(p2+i);
  }
  printf("\nsomme des matrices :\n");
  for( int i=0; i<4; i++){
    printf("%d",*(p3+i));
    if((i+1)%2==0)
        printf("\n");
  }


return 0;

}
