#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int slen(char *snum)
{
    int ret;
    char *p;
    ret = 0;

    p = snum;
    while (*p != 0)
    {
        ret++;
        p++;
    }

    return ret;
}

int convert(char *snum)
{
    int len = slen(snum);
    int i;
    int ret = 0;
    char *p;
    int sign = 1;

    p = snum;

    if (*p == 0x2d){
        sign = -1;
        p++;
    }

    len = slen(p);

    for (i = 0; i< len; i++){
        ret *= 10;
        ret += *(p+i) -0x30;
    }

    return ret * sign;
}

int mod(int a, int b){
    if (a >= 0)
        return a%b;
    else
        return a - (a / b - 1) * b;
}

int main(int argc, char *argv[]){
    int a,b,c;
    if (argc != 3){
        cout << "Please insert two numbers" << endl;
        return 0;
    }
    a = convert(argv[1]);
    b = convert(argv[2]);
    c = a%b;
    cout << a << " mod " << b << " = " << c << endl;
    cout << atoi(argv[0]) << endl;
    return 0;
}