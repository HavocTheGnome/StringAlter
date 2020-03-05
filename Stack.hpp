#include "Node.hpp"
#include <iostream>
#include <string>

using namespace std;
class Stack
{
    private:
        int counter;
        Node* top;
    public:
        Stack();
        void push(string payload);
        string pop();
        string peek();
        void display();
};