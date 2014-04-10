/*
 * =====================================================================================
 *
 *       Filename:  prac-3-37-list-copy.cpp
 *
 *    Description:  copy list
 *
 *        Version:  1.0
 *        Created:  2014-4-10 11:10:13
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

    for ( int i = 2; i <= N; i++ ) {
        xLinkedListNode = ( xLinkedListNode->next = new node( i, NULL ) );
    }

    xLinkedListNode = xLinkedList;
    xlink xLinkedListCopyNode;
    xlink xLinkedListCopy = xLinkedListCopyNode = new node( xLinkedListNode->item, xLinkedListNode->next );
    while ( ( xLinkedListNode = xLinkedListNode->next ) != NULL ) {
        xLinkedListCopyNode = ( xLinkedListCopyNode->next = new node( xLinkedListNode->item, xLinkedListNode->next ) );
    }

    cout << "List:" << endl;

    xLinkedListCopyNode = xLinkedListCopy;
    while ( xLinkedListCopyNode ) {
        cout << xLinkedListCopyNode->item << "    ";
        xLinkedListCopyNode = xLinkedListCopyNode->next;
    }
}
