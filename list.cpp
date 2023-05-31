#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l1 = {1,2,3,4,5};
    // list<int>:: iterator itr;
    // auto itr = l1.begin();   // its a another way
    // cout<<*itr<<endl;

    // advance(itr, 2);
    // cout<<*itr<<endl;
    

    // Traversal in list

    // range-based loop
    // for(auto num: l1){
    //     cout<<num<<endl;
    // }
    // Another way to traversal that is iterator

    for(auto itr = l1.begin(); itr!= l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;


     // reverse traversal

    // for(auto itr = l1.rbegin(); itr!=l1.rend(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    // inserting elements
    //1
    // auto itr = l1.begin();
    // advance(itr,2);
    // l1.insert(itr,5);

    // for(auto itr = l1.begin(); itr!= l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;
    
    // //2
    // //insert no of time

    // l1.insert(itr,4,5);
    // for(auto itr = l1.begin(); itr!= l1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    //3
    auto l = l1.begin();
    auto r = l1.begin();
    auto itr = l1.begin();
    advance(r,2); // now r is pointing to the 3
    l1.insert(itr,l,r);
    for(auto itr = l1.begin(); itr!= l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    // Deletion 

    auto s_itr = l1.begin();
    advance(s_itr,2); // s_itr pointing to 3rd element

    auto e_itr = l1.begin();
    advance(e_itr,4); // e_itr pointing to 5th position

    l1.erase(s_itr,e_itr);
    for(auto itr = l1.begin(); itr!= l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;



     
}