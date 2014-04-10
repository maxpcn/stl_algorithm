/*
 * =====================================================================================
 *
 *       Filename:  prac-3-35-rearrange-even-odd-nodes.cpp
 *
 *    Description:  rearrange even odd nodes
 *
 *        Version:  1.0
 *        Created:  2014-4-7 18:24:41
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
    int i, N = atoi( argv[ 1 ] );
    xlink xLinkedList = new node( 1, NULL );
    xlink xRearrangeListNode = xLinkedList;
    xlink xOddLinkedList, xOddLinkedListNode, xEvenLinkedList, xEvenLinkedListNode;

    for ( i = 2; i <= N; i++ ) {
        xRearrangeListNode = ( xRearrangeListNode->next = new node( i, NULL ) );
    }

    xRearrangeListNode = xLinkedList;
    xOddLinkedList = xRearrangeListNode;
    xEvenLinkedList = ( xRearrangeListNode = xRearrangeListNode->next );
    xOddLinkedListNode = xOddLinkedList;
    xEvenLinkedListNode = xEvenLinkedList;
    xRearrangeListNode = xRearrangeListNode->next;

    for ( i = 2; i < N; i++ ) {
        if ( i % 2 ) {
            xEvenLinkedListNode = ( xEvenLinkedListNode->next = xRearrangeListNode );
        }
        else {
            xOddLinkedListNode = ( xOddLinkedListNode->next = xRearrangeListNode );
        }

        xRearrangeListNode = xRearrangeListNode->next;
    }

    xOddLinkedListNode->next = xEvenLinkedList;
    xEvenLinkedListNode->next = NULL;

    cout << "List:" << endl;

    xOddLinkedListNode = xOddLinkedList;
    while ( xOddLinkedListNode ) {
        cout << xOddLinkedListNode->item << "    ";
        xOddLinkedListNode = xOddLinkedListNode->next;
    }
}
