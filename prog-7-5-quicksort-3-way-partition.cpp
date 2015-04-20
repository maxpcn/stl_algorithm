/*
 * =====================================================================================
 *
 *       Filename:  prog-7-5-quicksort-3-way-partition.cpp
 *
 *    Description:  quicksort with three-way partition
 *
 *        Version:  1.0
 *        Created:  2015/3/7 9:48:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
int operator ==( const Item &A, const Item &B )
{
    return !less( A, B ) && !less( B, A );
}

template < class Item >
void quicksort( Item a[ ], int l, int r )
{
    int k;
    Item v = a[ r ];
    if ( r <= l ) return;

    int i = l - 1;
    int j = r;
    int p = l - 1;
    int q = r;

    for ( ; ; ) {
        while ( a[ ++i ] < v );
        while ( v < a[ --j ] ) if ( j == l ) break;
        if ( i >= j ) break;

        exch( a[ i ], a[ j ] );
        if ( a[ i ] == v ) {
            p++;
            exch( a[ p ], a[ i ] );
        }
        if ( v == a[ j ] ) {
            q--;
            exch( a[ q ], a[ j ] );
        }
    }

    exch( a[ i ], a[ r ] );
    j = i - 1;
    i = i + 1;
    for ( k = l; k <= p; k++, j-- ) {
        exch( a[ k ], a[ j ] );
    }
    for ( k = r - 1; k >= q; k--, i-- ) {
        exch( a[ k ], a[ i ] );
    }

    quicksort( a, l, j );
    quicksort( a, i, r );
}
