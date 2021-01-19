// prefixSum IS AN ARRAY OF SAME LENGHT AS THAT OF prefixSumArray AND CONTAINS SUM TILL 0TH TO iTH INDEX 
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
void displayArray(int integerArray[],int iSize){
    //DISPLAYING CONTENTS OF integerArray
    int i;
    // cout<<"Contents of integerArray"<<endl;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }
}
int main(){
    int i;
     // DECLARING & STORING SIZE OF arr
    int len;
    cout<<"Enter size of integerArray ";
    cin>>len;
    // DECLARING prefixSumArray
    int prefixSumArray[len];
    createArray(prefixSumArray,len);
    // DECLARING prefixSum
    int prefixSum[len];
    // SETTING INITIAL VALUE FOR prefixSum
    prefixSum[0]=prefixSumArray[0];
    // FILLING prefixSum
    for(i=1;i<len;i++)
    prefixSum[i]=prefixSum[i-1]+prefixSumArray[i];
    // DISPLAYING prefixSumArray
    cout<<endl<<"Contents of prefixSumArray"<<endl;
    displayArray(prefixSumArray,len);
    // DISPLAYING prefixSum
    cout<<endl<<"Contents of prefixSum"<<endl;
    displayArray(prefixSum,len);
}