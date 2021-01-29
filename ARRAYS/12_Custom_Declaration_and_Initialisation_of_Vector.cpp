#include <iostream>
#include <vector>
using namespace std;
// FUNCTION TEMPLATE-: USED TO DISPLAY vector OF DIFFERENT DATATYPES USING SINGLE displayVector() 
// USING reference VARIABLE-: POINTS TO THE ENTITY WHICH IS PASSED AS ARGUMENT
template <class T>
void displayVector(vector <T> &v){
    cout<<"Displaying vector contents--> ";
    for(T ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"THIS IS A CUSTOM INITIALISED vector"<<endl;
    // DECLARING AND INITIALISING vector OF DIFFERENT DATATYPES
    vector <int> v1{1,2,3,4};
    vector <float> v2{11.65,0.49,3.14,1.23};
    vector <char> v3{'a', 'b', 'c'};
    vector <string> v4{"Welcome","to","adi1103sh","github"};
    // DISPLAYING vector OF DIFFERENT DATATYPES
    displayVector(v1);
    displayVector(v2);
    displayVector(v3);
    displayVector(v4);
    return 0;
}