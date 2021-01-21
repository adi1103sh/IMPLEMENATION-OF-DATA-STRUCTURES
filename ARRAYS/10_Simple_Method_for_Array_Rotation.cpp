// TO ROTATE ARRAY YOU NEED THE POSITION i.e. FROM WHERE TO ROTATE LETS ASSUME IT TO BE k AND LENGTH OF ARRAY BE len 
// THE SIMPLEST METHOD IS BREAK THE ARRAY IN TWO PARTS REVERSE THEM INDIVIDUALLY FINALLY REVERSE THE ENTIRE ARRAY 
// LETS VISUALISE:
// 1-> CLOCKWISE  a[]={1,2,3,4,5,6,7} len=7 k=3
// TWO DIVISIONS OF THIS ARRAY {1,2,3,4} & {5,6,7} REVERSE THEM INDIVIDUALLY {4,3,2,1} & {7,6,5}
// ARRAY LOOKS LIKE THIS {4,3,2,1,7,6,5} NOW REVERSING IT WE GET OUR DESIRED RESULT 
// {1,2,3,4,5,6,7} --> {5,6,7,1,2,3,4}
// 1-> COUNTER-CLOCKWISE  a[]={1,2,3,4,5,6,7} len=7 k=3
// TWO DIVISIONS OF THIS ARRAY {1,2,3} & {4,5,6,7} REVERSE THEM INDIVIDUALLY {3,2,1} & {7,6,5,4}
// ARRAY LOOKS LIKE THIS {3,2,1,7,6,5,4} NOW REVERSING IT WE GET OUR DESIRED RESULT 
// {1,2,3,4,5,6,7} --> {4,5,6,7,1,2,3}

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

// DISPLAYING CONTENT OF integerArray 
void displayArray(int integerArray[],int iSize){
    //DISPLAYING CONTENTS OF integerArray
    int i;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }
}

// REVERSE ARRAY CONTENTS
void reverse(int arr[],int low, int high){
    int start=low;
    int end=high;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int i;
    // DECLARING & STORING SIZE OF array
    int len,k;
    cout<<"Enter size of array ";
    cin>>len;
    // DECLARING arrray
    int array[len];
    createArray(array,len);
    cout<<endl<<"Contents of array before rotation"<<endl;
    displayArray(array,len);
    int choice;
    cout<<endl<<"Press 1 for Counter-Clockwise Rotation"<<endl<<"Press 2 for Clockwise Rotation"<<endl;
    cin>>choice;
    cout<<"Enter position from where to rotate--> ";
    cin>>k;
    if(k<len){
        switch(choice){
        case 1:
            // REVERSE FIRST HALF
            reverse(array,0,k-1);
            // REVERSE SECOND HALF 
            reverse(array,k,len-1);
            // REVERSE array
            reverse(array,0,len-1);
            cout<<"Contents of array after Counter-Clockwise Rotation"<<endl;
            displayArray(array,len);
            break;
        case 2:
            // REVERSE FIRST HALF
            reverse(array,0,len-k-1);
            // REVERSE SECOND HALF 
            reverse(array,len-k,len-1);
            // REVERSE array
            reverse(array,0,len-1);
            cout<<"Contents of array after Clockwise Rotation"<<endl;
            displayArray(array,len);
            break;
        default:
            cout<<"Invalid Choice";
        }
    }
        else
            cout<<"Invalid Position";
}
