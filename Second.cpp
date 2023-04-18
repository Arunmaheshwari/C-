#include<iostream>
using namespace std;



//if condition Statement


/*int main(){
    int mark;
    cin>>mark;
    if(mark>33){
        cout<<"Pass"<<endl;
    }
    return 0;
}


//if else conditions statement


int main(){
    int num;
    cin>>num;
    if(num%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd";
    }
    return 0;
}

// if else if conditions statement


int main(){
    int age;
    cin>>age;
    if(age<12){
        cout<<"Child"<<endl;
    }else if(age>18){
        cout<<"Adult"<<endl;
    }else{
        cout<<"Teenager"<<endl;
    }
    return 0;
}


// Nested if else condition statement

int main(){
    int num;
    cin>>num;
    if(num>33){
        if(num>80){
            cout<<"A+"<<endl;
        }else if(num>60){
            cout<<"B+"<<endl;
        }else if(num>40){
            cout<<"C+"<<endl;
        }else{
            cout<<"Pass"<<endl;
        }
    }else{
        cout<<"Fail"<<endl;
    }
    return 0;
}


// Ternary Operator


int main(){
    int mark;
    cin>>mark;
    if(mark>33){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }


     mark>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;    //Ternary operator- One liner coder
    return 0;
}


// Logical AND And OR Operator


int main(){
    int num;
    cin>>num;
    if((num%2==0) &&  (num%3==0)){
        cout<<num<<endl;
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
    if((num%3==0) || (num%5==0)){
        cout<<num<<endl;
    }else{
        cout<<"It is not that number"<<endl;
    }
    return 0;
}


// Switch case condition


int main(){
    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thrusday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        default:
        cout<<" There is no day "<<endl;
    }
    return 0;
}
int main(){
    char character;
    cin>>character;
    switch(character){
        case 'a':
        cout<<"vowel"<<endl;
        break;
        case 'e':
        cout<<"vowel"<<endl;
        break;
        case 'i':
        cout<<"vowel"<<endl;
        break;
        case 'o':
        cout<<"vowel"<<endl;
        break;
        case 'u':
        cout<<"vowel"<<endl;
        break;
        default:
        cout<<"Constant"<<endl;
        break;
    }
    return 0;
}*/


int main(){
    char character;
    cin>>character;

    if( (character=='a') || (character=='e') || (character=='i') || (character=='o') || (character=='u')){
        cout<<"Vowel"<<endl;
    }else{
        cout<<"constant"<<endl;
    }
    return 0;
}