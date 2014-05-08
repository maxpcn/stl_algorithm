/*
 * =====================================================================================
 *
 *       Filename:  prac-3-41-list-insertion-sort-no-head-node.cpp
 *
 *    Description:  program 3.11 list insertion sort, no head node
 *
 *        Version:  1.0
 *        Created:  2014年05月08日 09时52分15秒
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
    int N = atoi( argv[ 1 ] );
    xLink xLinkedList = new node( rand( ) % 1000, NULL );
    xLink xLinkedListNode = xLinkedList;

    for ( int i = 1; i < N; i++ ) {
        xLinkedListNode = ( xLinkedListNode->next = new node( rand( ) % 1000, NULL ) );
    }

    xLink xSortedNode, xNextNode, xSortedList = xLinkedList;

    for ( xLinkedListNode = xLinkedList->next, xSortedList->next = NULL; xLinkedListNode != NULL; xLinkedListNode = xNextNode ) {
        xNextNode = xLinkedListNode->next;

        for ( xSortedNode = xSortedList; xSortedNode->next != NULL; xSortedNode = xSortedNode->next ) {
            if ( xSortedNode->next->item > xLinkedListNode->item ) {
                break;
            }
        }
        xLinkedListNode->next = xSortedNode->next;
        xSortedNode->next = xLinkedListNode;
    }

    xLink xFirstNode = xSortedList;

    for ( xSortedNode = xSortedList; xSortedNode->next != NULL; xSortedNode = xSortedNode->next ) {
        if ( xSortedNode->next->item > xFirstNode->item ) {
            break;
        }
    }

    if ( xFirstNode != xSortedNode ) {
        xSortedList = xFirstNode->next;
        xFirstNode->next = xSortedNode->next;
        xSortedNode->next = xFirstNode;
    }

    PrintList( xSortedList );
}
