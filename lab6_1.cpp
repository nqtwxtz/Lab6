#include<iostream>
using namespace std;

int main(){
    int x;
    int even = 0, odd = 0;

    while(true){
        cout << "Enter an integer: ";
        cin >> x;

        if(x == 0){
            break;
        }

        if(x % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}
