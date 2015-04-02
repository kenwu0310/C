#include<stdio.h>
#include<stdlib.h>
main()
{
        int i=868, * p=&i;
        int j; int*q;
        char * a="12345";
start:
        system("CLS");
        j=737; *q=j;
        printf("\n&p=%p p=%p *p=%d\n",&p,p,* p); //&�ܼ�=��} 
        printf("\n&q=%p q=%p &j=%p *q=%d\n",&q,q,&j,*q);
        printf("\nsizeof(p)=%d sizeof(q)=%d sizeof(a)=%d\n\n\n"
               ,sizeof(p),sizeof(q),sizeof(a)); 
eoj:
        system("pause");goto start;
}
