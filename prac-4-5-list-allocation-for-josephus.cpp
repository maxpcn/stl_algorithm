/*
 * =====================================================================================
 *
 *       Filename:  prac-4-5-list-allocation-for-josephus.cpp
 *
 *    Description:  prog 3.13, use class
 *
 *        Version:  1.0
 *        Created:  2014/5/5 10:32:51
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
#include "list.cxx"

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );

    List iList( N );

    for ( i = 1; i <= N; i++ ) {
        iList.insert( i );
    }

    while ( iList.cur( ) != iList.next( ) ) {
        for ( i = 1; i < M; i++ ) {
            iList.cur( iList.next( ) );
        }

        iList.remove( );
    }

    cout << iList.item( ) << endl;

    return 0;
}
