/*
 * =====================================================================================
 *
 *       Filename:  prac-3-24-nodes-num-between-x-t.cpp
 *
 *    Description:  nodes num between x and t
 *
 *        Version:  1.0
 *        Created:  2014/3/20 13:33:45
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

int GetNodeNumOfCircluarList( xLink start, xLink end )
{
    if ( start == end ) return 0;

    int count = 0;

    while ( start->next != end ) {
        start = start->next;
        count++;
    }

    return count;
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

    int count = GetNodeNumOfCircluarList( t, x );

    cout << count << endl;
}
