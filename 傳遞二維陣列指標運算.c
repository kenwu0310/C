#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 8
void prt_mat(int *p,int size,int col); 
main() 
{
        int i,j,a[ROW][COLUMN],col;
start:  system("CLS"); 
        for(i=0;i<ROW;i++) for(j=0;j<COLUMN;j++) a[i][j]=rand();
        printf("\na[%d][%d] 陣列原始內容 ；\n\n",ROW,COLUMN);
        prt_mat(&a[0][0],24,8);
        printf("\n\n請輸入顯示的行數 ；") ;
        fflush(stdin);scanf("%d",&col);
        printf("\n將 a[%d[%d] 陣列顯示成 %d x %d 之型式 ；\n\n",ROW,COLUMN,(24+col-1)/col,col) ;
        prt_mat(&a[0][0],24,col); 
       
eoj:
        printf("\n\n"); 
        system("pause");goto start;
}
void prt_mat(int *p,int size ,int col) 
{
   for(int i=0;i<size;i++) 
   {
      printf("%6d",*(p+i));
      if(i==size-1) break;
      if(i%col==col-1) printf("\n"); 
   } 
} 

