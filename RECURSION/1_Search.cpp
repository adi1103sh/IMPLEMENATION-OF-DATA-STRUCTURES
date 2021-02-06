/* THE SIMPLE IDEA IS TO CHECK THE ARRAY FROM LEFT(lower) AS WELL AS RIGHT(upper) SIDE SIMULTANEOUSLY
   IF NUMBER(element) IS FOUND WE PRINT FOUND MESSAGE ELSE WE WILL CALL OUR FUNCTION INCREEMENTING lower
   AND DECREEMENTING upper. ONCE lower BECOMES GREATER THAN upper THIS INDICATES THAT THE ELEMENT IS 
   NOT PRESENT AND WE DISPLAY NOT FOUND MESSAGE */

#include <iostream>
using namespace std;
void recSearch(int a[],int lower,int upper,int element){
    if(lower>upper) // BASE CASE
    cout<<"\'"<<element<<"\'"<<" not found";
    else if(a[lower]==element || a[upper]==element)
    cout<<"\'"<<element<<"\'"<<" found";
    else
    recSearch(a,lower+1,upper-1,element); // RECURSIVE CALL
}

// CREATION OF integerArray
void createArray(int integerArray[],int iSize){
    int i;
    // INITIALISING integerArray BY USER INPUT
    for(i=0;i<iSize;i++)
    {
        cout<<"Enter number--> ";
        cin>>integerArray[i];
    }
}

int main()
{
    int i,e;
    // DECLARING & STORING SIZE OF array
    int len;
    cout<<"Enter size of array ";
    cin>>len;
    // DECLARING arrray
    int array[len];
    createArray(array,len);
    cout<<endl<<"Which element you want to find--> ";
    cin>>e;
    cout<<endl;
    // CALLING RECURSIVE FUNCTION
    recSearch(array,0,len-1,e);
    return 0;
}