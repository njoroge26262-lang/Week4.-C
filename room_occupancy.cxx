/*The program accepts random room occupancy data and displays the no. of occupied and vacant rooms per floor.
REG NO: CT100/G/26262/25. 
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int floor, room, occupied, vacant;
    int occupancy[5][10];
    
    printf("\noccupancy data for each room(1=occupied, 0=vacant) is simulated\n");
    
    for (floor=0;floor<5;floor++){
        for (room=0;room<10;room++){
            
    occupancy[floor][room]= rand() %2; 
    }
    }
    
    for (floor=0;floor<5;floor++){
            occupied=vacant=0;
            for (room=0;room<10;room++){
                if (occupancy[floor][room]==1)
                occupied++;
                else vacant++;}
   
    printf("Floor %d -> occupied: %d, vacant: %d\n", floor +1, occupied, vacant);
    }
         
    return 0;
}