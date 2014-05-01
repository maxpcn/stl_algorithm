/*
 * =====================================================================================
 *
 *       Filename:  prac-4-1-num-pairs-points-square-d.cpp
 *
 *    Description:  num pairs points
 *
 *        Version:  1.0
 *        Created:  2014/4/29 21:34:10
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
    float d = atof( argv[ 2 ] );
    int i, cnt = 0, N = atoi( argv[ 1 ] );
    Point *a = new Point[ N ];

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( a[ i ].distance( a[ j ] ) < sqrt( 2 ) * d ) {
                cnt++;
            }
        }
    }

    cout << cnt << " pairs within " << d << endl;

    cnt = 0;

    float dx, dy;

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            dx = a[ i ].X( ) - a[ j ].X( );
            dy = a[ i ].Y( ) - a[ j ].Y( );

            if ( dx * dx + dy * dy  < 2 * d * d ) {
                cnt++;
            }
        }
    }

    cout << cnt << " pairs within " << d << endl;

    delete [ ] a;
}
