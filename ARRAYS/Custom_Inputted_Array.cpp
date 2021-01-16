// PRE PROCESSOR FILE THAT CONTAINS INPUT OUTPUT CLASSES
#include <iostream>
// USED FOR EMPHASIZING THAT FOR MORE THAN ONE, GO FOR STANDARD VERSION
using namespace std;
// THE BLOCK FROM WHICH PROGRAM EXECUTION BEGINS
int main(){
    cout<<"THIS IS A CUSTOM INITIALISED ARRAY"<<endl;
    // DECLARATION & INITIALISATION OF VARIOUS ARRAYS
    int integerArray[]={86,24,6,54,8};
    float floatArray[]={36.25,24.35,62.321,89.25,1.003};
    double doubleArray[]={86.35,42.3569,92.021,79.251,0.002};
    // floatArray & DoubleArray MORE OR LESS SAME, PRECISION IS MERELY A DIFFERENCE
    char characterArray[]={'A','d','a','r','s','h'};
    string stringArray[]={"Adi1103sh","welcomes","you","to","his","github repo"};
    // DISPLAYING ARRAY CONTENTS
    int i;
    cout<<"Contents of integerArray"<<endl;
    for(i=0;i<5;i++)
    cout<<integerArray[i]<<" ";
    cout<<endl<<"Contents of floatArray"<<endl;
    for(i=0;i<5;i++)
    cout<<floatArray[i]<<" ";
    cout<<endl<<"Contents of doubleArray"<<endl;
    for(i=0;i<5;i++)
    cout<<doubleArray[i]<<" ";
    cout<<endl<<"Contents of characterArray"<<endl;
    for(i=0;i<6;i++)
    cout<<characterArray[i]<<" ";
    cout<<endl<<"Contents of stringArray"<<endl;
    for(i=0;i<6;i++)
    cout<<stringArray[i]<<" ";
}

// NOTE-: WHEN WE INITIALISE ARRAY BY OUR OWN THEN SIZE IS OPTIONAL AND IS NOT NECESSARY BUT WHILE DECLARING AN ARRAY SIZE IS COMPULSIVE