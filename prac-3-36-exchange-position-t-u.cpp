/*
 * =====================================================================================
 *
 *       Filename:  prac-3-36-exchange-position-t-u.cpp
 *
 *    Description:  exchange nodes position after t and u
 *
 *        Version:  1.0
 *        Created:  2014-4-9 17:45:15
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

typedef node *xlink;


int main( int argc, char *argv[ ] )
{
    int N = atoi( argv[ 1 ] );
    xlink xLinkedList = new node( 1, NULL );
    xlink xLinkedListNode = xLinkedList;
    xlink t, u;

    for ( int i = 2; i <= N; i++ ) {
        xLinkedListNode = ( xLinkedListNode->next = new node( i, NULL ) );
        if ( i == N / 2 ) {
            t = xLinkedListNode;
        }

        if ( i == N / 3 ) {
            u = xLinkedListNode;
        }
    }

    xlink xNodeAfterT = t;
    xlink xNodeAfterU = u;
    xlink xTempNode;

    while ( xNodeAfterT->next != NULL && xNodeAfterU->next != NULL && xNodeAfterT->next != u && xNodeAfterU->next != t ) {
        xTempNode = xNodeAfterT->next->next;
        xNodeAfterT->next->next = xNodeAfterU->next->next;
        xNodeAfterU->next->next = xTempNode;

        xTempNode = xNodeAfterT->next;
        xNodeAfterT = ( xNodeAfterT->next = xNodeAfterU->next );
        xNodeAfterU = ( xNodeAfterU->next = xTempNode );
    }

    cout << "List:" << endl;

    xLinkedListNode = xLinkedList;
    while ( xLinkedListNode ) {
        cout << xLinkedListNode->item << "    ";
        xLinkedListNode = xLinkedListNode->next;
    }
}
