/*
 * =====================================================================================
 *
 *       Filename:  prog-3-5-sieve-of-eratosthenes.cpp
 *
 *    Description:  sieve of eratosthenes
 *
 *        Version:  1.0
 *        Created:  2014-3-11 12:50:17
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

static const int N = 1000000;

int main( void )
{
    int i;

    int *a = new int[ N ];

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

    delete [ ] a;
}
