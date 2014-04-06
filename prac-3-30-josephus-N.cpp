/*
 * =====================================================================================
 *
 *       Filename:  prac-3-30-josephus-N.cpp
 *
 *    Description:  josephus versus N
 *
 *        Version:  1.0
 *        Created:  2014/3/20 16:34:16
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
    int i, N, M = 10;
    xLink t = new node( 1, NULL );
    t->next = t;
    xLink x = t;

    for ( N = 2; N <= 1000; N++ ) {
        for ( i = 2; i <= N; i++ ) {
            x = ( x->next = new node( i, t ) );
        }

        while ( x != x->next ) {
            for ( i = 1; i < M; i++ ) {
                x = x->next;
            }

            x->next = x->next->next;
        }

        cout << N << " " << x->item << ", ";
    }

    cout << endl;
}
