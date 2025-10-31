/*The program accepts input for daily hotel revenues, stores the revenue and calculates the total weekly revenue and the average daily revenue.
REG NO: CT100/G/26262/25
*/

#include<stdio.h>
int main(){
    int revenue[7], sum;
    int i, avg;
    
    printf("fill in the weekly hotel revenues below:\n ");
    
    for (i=0;i<7;i++){
              printf("enter today's revenue: ");
                  scanf("%d", &revenue[i]);
                  
          sum+=revenue[i];
          
    }
    
    avg=sum/7;
    printf("Total weekly revenue= %d\n", sum);
    printf("Average daily revenue= %d\n", avg);
    
    return 0;
}