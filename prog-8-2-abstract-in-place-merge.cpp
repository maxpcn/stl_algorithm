/*
 * =====================================================================================
 *
 *       Filename:  prog-8-2-abstract-in-place-merge.cpp
 *
 *    Description:  abstract in-place merge
 *
 *        Version:  1.0
 *        Created:  2015/3/11 16:58:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
void merge(
        Item a[ ],
        int l,
        int m,
        int r );
{
    int i, j;
    static Item aux[ maxN ];

    for ( i = m + 1; i > l; i-- ) {
        aux[ i - 1 ] = a[ i - 1 ];
    }
    for ( j = m; j < r; j++ ) {
        aux[ r + m - j ] = a[ j + 1 ];
    }
    for ( int k = l; k <= r; k++ ) {
        if ( aux[ j ] < aux[ i ] ) {
            a[ k ] = aux[ j-- ];
        }
        else {
            a[ k ] = aux[ i++ ];
        }
    }
}
