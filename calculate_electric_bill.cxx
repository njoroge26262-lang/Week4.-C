/*The function accepts the no of electric units consumed as input and returns the total bill amount based on given rates 
REG NO: CT100/G/26262/25
*/
int main() {
    float units, bill;               //assigning of data type
    
   
    
    if (units<=100){             //commencing of function
        bill=units*10;}
        else if (units>100&&units<=200){
            bill=100*10+(units-100)*15;}
            else if (units>200){
                bill=100*10+100*15+(units-200)*20;}
                
}                                          //end of  function