/* PERMUTATIONS OF A STRING */
/* str: STRING FOR WHICH YOU WANT PERMUTATIONS
l: INITIAL INDEX 
r: FINAL INDEX */

/* THE IDEA IS TO FIX A LETTER AND ARRANGE REMAINING LETTERS IN DIFFERENT PLACES
 THEN MOVE ON TO NEXT LETTER FIX IT UP AND ARRANGE THE OTHER ONES AND SO ON */

#include <iostream>
using namespace std;
void permute(string &str,int l,int r){
    if(l==r) // BASE CASE
    cout<<str<<endl;
    else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]); // TO FIX A LETTER
            permute(str,l+1,r); // TO ARRANGE REMAINING LETTERS
            swap(str[l],str[i]); // TO MOVE TO THE NEXT LETTER AND FIX IT UP
        }
    }
}

int main()
{
    string s;
    cout<<"Enter your String to get its Permutations--> ";
    cin>>s;
    permute(s,0,s.length()-1);
    return 0;
}