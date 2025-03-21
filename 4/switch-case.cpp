#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int x{};
    cout << "Enter a number: ";
    cin >> x;

    switch(x){
        case 1:
            cout <<"1" << endl;
            break;
        
        case 2:
            cout << "2" << endl;
            break;
        default :
            cout << "you entered number without 1,2" << endl;
    }
    return 0;
}