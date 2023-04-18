#include <iostream>
using namespace std;

/*int main(){
    int x = 10;
    cout<<&x<<endl;
    return 0;

}

// Create a pointr that can store address of x

int main(){
    int x = 34;
    int *ptr = &x;                                    // int* ptr=int * ptr= int *ptr
    cout<<ptr;

    return 0;
}

// Accessing data through a pointer

int main()
{
    int a = 34;
    int *ptr = &a;
    cout << *ptr << endl;                           // Dereference

    // We can update the value of variable 'a' and then our pointer will show the updated value

    a = 35;
    cout << "Now updated value is 7h" << *ptr<<endl;

    // We can update the value through pointer

    *ptr = 65;
    cout<<"New value pointed by ptr "<<*ptr;
    return 0;
}

// Call by reference using pointer

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;

    swap(p1,p2);

    cout<< x <<endl;
    cout<< y <<endl;

    return 0;
}

// Pointer Arithmetic-------->

int main()
{
    int a = 20;
    double b = 43;

    double *ptr = &b;
    int *ptr1 = &a;
    cout << "Size of int a"
         << " " << sizeof(a) << endl;
    cout << "Size of double b"
         << " " << sizeof(b) << endl;

    cout << ptr << " " << (ptr + 1) << endl;
    cout << ptr1 << " " << (ptr + 1) << endl;
}

// Arrays as Pointer

int main()
{
    int arry[2]={2,5};
    int *ptr = &arry[0];

    cout<<arry<<" "<<ptr<<endl;
    cout<<*arry<<" "<<*ptr<<endl;
    cout<<(*arry+1)<<" "<<(*ptr+1)<<endl;
}

int main(){
    int ary[5] = {1,2,3,4,5};
    int *ptr = (ary+2);
    cout<<*ptr<<endl;
    *ptr++;
    cout<<*ptr<<endl;
    *ptr--;
    cout<<*ptr<<endl;

    return 0;
}*/

int main(){
    int a[3] = {1,2,3};
    int (*p)[3] = &a;
    cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl;
    return 0;

}