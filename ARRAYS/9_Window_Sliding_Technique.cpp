// IN THIS WE WILL PRINT MAXIMUM SUM WITHIN A WINDOW
// EX-: a[]={5,2,-1,0,3}
// LET THE WINDOW BE 3
// SO OUR AIM IS TO GET MAXIMUM SUM FOR 3 CONSECUTIVE NUMBERS, SO
            // 5+2+(-1)=6 2+(-1)+0=1 -1+0+3=2
            // THEREFORE, MAXIMUM SUM = 6
#include <iostream>
using namespace std;
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
int main(){
    int i,j;
    // DECLARING & STORING SIZE OF windowArray
    int len;
    cout<<"Enter size of windowArray--> ";
    cin>>len;
    // DECLARING windowArray
    int windowArray[len];
    createArray(windowArray,len);
    // DECLARING & STORING window
    int window;
    cout<<"Enter window--> ";
    cin>>window;
    // DECLARING maximumwindowSum(FOR STORING MAXIMUM SUM) & currentWindowSum(FOR STORING CURRENT WINDOW SUM)
    int maximumWindowSum,currentWindowSum=0;
    if(window<len){
        for(i=0;i<window;i++)
        currentWindowSum+=windowArray[i];
        maximumWindowSum=currentWindowSum;
        for(i=1,j=window;j<len;i++,j++){
            currentWindowSum=currentWindowSum-windowArray[i-1]+windowArray[j];
            if(maximumWindowSum<currentWindowSum)
            maximumWindowSum=currentWindowSum;
        }
        cout<<"Maximum Sum is "<<maximumWindowSum;
    }
    else
    cout<<"Window is Invalid";
}