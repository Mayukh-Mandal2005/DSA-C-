#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 0;
    while(row<n){
        int col = 1;
        
        while(col<=n){
            char ch = 'A' + row;
            cout << ch;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}