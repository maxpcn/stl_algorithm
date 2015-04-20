/*
 * =====================================================================================
 *
 *       Filename:  prog-8-3-top-down-mergesort.cpp
 *
 *    Description:  top-down mergesort
 *
 *        Version:  1.0
 *        Created:  2015/3/18 17:09:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
void mergesort( Item a[ ], int l, int r )
{
    if ( r <= l ) return;
    int m = ( r + l ) / 2;
    mergesort( a, l, m );
    mergesort( a, m + 1, r );
    merge( a, l, m, r );
}
