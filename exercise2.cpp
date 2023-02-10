/*
Zain Mobhani
02/09/2023
GTRI Assessment
*/

#include <vector>
#include <climits>
#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

// prototypes
int min_sum( vector<double> vect );


int main ( int argc, char *argv[] )
{
    vector<double> arr;

    // Takes CLI args and inserts into vector
    for ( int i = 1; i < argc; ++i )
        arr.push_back ( atof(argv[i]) );

    cout << "Sum of the two lowest positive numbers from the array [";
    for ( int i = 0; i < arr.size(); i++ )
        i == arr.size() - 1 ? cout << arr[i] << ']': cout << arr[i] << ',';

    cout << " is " << min_sum(arr) << endl;

    return 0;
}


/*
    Takes an array of integers as input.
    Returns sum of two smallest positive integers.
*/
int min_sum( vector<double> vect )
{
    if ( vect.size() > 2 )
    {
        // initializes variables as max value of int as supported by C++
        int min_1 = INT_MAX, min_2 = INT_MAX;

        for ( int i = 0; i < vect.size(); i++ )
        {
            // if current element is smaller than our smallest stored variable
            if ( vect[i] < min_1 && vect[i] > 0 )
            {
                min_2 = min_1;      // ovewrwrites second smallest with stored smallest
                min_1 = vect[i];    // stores new smallest 
            }
            // if current element is smaller than stored second smallest but larger than stored smallest
            else if ( vect[i] < min_2 && vect[i] != min_1 && vect[i] > 0 )
                min_2 = vect[i];    // stores new second smallest

        }

        return min_1 + min_2;
    }
    
    return -1;  // error code
}