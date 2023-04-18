#include<iostream>
#include<vector>
using namespace std;
int main(){

                                                 //Operation on Vector


    /*vector<int> v;

    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.resize(5);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;*/

                                                    //Loop on vector

                                                    // For Loop
    
    vector<int> v;
    /*for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
                                                 // for each loop
   /* for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;*/
                                             // While loop
    

   
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    v.insert(v.begin()+2, 3456);
    v.erase(v.end()-2);
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
     
    return 0;
}