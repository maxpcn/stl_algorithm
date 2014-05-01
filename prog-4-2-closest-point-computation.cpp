/*
 * =====================================================================================
 *
 *       Filename:  prog-4-2-closest-point-computation.cpp
 *
 *    Description:  closest point
 *
 *        Version:  1.0
 *        Created:  2014/4/29 17:25:32
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
            if ( a[ i ].distance( a[ j ] ) < d ) {
                cnt++;
            }
        }
    }

    cout << cnt << " pairs within " << d << endl;

    delete [ ] a;
}
