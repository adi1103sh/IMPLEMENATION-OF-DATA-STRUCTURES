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
        cout<<"Enter element in ascending order ";
        cin>>integerArray[i];
    }
    //DISPLAYING CONTENTS OF integerArray
    cout<<"Contents of integerArray"<<endl;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    } 
    cout<<endl<<"WARNING: If your Array isn't sorted then you may get undesired results"<<endl;
    int element,max,min,mid,c=0;
    cout<<"Which element you want to search? ";
    cin>>element;
    // BINARY SEARCH TECHNIQUE
    min=0;
    max=iSize-1;
    while(min<=max)
    {
        mid=(max+min)/2;
        if(integerArray[mid]<element)
        min=mid+1;
        else if(integerArray[mid]>element)
        max=mid-1;
        else
        {
            c++;
            cout<<"Search Successful!!! "<<element<<" found at index "<<mid;
            break;
        }
    }
    if(c==0)
    cout<<"Search Unsuccessful, "<<element<<" not found";
}

// NOTE-: c IS TAKEN FOR UNSUCCESSFUL SEARCH AS IF THE c REMAINS 0 THIS IMPLIES THAT element IS NOT FOUND IN THE ENTIRE ARRAY

// TIME COMPLEXITY OF BINARY SEARCH IS O(log n) 

// LIMITATIONS-: ELEMENTS SHOULD BE IN ASCENDING ORDER