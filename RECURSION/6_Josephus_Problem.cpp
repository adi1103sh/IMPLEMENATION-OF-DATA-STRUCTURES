/* JOSEPHUS PROBLEM: GAME OF DEATH IN CIRCLE */
/* n: NUMBER OF PERSON IN CIRCLE 
k: PERSON TO BE KILLED IN CIRCLE */

/* THE IDEA IS TO MAKE n PERSON SIT IN  A CIRCLE 
 THEN HAND OVER THE SWORD TO THE FIRST PERSON IN THE CIRCLE 
 AND SKIP (k-1)th PERSON(COUNTING SELF AS WELL) AND DECAPTITATE THE kth PERSON 
 TILL LAST ONE IS LEFT */

/* NOTE: SINCE WE ARE CONSIDERING THAT PERSON ARE IN A CIRCLE 
 AND HENCE WE NEED TO INCREEMENT CIRCULARLY */

 #include <iostream>
using namespace std;

int josephus(int n, int k){
     if(n==1) // BASE CASE
     return 1;
     else
     return (josephus(n-1,k)+k-1)%n+1; 
     /* TO AVOID GETTING TO THE PERSON THAT HAVE BEEN
     KILLED AND MOVING CIRCULARLY TILL LAST ONE IS LEFT */
}

int main()
{
    int n,k,j=1,i; 
    cout<<"How many people you want to sit in circle--> "; 
    cin>>n;
    int a[n];
    for(i=1;i<n;i++)
    a[i]=j++;
    cout<<"Which one to kill--> "; 
    cin>>k; 
    cout<<"Last person alive is "<<josephus(n,k); // IT GIVES THE PERSON THAT SURVIVED (NOT INDEX)
    return 0;
}