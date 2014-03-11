/*
 * =====================================================================================
 *
 *       Filename:  prac-3-14-vector-sieve-of-eratosthenes.cpp
 *
 *    Description:  vector instead array
 *
 *        Version:  1.0
 *        Created:  2014-3-11 14:24:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include <vector>

using namespace std;

static const int N = 1000;

int main( void )
{
    int i;

    vector< int > *a = new vector< int >( N );

    if ( !a ) {
        cout << "out of memory" << endl;
        return 0;
    }

    for ( i = 2; i < N; i++ ) {
        a[ i ] = 1;
    }

    for ( i = 2; i < N; i++ ) {
        if ( a[ i ] ) {
            for ( long long j = i; j * i < N; j++ ) {
                a[ i * j ] = 0;
            }
        }
    }

    for ( i = 2; i < N; i++ ) {
        if ( a[ i ] ) {
            cout << " " << i;
        }
    }

    cout << endl;
}
