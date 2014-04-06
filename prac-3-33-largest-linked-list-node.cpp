/*
 * =====================================================================================
 *
 *       Filename:  prac-3-33-largest-linked-list-node.cpp
 *
 *    Description:  largest node moved to last
 *
 *        Version:  1.0
 *        Created:  2014/3/24 17:26:39
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
    xlink xLink = xLinkedList;

    for ( i = 2; i <= N; i++ ) {
        xLink = ( xLink->next = new node( i, NULL ) );
    }

    xLink = xLinkedList;
    xlink xLargestNode = xLink;
    xlink xEndNode = xLink;
    
    while ( ( xLink = xLink->next ) != NULL ) {
        xEndNode = xLink;

        if ( xLink->item > xLargestNode->item ) {
            xLargestNode = xLink;
        }
    }

    xLink = xLinkedList;
    if ( xLargestNode != xEndNode ) {
        if ( xLink != xLargestNode ) {
            while ( xLargestNode != xLink->next ) {
                xLink = xLink->next;
            }
            xLink->next = xLink->next->next;
        }
        else {
            xLinkedList = xLargestNode->next;
        }

        xLargestNode->next = NULL;
        xEndNode->next = xLargestNode;
    }

    cout << "Max: " << xLargestNode->item << endl;
}
