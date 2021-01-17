#include <iostream>
using namespace std;
int main(){
    // DECLARING & STORING SIZE OF intArray
    int iSize;
    cout<<"Enter size of integerArray ";
    cin>>iSize;
    // DECLARING integerArray
    int integerArray[iSize];
    int i;
    // INITIALISING integerArray BY USER INPUT
    for(i=0;i<iSize;i++)
    {
        cout<<"Enter element ";
        cin>>integerArray[i];
    }
    //DISPLAYING CONTENTS OF integerArray
    cout<<"Contents of integerArray"<<endl;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }     
    cout<<endl<<"Which element you want to delete? ";
    // TO STORE THE ELEMENT TO BE DELETED
    int del;
    // TO STORE INDEX VALUE OF DELETED ELEMENT
    int indexOfdel;
    cin>>del;
    // TO STORE WHETHER DELETED ELEMENT IS PRESENT OR NOT
    int check;
    // TO SEARCH WHETHER THE ELEMENT YOU WANT TO DELETE IS PRESENT OR NOT
    for(i=0;i<iSize;i++)
    {
        if(del==integerArray[i]){
            indexOfdel=i;
            check=1;
            break;
        }
        else
        check=0;
    }
    switch(check){
        case 1:
            // SHIFT ELEMENTS LEFTWARDS SO AS TO DELETE 
            for(i=indexOfdel+1;i<iSize;i++){
                integerArray[i-1]=integerArray[i];
            }
            iSize-=1;
            cout<<del<<" is deleted"<<endl;
            cout<<"Updated contents of integerArray: ";
            for(i=0;i<iSize;i++)
            {
                cout<<integerArray[i]<<" ";
            }
            break;   
        case 0:      
            cout<<"Element not present that you want to delete"<<endl;
            cout<<"Contents of integerArray: ";
            for(i=0;i<iSize;i++)
            {
                cout<<integerArray[i]<<" ";
            }
            break; 
    }
}
// NOTE-: TILL NOW WE HAVE VIOLATED DRY(Do Not Repeat Yourself)SO FROM NOW ONWARDS WE WILL BE USING FUNCTIONS TO MAKE OUR CODE MORE EFFICIENT