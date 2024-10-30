#include<stdio.h>
 void  main()
 {
     int mounth;
     printf("enter any mounth between 1 to 12");
     scanf("%d",&mounth);
     switch(mounth)
     {
         case 1: printf("jan");
         break;
         case 2: printf("feb");
         break;
         case 3: printf("mar");
         break;
         case 4: printf("apr");
         break;
         case 5: printf("may");
         break;
         case 6: printf("jun");
         break;
         case 7: printf("july");
         break;
         case 8: printf("agu");
         break;
         case 9: printf("sep");
         break;
         case 10: printf("oct");
         break;
         case 11: printf("nov");
         break;
         case 12: printf("dec");
         break;
         default: printf("input value not exist");
         }
}
