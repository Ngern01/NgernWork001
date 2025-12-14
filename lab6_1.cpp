#include<iostream>
using namespace std;

int main(){
    int number;
    int evennumber=0;
    int oddnumber=0;
    while(number>0){
        cout << "Enter an integer: ";
        cin >>number;
          if (number == 0) {
            break;
        }
        if(number%2==0){
            evennumber++;
        }
        else{
            oddnumber++;
        }
    }
    cout << "#Even numbers = "<<evennumber<<endl;
    cout << "#Odd numbers = "<<oddnumber<<endl;
    return 0;
}
