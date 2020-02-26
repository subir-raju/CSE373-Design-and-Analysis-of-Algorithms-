#include<stdio.h>
struct soldier{
    int briefTime;
    int opTime;

};
int main()
{
     int number;
    printf("Enter the number of soldiers:");

    scanf("%d", &number);
    if(number>=1 && number<=1000)
    {

    struct soldier soldierNumber[number];

    for(int n=0;n<number;n++)
    {
        printf("\nEnter soldier briefing time:");
        scanf("%d", &soldierNumber[n].briefTime);
        printf("\nEnter soldier operation time:");
        scanf("%d", &soldierNumber[n].opTime);
        if(soldierNumber[n].briefTime<1 || soldierNumber[n].briefTime>10000 || soldierNumber[n].opTime<1 || soldierNumber[n].opTime>10000)
           {
               printf("\nYou have exceeded the range");
               printf("\n\n\n\n");
               main();
           }
        else
            continue;
    }
    int sum=0;
    int opData=0;
    int briefdata=0;
    int flag=0;
    int count=0;

   for(int n=0;n<number;n++)
   {

    for(int n=0;n<number;n++)
    {
        if(soldierNumber[n].opTime>opData)
            {
                opData=soldierNumber[n].opTime;
                briefdata=soldierNumber[n].briefTime;
                flag=n;
            }

          else
            continue;
    }
            if(count==0)
                count=opData;
            else{
                if(count-briefdata<=0)
                {
                    count=opData;
                }
                else
                {
                    count=count-briefdata;
                    if(count>opData)
                        count=count;
                    else
                        count=opData;
                }

            }

         soldierNumber[flag].opTime=0;
       soldierNumber[flag].briefTime=0;
       sum=sum+briefdata;
       opData=0;

   }


      printf("\n\nMinimum time needed for the whole operation is %d  seconds \n\n", sum+count);

       }






    else
    {
        printf("You have exceeded the range 0<n<1001");
        printf("\n");
        main();
    }

}
