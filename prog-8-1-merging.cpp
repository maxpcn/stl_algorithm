/*
 * =====================================================================================
 *
 *       Filename:  prog-8-1-merging.cpp
 *
 *    Description:  merging
 *
 *        Version:  1.0
 *        Created:  2015/3/11 11:16:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
void mergeAB(
        Item c[ ],
        Item a[ ],
        int N,
        Item b[ ],
        int M );
{

    for ( int i = 0, j = 0, k = 0; k < N + M; k++ ) {
        if ( i == N ) {
            c[ k ] = b[ j++ ];
            continue;
        }
        if ( i == M ) {
            c[ k ] = a[ i++ ];
            continue;
        }

        c[ k ] = ( a[ i ] < b[ j ] ) ? a[ i++ ] : b[ j++ ];
    }
}
