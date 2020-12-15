#include<iostream>
using namespace std;

int main(){
int even=0,odd=0,i=1,number;
while(i==1){
    cout << "Enter an integer: ";
    cin >> number;
    if(number!=0){
        if(number%2==0){
            even++;
        }else{
            odd++;
        }
    }else{
        i--;
    }
}
    cout << "#Even numbers = "<< even<<"\n";
    cout << "#Odd numbers = "<< odd;
    return 0;
}