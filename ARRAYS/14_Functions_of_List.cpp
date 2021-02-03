#include <iostream>
#include <list>
using namespace std;

void displayList(list <int> &l){
    list <int> :: iterator i;
    for(i=l.begin();i!=l.end();i++)
    cout<<*i<<" ";
}

int main()
{
    list <int> l1;
    // TO STORE VALUES ONE AFTER THE OTHER WE USE push_back(element)
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(11);
    l1.push_back(2);
    l1.push_back(3);
    // TO STORE VALUES ONE BEFORE THE OTHER WE USE push_back(element)
    l1.push_front(17);
    l1.push_front(21);
    l1.push_front(31);
    // size(): NO. OF ELEMENTS IN VECTOR
    cout<<"Size of list is "<<l1.size()<<endl;
    cout<<"Displaying list contents after using push_back() and pop_front--> ";
    displayList(l1);
    // TO REMOVE ELEMENTS FROM BACK WE USE pop_back()
    cout<<endl<<"Lets remove last two elements"<<endl;
    l1.pop_back();
    l1.pop_back();
    cout<<"Displaying list contents after using pop_back() twice--> ";
    displayList(l1);
    // TO REMOVE ELEMENTS FROM FRONT WE USE pop_front()
    cout<<endl<<"Lets remove first two elements"<<endl;
    l1.pop_front();
    l1.pop_front();
    cout<<"Displaying list contents after using pop_front() twice--> ";
    displayList(l1);
    cout<<endl<<"Lets check the size of list now"<<endl;
    cout<<"Current length of list is "<<l1.size();
    // TO CHECK WHETHER list IS EMPTY OR NOT WE USE empty()
    cout<<endl<<"Is list empty? true(1) or false(0)-->  "<<l1.empty();
    // TO INSERT ELEMENT AT A SPECIFIED POSITION WE USE insert(position,no. of copies,element)
    cout<<endl<<"Lets insert element 64 twice at position 1"<<endl;
    // FOR THIS WE HAVE TO USE ITERATORS TO POINT TO A vector ENTITY we use insert
    // list <dtype> :: iterator=name_of_list.begin() // begin() POINTS TO BEGINNING OF list
    list <int> :: iterator iter=l1.begin();
    l1.insert(iter,2,64);
    cout<<"Displaying list contents after using insert(iter,2,64) --> ";
    displayList(l1);
    // TO REMOVE AN ELEMENT WE USE remove(element)
    l1.remove(6);
    cout<<endl<<"Displaying list contents after using remove(6) --> ";
    displayList(l1);
    // TO MERGE CONTENTS OF TWO SAME lists WE USE firstList.merge(secondList)
    list <int> l2(4,5); // list HAVING FOUR 5s
    list <int> l3(3,6); // list HAVING THREE 6s
    cout<<endl<<"Displaying l2 before merging l3 in it"<<endl;
    cout<<"l2--> ";
    displayList(l2);
    l2.merge(l3);
    cout<<endl<<"Displaying l2 after merging l3 in it"<<endl;
    displayList(l2);
    // TO SORT LIST iIN ASCENDING ORDER WE USE sort()
    l1.sort();
    cout<<endl<<"Displaying l1 after sorting its content in ascending order"<<endl;
    displayList(l1);
    // TO REVERSE LIST WE USE list()
    l1.reverse();
    cout<<endl<<"Displaying l1 after reversing its content"<<endl;
    displayList(l1);
    return 0;
}