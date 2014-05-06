/*
 * =====================================================================================
 *
 *       Filename:  prog-3-13-list-allocation-for-josephus.cpp
 *
 *    Description:  list allocation for josephus problem
 *
 *        Version:  1.0
 *        Created:  2014/5/5 10:13:41
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
#include "list.h"

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );
    Node t, x;

    construct( N );

    for ( i = 2, x = newNode( 1 ); i <= N; i++ ) {
        t = newNode( i ); insert( x, t ); x = t;
    }

    while ( x != next( x ) ) {
        for ( i = 1; i < M; i++ ) {
            x = next( x );
        }

        deleteNode( remove( x ) );
    }

    cout << item( x ) << endl;

    return 0;
}
