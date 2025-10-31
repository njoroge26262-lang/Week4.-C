/*The program assigns random room occupancy and calculates the total  number of occupied rooms across all the 3 branches given
REG NO: CT100/G/26262/25
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   
   int chain[3][5][10], branch, floor, room;
   int occupied, vacant, roomsoccupied=0;
   
   srand(time(0));
    
     for (branch=0;branch<3;branch++){
         for (floor=0;floor<5;floor++){
             for (room=0;room<10;room++){
                  chain[branch][floor][room] = rand() %2;}
         }
     }
     
  for (branch=0;branch<3;branch++){
                 occupied=vacant=0;
                 for (floor=0;floor<5;floor++){
                     occupied=vacant=0;
                     for (room=0;room<10;room++){
                         if (chain[branch][floor][room]==1)
                         occupied++;
                         else vacant++;}
                         
                
                          
                          roomsoccupied+=occupied;
                 }
  }
  
  printf("number of rooms occupied across the three branches are: %d", roomsoccupied);
 
                            
    return 0;
}