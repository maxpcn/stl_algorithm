/*
 * =====================================================================================
 *
 *       Filename:  prac-4-4-no-equal-points.cpp
 *
 *    Description:  no equal points
 *
 *        Version:  1.0
 *        Created:  2014/4/30 12:29:04
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
#include "point.cxx"

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, cnt = 0, N = atoi( argv[ 1 ] );
    Point *a = new Point[ N ];

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            while ( a[ i ] == a[ j ] ) {
                Point b;
                a[ j ] = b; 
                cnt++;
            }

            if ( cnt ) {
                cout << "equal times: " << cnt << endl;
                cnt = 0;
            }
        }
    }

    delete [ ] a;
}
