#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;


    if(a-- > 0 || ++b > 2)      // second condition not executed as first condition is true
    { 
        cout << "Stage1 - Inside If" << endl;
    }
    else{
        cout << "Stage2 - Inside else";
    }
    cout << a << " " << b << endl;

    int number = 3;
    cout << (25 * (++number)) << endl;
}