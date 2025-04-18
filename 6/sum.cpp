#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum_asm(int a, int b){
    __asm__(
        "mov %rsp,%rbp\n"
        "mov %edi,-0x4(%rbp)\n"
        "mov %esi,-0x8(%rbp)\n"
        "mov -0x4(%rbp),%edx\n"
        "mov -0x8(%rbp),%eax\n"
        "add %edx,%eax\n"
    );
}

int sum_asm2(int a, int b){
    __asm__(
        "add %esi,%edi\n"
        "mov %edi,%eax"
    );
}

int decode1(int *a, int *b, int *c){
    __asm__(
        "movq (%rdi),%r8\n"
        "movq %rdx,(%rdi)\n"
        "movq %rsi,(%rdx)\n"
        "movq %r8,(%rsi)"
    );
}

int main(){
    int a,b,c;
    a = 3; b = 5;
    c = sum(a,b);
    cout << "c: " << c << endl;

    cout << "asm sum: " << sum_asm(a, b) << endl;
    cout << "asm sum2: " << sum_asm2(a, b) << endl;

    int x  = 1000, y = 2000, z = 3000; 
    cout << "before decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    decode1(&x, &y, &z);
    cout << "after decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    return 0;
}