#include <iostream>
using namespace std;

/*int factorialfunction(int n){
    if(n==1)
    return 1;
    int ans = n*factorialfunction(n-1);
    return ans;
    // We can also write like this
    
    //if(n==1) return 1;
    //return n*factorialfunction(n-1);

}
int main(){
    int result = factorialfunction(5);                     // Time complexcity = O(n)
    cout<<result<<endl;                                    // space complexcity = O(n)
    return 0;
}

//Exercise

// 1

// Fibonacci series problem
// 0,1,1,2,3,5,8,13,21 and so on

int fibfunction(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fibfunction(n - 1) + fibfunction(n - 2);
    return ans;
    // We can also write like this

    //if(n==0 or n==1) return n;
    //return fibfunction(n - 1) + fibfunction(n - 2);
}

int main()
{
    int result = fibfunction(5);                          // space complexcity = O(n)
    cout << result << endl;                               // Time complexcity = O(2^n)
    return 0;
}*/

// 2

// Given an integer, find out the sum of its digits using recursion

 int intfunction(int n){
    if(n<=0 and n>=9) return n;
    return intfunction(n/10) + (n%10);
 }

 int main(){
    int result = intfunction(43575);                         // space complexcity = O(d)
    cout<< result<<endl;                                            // Time complexcity = O(d)
    return 0;                                                // d=no of digit
 }
 