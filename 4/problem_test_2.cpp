#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    if(atoi(argv[2]) <= atoi(argv[1])){
        cout << "Error!" << endl;
        return 0;
    }

    // for(int i=1; i < argc; i++)
    // {
    //     cout << int(*argv[i] - '0') << endl;
    // }

    cout << int(*(argv[2]+2) -'0') <<endl;

    int sum = 0;
    // for(int i=1; i< argc; i++)
    // {
    //     // cout << *argv[i] << endl;
    //     sum += atoi(argv[i]);
    // }

    cout << "The sum is: " << sum << endl;

    return 0;
}