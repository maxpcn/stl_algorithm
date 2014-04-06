/*
 * =====================================================================================
 *
 *       Filename:  prac-3-26-move-node-circular-list-t.cpp
 *
 *    Description:  move node t next to x next next
 *
 *        Version:  1.0
 *        Created:  2014/3/20 14:36:43
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

int MoveNodeOfCircluarList( xLink source, xLink destination )
{
    xLink node_follow_destination = destination->next;
    xLink node_follow_source = source->next;

    source->next = node_follow_source->next;
    node_follow_source->next = node_follow_destination->next;
    node_follow_destination->next = node_follow_source;

    return 1;
}



int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] );
    xLink t = new node( 1, NULL );
    t->next = t;
    xLink x = t;

    for ( i = 2; i <= N; i++ ) {
        x = ( x->next = new node( i, t ) );
    }

    int count = MoveNodeOfCircluarList( x, t );

    cout << count << endl;
}
