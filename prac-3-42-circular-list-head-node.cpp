/*
 * =====================================================================================
 *
 *       Filename:  prac-3-42-circular-list-head-node.cpp
 *
 *    Description:  program 3.9 use head node
 *
 *        Version:  1.0
 *        Created:  2014年05月08日 14时35分38秒
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
#include "list.h"

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );
    Node head = new node( 0, NULL );
    head->next = head;
    xLink x = head;

    for ( i = 1; i <= N; i++ ) {
        x = ( x->next = new node( i, head ) );
    }

    while ( x != x->next->next ) {
        for ( i = 1; i < M; i++ ) {
            x = x->next;
            if ( x == head ) {
                x = x->next;
            }
        }

        x->next = x->next->next;
    }

    cout << x->item << endl;
}
