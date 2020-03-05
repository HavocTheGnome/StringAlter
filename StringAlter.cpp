#include "StringAlter.hpp"
#include <iostream>
#include <string>

using namespace std;

stringAlter::stringAlter()
{
    
}
char stringAlter::findChar(string addStr, int finder)
{
    char found = addStr[finder];
    return found;
}
Stack* stringAlter::divideUp(string divStr)
{
    Stack* list = new Stack();
    string tracker;
    for(int i = 0; i <= divStr.size()-1; i++)
    {
        string modifiers = "+-/*";
        char plus = modifiers[0];
        char minus = modifiers[1];
        char div = modifiers[2];
        char mult = modifiers[3];
        char hi = divStr[i];
        if(hi == plus or hi == minus or hi == div or hi == mult)
        {
            list->push(tracker);
            tracker = "";
            tracker = tracker + hi;
            list->push(tracker);
            tracker = "";
        }
        else if(i == divStr.size()-1)
        {
            tracker = tracker + hi;
            list->push(tracker);
        }
        else
        {
            tracker = tracker + hi;
        }
        
    }
    return list;
}