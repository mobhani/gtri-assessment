/*
Zain Mobhani
02/09/2023
GTRI Assessment
*/

#include <climits>
#include <iostream>
#include <string>

using namespace std;

// prototypes
int min_sum( int size, double *arr );


int main ( int argc, char *argv[] )
{
    double* arr = new double[argc];

    // Takes CLI args and inserts into arror
    for ( int i = 1; i < argc; ++i )
        arr[i] = atof(argv[i]) ;

    cout << "Sum of the two lowest positive numbers from the array [";
    for ( int i = 1; i < argc; i++ )
        i == argc - 1 ? cout << arr[i] << ']': cout << arr[i] << ',';

    cout << " is " << min_sum(argc, arr) << endl;

    delete[] arr;
    
    return 0;
}


/*
    Takes an array of integers as input.
    Returns sum of two smallest positive integers.
*/
int min_sum( int size, double *arr )
{
    if ( size > 2 )
    {
        // initializes variables as max value of int as supported by C++
        double min_1 = INT_MAX;
        double min_2 = INT_MAX;

        for ( int i = 0; i < size; i++ )
        {
            // if current element is smaller than our smallest stored variable
            if ( arr[i] < min_1 && arr[i] > 0 )
            {
                min_2 = min_1;      // ovewrwrites second smallest with stored smallest
                min_1 = arr[i];    // stores new smallest 
            }
            // if current element is smaller than stored second smallest but larger than stored smallest
            else if ( arr[i] < min_2 && arr[i] != min_1 && arr[i] > 0 )
                min_2 = arr[i];    // stores new second smallest

        }

        return min_1 + min_2;
    }
    
    return -1;  // error code
}