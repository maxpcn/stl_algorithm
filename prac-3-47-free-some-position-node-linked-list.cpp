/*
 * =====================================================================================
 *
 *       Filename:  prac-3-47-free-some-position-node-linked-list.cpp
 *
 *    Description:  fre some position node in linked list
 *
 *        Version:  1.0
 *        Created:  2014年05月09日 13时17分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <cstdlib>
#include "list.h"

using namespace std;

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] ) - 1;
    xLink xLinkedList = new node( 1, NULL );
    //xLinkedList->next = xLinkedList;
    Node xListNode = xLinkedList;

    for ( i = 2; i <= N; i++ ) {
        xListNode = ( xListNode->next = new node( i, NULL ) );
    }

    Node xRemovedNode = NULL;
    xListNode = xLinkedList;
    while ( xListNode ) {
        for ( i = 1; i < M && xListNode->next; i++ ) {
            xListNode = xListNode->next;
        }

        if ( xListNode->next == NULL ) {
            break;
        }

        xRemovedNode = xListNode->next;
        xListNode = ( xListNode->next = xListNode->next->next );
        delete xRemovedNode;
    } 
    PrintList( xLinkedList );
}
