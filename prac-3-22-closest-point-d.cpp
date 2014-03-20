/*
 * =====================================================================================
 *
 *       Filename:  prac-3-22-closest-point-d.cpp
 *
 *    Description:  in d dimension, n-1 dimension length and n dimension difference.
 *
 *        Version:  1.0
 *        Created:  2014/3/18 16:53:05
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

float  PointDistanceInDimension( float *a, float *b, int dDimension )
{
    float distanceInDDimension = *a - *b;
    if ( dDimension < 1 ) return 0;
    if ( dDimension == 1 ) return distanceInDDimension;

    float distanceN_1Dimension = 0;
    if ( dDimension > 2 ) {
        distanceN_1Dimension = PointDistanceInDimension( ++a, ++b, --dDimension );
    }
    else {
        float dx = *( --a ) - *( --b );
        distanceN_1Dimension = sqrt( distanceInDDimension * distanceInDDimension + dx * dx );
    }

    return sqrt( distanceInDDimension * distanceInDDimension + distanceN_1Dimension * distanceN_1Dimension );
}

int main ( int argc, char *argv[ ] )
{
    float distance = atof( argv[ 2 ] );
    int i, cnt = 0;
    int N = atoi( argv[ 1 ] );
    int dDimension = atoi( argv[ 3 ] );
    float *a = new float[ N * dDimension ];
    float *pPoint = a;

    for ( i = 0; i < N; i++ ) {
        for ( int j = 0; j < dDimension; j++ ) {
            *pPoint = randFloat( );
            cout << *pPoint << ", ";
            pPoint++;
        }

        cout << "; ";
    }

    cout << endl;

    for ( i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( PointDistanceInDimension( a + i * dDimension, a + j * dDimension, dDimension ) < distance ) {
                cnt++;
            }
        }
    }

    cout << cnt << " pairs within " << distance << endl;

    delete [ ] a;
}
