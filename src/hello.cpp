#include "hello.h"
using std::cout;
using std::endl;
void HELLO::sayhello(){
std::cout << "Hello World!" << std::endl;
}
int main(){
    HELLO hello;
    hello.sayhello();
    return 0;
}