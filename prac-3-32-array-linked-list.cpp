/*
 * =====================================================================================
 *
 *       Filename:  prac-3-32-array-linked-list.cpp
 *
 *    Description:  array implement linked list
 *
 *        Version:  1.0
 *        Created:  2014/3/20 16:53:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );
    int *item = new int[ N ];
    int *next = new int[ N ];
    int *x = item;
    int *n = next;

    for ( i = 1; i <= N; i++ ) {
        *x++ = i;
        *n++ = i;
    }

    int index = N - 1;
    next[ index ] = 0;

    while ( index != next[ index ] ) {
        for ( i = 1; i < M; i++ ) {
            index = next[ index ];
        }

        next[ index ]  = next[ next[ index ] ];
    }

    cout << item[ index ] << endl;
}
