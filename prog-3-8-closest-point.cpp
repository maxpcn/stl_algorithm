/*
 * =====================================================================================
 *
 *       Filename:  prog-3-7-coin-flip-simu.cpp
 *
 *    Description:  simulation coin flipping
 *
 *        Version:  1.0
 *        Created:  2014-3-10 11:29:41
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
    float d = atof( argv[ 2 ] );
    int i, cnt = 0;
    int N = atoi( argv[ 1 ] );
    Point *a = new Point[ N ];

    for ( i = 0; i <= N; i++ ) {
        a[ i ].x = randFloat( );
        a[ i ].y = randFloat( );
    }

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( PointDistance( a[ i ], a[ j ] ) < d ) {
                cnt++;
            }
        }
    }


    cout << cnt << " pairs within " << d << endl;

    delete [ ] a;
}
