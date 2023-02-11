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
    
    string brackets = argv[1];

    stack<char> s;

    int count = 0;


    for ( int i = 0; i < brackets.length(); i++ )
    {   
        switch ( brackets[i] )
        {
            case '(':
                s.push(brackets[i]);
                break;
            case '{':
                s.push(brackets[i]);
                break;
            case '[':
                s.push(brackets[i]);
                break;
            
            case ')':
                if ( !s.empty() && s.top() == '(' )
                {
                    count++;
                    s.pop();
                } 
                else 
                {
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            case '}':
                if ( !s.empty() && s.top() == '{' )
                {
                    count++;
                    s.pop();
                }
                else 
                {
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            case ']':
                if ( !s.empty() && s.top() == '[' )
                {
                    count++;
                    s.pop();
                }
                else 
                {
                    cout << "False, " << 0 << endl;
                    return -1;
                }
                break;
            default:
                cout << "False" << 0 << endl;
                return -1;
        }  
    }

    if (!s.empty())
    {
        cout << "False, " << 0 << endl;
        return -1;
    }
        
    
    cout << "True, " << count << endl;
    return 0;
}

