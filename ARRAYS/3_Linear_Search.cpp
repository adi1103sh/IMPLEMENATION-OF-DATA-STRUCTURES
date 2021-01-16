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
    int element,c=0;
    cout<<endl<<"Which element you want to search? ";
    cin>>element;
    // LINEAR SERACH TECHNIQUE
    for(i=0;i<iSize;i++)
    {
        if(integerArray[i]==element)
        {
            c++;
            cout<<"Search Successful!!! "<<element<<" found at index "<<i;
            break;
        }
    } 
    if(c==0)
    cout<<"Search Unsuccessful, "<<element<<" not found";
}

// NOTE-: c IS TAKEN FOR UNSUCCESSFUL SEARCH AS IF THE c REMAINS 0 THIS IMPLIES THAT element IS NOT FOUND IN THE ENTIRE ARRAY
// TIME COMPLEXITY OF LINEAR SEARCH IS O(n)
