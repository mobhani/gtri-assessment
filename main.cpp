/*
Zain Mobhani
02/09/2023
GTRI Assessment
*/

#include <vector>
#include <climits>
#include <iostream>

using namespace std;

// prototypes
int min_sum(vector<int> vect);


int main ()
{
    
    vector<int> arr = {1};

    cout << min_sum(arr) << endl;


    return 0;
}


/*
    Takes an array of integers as input.
    Returns sum of two smallest positive integers.
*/
int min_sum(vector<int> vect)
{
    if ( vect.size() > 2 )
    {
        int min_1 = INT_MAX, min_2 = INT_MAX;

        for ( int i = 0; i < vect.size(); i++ )
        {
            if ( vect[i] < min_2 && vect[i] > 0 )
            {
                min_1 = min_2;
                min_2 = vect[i];
            }

            else if ( vect[i] < min_1 && vect[i] != min_2 && vect[i] > 0 )
                min_1 = vect[i];

        }

        return min_1 + min_2;
    }
    
    return -1;
}