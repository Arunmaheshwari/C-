#include<iostream>
using namespace std;
int main(){
    //int array[]={1,2,3,4};
    
   /*  cout<<sizeof(array)<<endl;                          // Accessing an array size
    cout<<sizeof(array)/sizeof(array[0])<<endl;          // Accessing an array element size
    cout<<array[2]<<endl;   */                            // Accessing an array element

   /* int array2[4];
    cout<<array2[0]<<endl;                              // Accessing array2 element
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;*/

 // For loop
   // int array[]={1,2,3,4};
   // int size = sizeof(array)/sizeof(array[0]);
   // for(int idx = 0;idx<size;idx++){
   //     cout<<array[idx]<<endl;
   // }


   // for each loop
   //int array[]={1,2,3,4,5,6,7,8};
  // for(int ele:array){
    //cout<<ele<<endl;
  // }


  //while loop
  //int array[]={1,2,3,4};
 // int size = sizeof(array)/sizeof(array[0]);
  //int index=0;
  //while(index<size){
  //  cout<<array[index]<<endl;
  //  index++;
 //}
                                            
                                            //How to take input
    
                                           // for loop
   // char vowels[5];
//  for(int index=0; index<5;index++){
   //     cin>>vowels[index];
  //  }

   // for(int index=0; index<5;index++){
   //     cout<<vowels[index]<<" ";
  //  }


                                               // for each loop
    
    char vowels[5];
    for(char &element:vowels){
        cin>>element;

    }

    for(int index=0; index<5;index++){
        cout<<vowels[index]<<" ";
    }

    return 0;
} 