#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    // if((*argv[2] <= *argv[1]) && (argc != 3)){
    //     cout << "second number is not bigger than first!" << endl;
    //     return 0;
    // }

    if((atoi(argv[2]) <= atoi(argv[1]) && (argc != 3))){
        cout << "Error!" << endl;
        return 0;
    }

    int sum = 0;
    for(int i=atoi(argv[1]); i <= atoi(argv[2]); i++)
    {
        sum += i;
    }
    // for(int i=1; i< argc; i++)
    // {
    //     // cout << *argv[i] << endl;
    //     sum += int(*argv[i] - '0');
    // }

    cout << "The sum is: " << sum << endl;

    return 0;
}