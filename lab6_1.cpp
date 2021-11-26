#include<iostream>
using namespace std;

int main(){
    int N;
    int i=0;
    int a=0;
    int b=0;
   cout << "Enter an integer: ";
        cin >> N;
         if(N%2==0){
            a++;
        }
        else{
            b++;
        }
        
    while (N>0)
    {
        cout << "Enter an integer: ";
        cin >> N;
       
        if(N%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    
    cout << "#Even numbers = "<< a-1<<"\n";
    cout << "#Odd numbers = "<< b;
    return 0;
}