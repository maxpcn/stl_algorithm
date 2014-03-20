/*
 * =====================================================================================
 *
 *       Filename:  prac-3-21-print-closest-points.cpp
 *
 *    Description:  print out closest pair of points
 *
 *        Version:  1.0
 *        Created:  2014/3/18 15:10:09
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
#include <cmath>
#include "point.h"

using namespace std;

float randFloat( void )
{
    return 1.0 * rand( ) / RAND_MAX;
}

int main ( int argc, char *argv[ ] )
{
    float closestDistance = 0;
    int i;
    int N = atoi( argv[ 1 ] );
    Point *a = new Point[ N ];

    for ( i = 0; i <= N; i++ ) {
        a[ i ].x = randFloat( );
        a[ i ].y = randFloat( );
    }

    closestDistance = PointDistance( a[ 0 ], a[ 1 ] );

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( PointDistance( a[ i ], a[ j ] ) < closestDistance ) {
                closestDistance = PointDistance( a[ i ], a[ j ] );
            }
        }
    }

    cout << " pairs within " << closestDistance << ":" << endl;

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( PointDistance( a[ i ], a[ j ] ) == closestDistance ) {
                cout << "pairs: " << a[ i ].x << ", " << a[ i ].y << " ";
                cout << a[ j ].x << ", " << a[ j ].y << endl;
            }
        }
    }

    delete [ ] a;
}
