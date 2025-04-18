#include <iostream>
using namespace std;

int test(int x, int y, int z){
    __asm__(
        "test:\n"
        "leaq\n"
    );
}

int main (){
    short x, y, z;
    if (argc !=4)
    {
        cout << "Error: please try again with 3 numbers" << endl;
        return 1;
    }

    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "result: " << test(x, y, z) << endl;
    return 0;
}