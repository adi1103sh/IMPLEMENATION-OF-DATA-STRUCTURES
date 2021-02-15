/* SUBSET GENERATION PROBLEM 
str: STRING WHOSE SUBSETS ARE GENERATED 
l: LENGTH OF str 
i: INDEX OF ELEMENT FOR WHICH DECISION IS TO BE MADE
subset: CURRENT SUBSET */

/* BASIC IDEA IS TO MAKE DECISION ON THE ELEMENT WHETHER 
TO INCLUDE OR NOT AND WHEN INDEX OF ARRAY REACHES THE END
PRINT THE subset GENERATED*/

#include <iostream>
#include <string>
using namespace std;
void powerSet(string str,int i,int l,string subset){
    if(i==l){ // BASE CASE
        cout<<subset<<endl;
        return;
    }
    else{
        powerSet(str,i+1,l,subset+str[i]); // INCLUDE CURRENT ELEMENT 
        powerSet(str,i+1,l,subset); // NOT INCLUDE CURRENT ELEMENT 
    }
}
int main()
{
    string s,ss=" ";
    int len;
    cout<<"Enter your String to get its SubSet--> ";
    cin>>s;
    len=s.length();
    powerSet(s,0,len,ss);
    return 0;
}