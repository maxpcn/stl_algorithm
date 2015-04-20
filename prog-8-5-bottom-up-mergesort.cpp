/*
 * =====================================================================================
 *
 *       Filename:  prog-8-5-bottom-up-mergesort.cpp
 *
 *    Description:  bottom-up mergesort
 *
 *        Version:  1.0
 *        Created:  2015/3/19 15:41:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


inline int min( int A, int B )
{
    return ( A < B ) ? A : B;
}


template < class Item >
void mergesortBU( Item a[ ], int l, int r )
{
    for ( int m = 1; m <= r - l; m = m + m ) {
        for ( int i = l; i <= r - m; i += m + m ) {
            merge( a, i, i + m - 1, min( i + m + m - 1, r ) );
        }
    }
}
