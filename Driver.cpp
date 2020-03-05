#include "StringAlter.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int yes = 2;
    string maybe = "123456";
    stringAlter* find = new stringAlter();
    char hello = find->findChar(maybe, yes);
    Stack* hi = new Stack();
    hi = find->divideUp("100+200-300/400*500");
    hi->display();
    delete find;
    return 0;
}