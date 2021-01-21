// JUGGLING ALGORITHM
// LET THERE BE AN ARRAY OF LENGTH len AND POSITION FROM WHERE TO ROTATE BE k
// 1. BREAK ARRAY INTO SETS WHERE NUMBER OF SETS IS GCD(len,k)
// 2. USE TWO LOOPS NESTED INTO ONE ANOTHER: 
//                                  OUTER--> NUMBER OF SETS 
//                                  INNER--> TO SHIFT ELEMENTS BY k POSITION IN CYCLIC ORDER
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
// DISPLAYING CONTENTS OF integerArray
void displayArray(int integerArray[],int iSize){
    //DISPLAYING CONTENTS OF integerArray
    int i;
    for(i=0;i<iSize;i++)
    {
        cout<<integerArray[i]<<" ";
    }
}
int gcd(int n1,int n2){
    if(n2==0)
    return n1;
    else
    return gcd(n2,n1%n2);
}
void rotate(int arr[],int l,int pos){
    int i,j,temp,d=-1;
    for(i=0;i<gcd(l,pos);i++){
        j=i;
        temp=arr[i];
        while(1){
            d=(j+pos)%l; // FOR CYCLIC ROTATION
            if(d==i)
            break;
            else
            arr[j]=arr[d];
            j=d;
        }
        arr[j]=temp;
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
            rotate(array,len,k);
            cout<<"Contents of array after Counter-Clockwise Rotation"<<endl;
            displayArray(array,len);
            break;
        case 2:
            rotate(array,len,len-k);
            cout<<"Contents of array after Counter-Clockwise Rotation"<<endl;
            displayArray(array,len);
            break;
        default:
            cout<<"Invalid Choice";
        }
    }
        else
            cout<<"Invalid Position";
}