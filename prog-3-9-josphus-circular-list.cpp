/*
 * =====================================================================================
 *
 *       Filename:  prog-3-9-josphus-circular-list.cpp
 *
 *    Description:  circular list
 *
 *        Version:  1.0
 *        Created:  2014/3/19 17:15:05
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

using namespace std;

struct node
{
    int item;
    node *next;
    node( int x, node *t ) {
        item = x;
        next = t;
    }
};

typedef node *xLink;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );
    xLink t = new node( 1, NULL );
    t->next = t;
    xLink x = t;

    for ( i = 2; i <= N; i++ ) {
        x = ( x->next = new node( i, t ) );
    }

    while ( x != x->next ) {
        for ( i = 1; i < M; i++ ) {
            x = x->next;
        }

        x->next = x->next->next;
    }

    cout << x->item << endl;
}
