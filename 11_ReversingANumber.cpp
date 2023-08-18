# include <iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        int lastDigit=n%10;
        reverse=reverse*10 + lastDigit;
        n=n/10;
    }
    cout<<"Reversed no."<<reverse;
    return 0;
}