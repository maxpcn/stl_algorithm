/*
 * =====================================================================================
 *
 *       Filename:  prog-7-6-selection.cpp
 *
 *    Description:  selection
 *
 *        Version:  1.0
 *        Created:  2015/3/10 16:26:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
void select( Item a[ ], int l, int r, int k )
{
    if ( r <= l ) return;
    int i = partition( a, l, r );
    if ( i > k ) select( a, l, i - 1, k );
    if ( i < k ) select( a, i + 1, r, k );
}
