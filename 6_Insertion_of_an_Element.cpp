// FROM NOW ON WE WILL BE USING FUNCTIONS 
#include <iostream>
using namespace std;
// CREATION OF integerArray
void createArray(int integerArray[]){
    cout<<"Lets create an array consisting 9 elements"<<endl;
    int i;
    // INITIALISING integerArray BY USER INPUT
    for(i=0;i<9;i++)
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
    int arr[10],pos,idx,ele,i;
    // CREATING ARRAY AND INITIALISING 9 VALUES
    createArray(arr);
    // DISPLAYING ARRAY CONTENTS
    displayArray(arr,9);
    cout<<endl<<"Which position you want to insert(from 1 to 10)--> ";
    cin>>pos;
    if(pos<=10){
        idx=pos-1;
        cout<<"Which element you want to insert--> ";
        cin>>ele;
        // INSERT AT LAST
        if(pos==10)
        arr[idx]=ele;
        // INSERT AT ANY OTHER POSITION
        else{
            // SHIFT ELEMENTS RIGHTWARDS SO AS TO INSERT
            for(i=9-1;i>=idx;i--)
            arr[i+1]=arr[i];
            arr[idx]=ele;
        }
        cout<<ele<<" inserted Successfully"<<endl;
        displayArray(arr,10);
    }
    else
    cout<<"Invalid Position, cannot insert";
}