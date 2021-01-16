#include <iostream>
using namespace std;
// IN CUSTOM DECLARED ARRAY I HAVE SHOWN YOU ALL TYPE OF ARRAYS, SO IN THIS WE WILL LOOK AT int & string ONLY
int main(){
    cout<<"THIS IS A USER INPUTTED ARRAY"<<endl;
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
    // DECLARING & STORING SIZE OF stringArray
    int sSize;
    cout<<"Enter size of stringArray ";
    cin>>sSize;
    // DECLARING stringArray
    string stringArray[sSize];
    // INITIALISING integerArray BY USER INPUT
    for(i=0;i<sSize;i++)
    {
        cout<<"Enter element ";
        cin>>stringArray[i];
    }
    //DISPLAYING CONTENTS OF integerArray
    cout<<"Contents of integerArray"<<endl;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }   
    //DISPLAYING CONTENTS OF stringArray
    cout<<endl<<"Contents of stringArray"<<endl;
    for(i=0;i<sSize;i++)
    {
        cout<<stringArray[i]<<" ";
    }   
}

// NOTE-: WHILE DECLARING ARRAY ITS SIZE IS IMPORTANT AS WE CANNOT CHANGE THE SIZE OF ARRAY AT RUNTIME(HOWEVER DYNAMIC MEMORY ALLOCATION SUPPORTS THIS, WE WILL SEE THIS LATER) 
