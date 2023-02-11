/*
Zain Mobhani
02/09/2023
GTRI Assessment
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main ( int argc, char *argv[] )
{
    if ( argc != 2 )
        return -1;
    // stores bracket input as string
    string brackets = argv[1];
    // stack used to determine correct order of brackets
    stack<char> s;
    // total number of valid pairs
    int count = 0;
    // iterates over string
    for ( int i = 0; i < brackets.length(); i++ )
    {   
        switch ( brackets[i] )
        {
            // open brackets get sent to stack
            case '(':
                s.push(brackets[i]);
                break;
            case '{':
                s.push(brackets[i]);
                break;
            case '[':
                s.push(brackets[i]);
                break;
            // closing brackets pops open bracket from stack 
            case ')':
                // if closing bracket matches open bracket from stack
                if ( !s.empty() && s.top() == '(' ){    
                    count++;    // valid pair +=1
                    s.pop();    // open bracket popped
                }else {
                    // if stack empty or bracket mismatch
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            case '}':
                if ( !s.empty() && s.top() == '{' ){
                    count++;
                    s.pop();
                }else {
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            case ']':
                if ( !s.empty() && s.top() == '[' ){
                    count++;
                    s.pop();
                }else {
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            default:
                cout << "False" << 0 << endl;
                return -1;
        }  
    }
    // if stack still contains items in it
    if (!s.empty())
    {
        cout << "False, " << 0 << endl;
        return -1;
    }
    
    cout << "True, " << count << endl;
    return 0;
}