/*
 * =====================================================================================
 *
 *       Filename:  prog-3-18-adjacency-matrix-graph.cpp
 *
 *    Description:  adjacency-matricx graph
 *
 *        Version:  1.0
 *        Created:  2014-4-11 17:46:17
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
    int i, j, V = atoi( argv[ 1 ] );
    int adj[ V ][ V ];

    for ( i = 0; i < V; i++ ) {
        for ( j = 0; j < V; j++ ) {
            adj[ i ][ j ] = 0;
        }
    }

    for ( i = 0; i < V; i++ ) {
        adj[ i ][ i ] = 1;
    }

    while ( cin >> i >> j ) {
        adj[ i ][ j ] = 1;
        adj[ j ][ i ] = 1;
    }
}
