/*
 * =====================================================================================
 *
 *       Filename:  prog-7-7-nonrecursive-selection.cpp
 *
 *    Description:  nonrecursive selection
 *
 *        Version:  1.0
 *        Created:  2015/3/10 16:36:18
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
    while ( r > l ) {
        int i = partition( a, l, r );
        if ( i >= k ) {
            r = i - 1;
        }
        if ( i <= k ) {
            l = i + 1;
        }
    }
}
