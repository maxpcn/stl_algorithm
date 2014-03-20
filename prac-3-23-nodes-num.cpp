/*
 * =====================================================================================
 *
 *       Filename:  prac-3-23-nodes-num.cpp
 *
 *    Description:  nodes number of list
 *
 *        Version:  1.0
 *        Created:  2014/3/19 21:24:32
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

int GetNodeNumOfCircluarList( xLink node )
{
    xLink start = node, x = node;
    int count = 1;

    while ( start != x->next ) {
        x = x->next;
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

    int count = GetNodeNumOfCircluarList( x );

    cout << count << endl;
}
