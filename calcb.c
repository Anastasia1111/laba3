#include <stdlib.h>
#include <stdio.h>

int main()
{   int s,i;
    float x;
    printf("Введите сумму вклада в тысячах  ");
    scanf("%f",&x);
    printf ("Введите срок в днях  ");
    scanf ("%i",&s);
    printf("Выберите вариант подсчета (1/2)\n");
    scanf("%i",&i);
  if (i-1)
   {
    if ((x>=10)&&(s>=0)&&(s<=365))
             {
              if (x<=100) if (s<=30) x*=0.9;
                          else if (s<=120) x*=1.02;
                               else if (s<=240) x*=1.06;
                                    else x*=1.12 ;
              else if (s<=30) x*=0.9;
                   else if (s<=120) x*=1.03;
                        else if (s<=240) x*=1.08;
                             else x*=1.15;
             printf("%.3f т.р.\n",x);}
    else printf("Ошибка, неверные данные\n");
             }
             
  else {
        if ((s>=0)&&(s<=365))
           { if (s<=30) x*=0.9;
             else if(s<=120) x*=1.02;
                   else if(s<=240) x*=1.06;
                        else x*=1.12;
            printf("%.3f т.р.\n",x);}
           else printf("Ошибка, неверные данные");
          } 
    return 0;
}
