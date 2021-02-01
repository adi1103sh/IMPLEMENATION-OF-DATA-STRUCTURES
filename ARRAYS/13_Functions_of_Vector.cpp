#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector <int> &v){
    for(int ele:v){     // for-each LOOP
        cout<<ele<<" ";
    }
}

int main()
{
    vector <int> v1;
    int i;
    // TO STORE VALUES ONE AFTER THE OTHER WE USE push_back(element)
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(11);
    v1.push_back(2);
    v1.push_back(3);
    // capacity(): OCCUPANCY OF VECTOR whereas size(): NO. OF ELEMENTS IN VECTOR
    cout<<"Capacity of vector is "<<v1.capacity()<<endl;
    cout<<"Size of vector is "<<v1.size()<<endl;
    cout<<"Displaying vector contents after using push_back()--> ";
    displayVector(v1);
    // TO REMOVE ELEMENTS FROM BACK WE USE pop_back()
    cout<<endl<<"Lets remove last two elements"<<endl;
    v1.pop_back();
    v1.pop_back();
    cout<<"Displaying vector contents after using pop_back() twice--> ";
    displayVector(v1);
    cout<<endl<<"Lets check the size of vector now"<<endl;
    cout<<"Current length of vector is "<<v1.size();
    // TO CHECK WHETHER vector IS EMPTY OR NOT WE USE empty()
    cout<<endl<<"Is vector empty? true(1) or false(0)-->  "<<v1.empty();
    // TO INSERT ELEMENT AT A SPECIFIED POSITION WE USE insert(position,no. of copies,element)
    cout<<endl<<"Lets insert element 64 twice at position 3"<<endl;
    // FOR THIS WE HAVE TO USE ITERATORS TO POINT TO A vector ENTITY we use insert
    // vector <dtype> :: iterator=name_of_vector.begin() // begin() POINTS TO BEGINNING OF vector
    vector <int> :: iterator iter=v1.begin();
    v1.insert(iter+2,2,64);
    cout<<"Displaying vector contents after using insert(iter+2,2,64) --> ";
    displayVector(v1);
    // TO DELETE ELEMENT AT A SPECIFIED POSITION WE USE erase(position)
    v1.erase(iter+1);
    cout<<endl<<"Displaying vector contents after using erase(iter+1) --> ";
    displayVector(v1);
    // TO SWAP CONTENTS OF TWO SAME vectors WE USE firstVector.swap(secondVector)
    vector <int> v2(4,11); // vector HAVING FOUR 11s
    vector <int> v3(3,6); // vector HAVING THREE 6s
    cout<<endl<<"Displaying v2 and v3 before swapping"<<endl;
    cout<<"v2--> ";
    displayVector(v2);
    cout<<"       v3--> ";
    displayVector(v3);
    v2.swap(v3);
    cout<<endl<<"Displaying v2 and v3 after swapping"<<endl;
    cout<<"v2--> ";
    displayVector(v2);
    cout<<"       v3--> ";
    displayVector(v3);
    // TO INCREASE SIZE AUTOMATICALLY FOR INSERTING WE USE emplace(position,element)
    vector <int> :: iterator it=v3.end();
    cout<<endl<<"Lets insert 6 at third last place in v3";
    v3.emplace(it-2,6);
    cout<<endl<<"Displaying vector contents after using emplace(iter-2,6) --> ";
    displayVector(v3);
    // TO INSERT ELEMENT DIRECTLY AT THE END WE USE emplace_back(element)
    cout<<endl<<"Lets insert 11 at the end in v2";
    v2.emplace_back(11);
    cout<<endl<<"Displaying vector contents after using emplace_back(element) --> ";
    displayVector(v2);
    // TO DELETE THE ENTIRE vector WE USE clear()
    v1.clear();
    cout<<endl<<"Displaying vector contents after using clear() --> "; 
    displayVector(v1); // NO OUTPUT IS GENERATED FOR THIS AS ENTIRE vector v1 IS DELETED
    return 0;
}
