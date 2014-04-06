/*
 * =====================================================================================
 *
 *       Filename:  prac-3-34-smallest-linked-list-node.cpp
 *
 *    Description:  smallest node move to first
 *
 *        Version:  1.0
 *        Created:  2014/3/24 18:53:58
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
    xlink xSmallestNode = xLink;
    xlink xEndNode = xLink;
    
    while ( ( xLink = xLink->next ) != NULL ) {
        if ( xLink->item < xSmallestNode->item ) {
            xSmallestNode = xLink;
        }
    }

    xLink = xLinkedList;

    if ( xSmallestNode != xLinkedList ) {
        if ( xLink != xSmallestNode ) {
            while ( xSmallestNode != xLink->next ) {
                xLink = xLink->next;
            }
            xLink->next = xLink->next->next;
        }
        else {
            xLinkedList = xSmallestNode->next;
        }

        xSmallestNode->next = xLinkedList;
    }

    cout << "Min: " << xSmallestNode->item << endl;
}
