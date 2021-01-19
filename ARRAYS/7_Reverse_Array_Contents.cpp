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
    cout<<"Contents of integerArray"<<endl;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }
}
int main(){
    int start,end,temp;
     // DECLARING & STORING SIZE OF arr
    int len;
    cout<<"Enter size of integerArray ";
    cin>>len;
    // DECLARING integerArray
    int arr[len];
    createArray(arr,len);
    cout<<"Before Reversing"<<endl;
    displayArray(arr,len);
    // REVERSING ARRAY CONTENTS
    start=0;
    end=len-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<endl<<"After Reversing"<<endl;
    displayArray(arr,len);
}