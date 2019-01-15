#include <stdio.h>

int main()
{
    int qian=0;
    printf("jinruqianbaoguanlixitong\n");
     while (1)
     {
         int a;
          printf("1--cuqian\n");
          printf("2--quqian\n");
          printf("3--yue\n");
          printf("4--tuichu\n");

          printf("shurugongnengbianhao\n");
          scanf("%d",&a);
        if(a==1)
        { 
            int cun;
             char x;
             printf("shurucunrudejine:\n");
             scanf("%d",&cun);
             qian += cun;
             printf("cunruchenggong");
             scanf("%c",&x);
              scanf("%c",&x);
         }
        if(a==2)
        {
            int qu;
            char x;
            printf("shuruquchudejine: \n");
            scanf("%d",&qu);
            if(qian>=qu)
            {
               qian -= qu;
                 printf("quchuchenggong,dianjihuichejixu");
                 scanf("%c",&x);
                 scanf("%c",&x);
            }
            else
            {
                printf("yuebuzhu\n");
                scanf("%c",&x);
 }
         if(a == 3)
         {
            
         } 
         if(a == 4)
         {
            
         }

     }

    return 0;

}


