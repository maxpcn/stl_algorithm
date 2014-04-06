/*
 * =====================================================================================
 *
 *       Filename:  prac-3-25-copy-nodes-circular-list.cpp
 *
 *    Description:  copy nodes
 *
 *        Version:  1.0
 *        Created:  2014/3/20 13:54:10
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

int CopyCircluarList( const xLink source, xLink destination )
{
    if ( !( source && destination ) ) return 0;

    int count = 0;
    xLink node;
    while ( source != source->next ) {
        node = source->next;
        source->next = node->next;
        node->next = destination->next;
        destination->next = node;
        count++;
    }

    source->next = destination->next;
    destination->next = source;
    count++;

    return count;
}


int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] );
    xLink t = new node( 1, NULL ), s = new node( 1, NULL );
    t->next = t;
    xLink x = t;

    s->next = s;
    xLink y = s;

    for ( i = 2; i <= N; i++ ) {
        x = ( x->next = new node( i, t ) );
        y = ( y->next = new node( i, s ) );
    }

    int count = CopyCircluarList( y, x );

    cout << count << endl;
}
