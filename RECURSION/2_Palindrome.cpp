/* THE SIMPLE IDEA IS TO COMPARE THE STRING FROM LEFT(lower) AS WELL AS RIGHT(upper) SIDE SIMULTANEOUSLY
   IF ANY CHARACTER ISN'T ALIKE WE PRINT 'NOT PALINDROME' ELSE WE WILL CALL OUR FUNCTION INCREEMENTING lower
   AND DECREEMENTING upper. ONCE lower BECOMES GREATER THAN upper THIS INDICATES THAT ALL THE CHARACTERS ARE 
   ALIKE AND WE PRINT 'PALINDROME' */

#include <iostream>
#include <string>
using namespace std;
void recPalindrome(string s,int lower,int upper){
    if(s[lower]!=s[upper]) // BASE CASE
    cout<<"\'"<<s<<"\'"<<" is not palindrome!";
    else if(lower==upper || s[lower-1]==s[upper])
    cout<<"\'"<<s<<"\'"<<" is palindrome!";
    else
    recPalindrome(s,lower+1,upper-1); // RECURSIVE CALL
}

int main()
{
    string str;
    cout<<"Enter word to check whether it's palindrome or not--> ";
    cin>>str;
    // CALLING RECURSIVE FUNCTION
    recPalindrome(str,0,str.length()-1); // STRING FUNCTION: length()--> SIZE OF STRING
    return 0;
}