#include<stdio.h>
#include<stdlib.h>
main()
{
        long  int j1=101L,  *p1=&j1;
        short int j2=6688,  *p2=&j2;  
        char c3[8]="12%#Az",  *p3=c3;
        float f4=4.321,     *p4=&f4;
        double d5=56.3789L, *p5=&d5; 
start:
        system("CLS");
        printf("\n&p1=%p p1=%p *p1=%d\n",& p1,p1,*p1) ; 
        printf("\n&p2=%p p2=%p *p2=%d\n",& p2,p2,*p2) ;
        printf("\n&p3=%p p3=%p *p3=%d\n",& p3,p3,*p3) ;
        printf("\n&p4=%p p4=%p *p4=%d\n",& p4,p4,*p4) ;
        printf("\n&p5=%p p5=%p *p5=%d\n",& p5,p5,*p5) ;
        printf("\nsizeof(p1)=%d sizeof(p2)=%d sizeof(p3)=%d\n", 
                  sizeof(p1),sizeof(p2),sizeof(p3)) ;
        printf("\nsizeof(p4)=%d sizeof(p5)=%d\n\n\n", 
                  sizeof(p1),sizeof(p2)) ;        
eoj:
        system("pause");goto start;
}
