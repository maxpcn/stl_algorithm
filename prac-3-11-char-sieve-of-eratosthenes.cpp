/*
 * =====================================================================================
 *
 *       Filename:  prac-3-11-char-sieve-of-eratosthenes.cpp
 *
 *    Description:  chars of sieve-of-eratosthenes
 *
 *        Version:  1.0
 *        Created:  2014-3-11 13:01:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>

using namespace std;

static const int N = 1000;

int main( void )
{
    int i;
    char a[ N ];

    for ( i = 2; i < N; i++ ) {
        a[ i ] = 1;
    }

    for ( i = 2; i < N; i++ ) {
        if ( a[ i ] ) {
            for ( int j = i; j * i < N; j++ ) {
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
