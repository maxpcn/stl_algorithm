/*
 * =====================================================================================
 *
 *       Filename:  list.cpp
 *
 *    Description:  list
 *
 *        Version:  1.0
 *        Created:  2014-4-9 12:18:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <iostream>
#include "list.h"

using namespace std;

xLink freelist;

void construct( int N )
{
    freelist = new node[ N + 1 ];
    for ( int i = 0; i < N; i++ ) {
        freelist[ i ].next = &freelist[ i + 1 ];
    }
    freelist[ N ].next = NULL;
}


xLink newNode( int i )
{
    xLink x = remove( freelist );
    //xLink x = new node( 1, NULL );
    x->item = i;
    x->next = x;
    return x;
}


void deleteNode( xLink x )
{
    insert( freelist, x );
//    delete x;
}


void insert( xLink x, xLink t )
{
    t->next = x->next;
    x->next = t;
}


xLink remove( xLink x )
{
    xLink t = x->next;
    x->next = t->next;
    return t;
}


xLink next( xLink x )
{
    return x->next;
}


Item item( xLink x )
{
    return x->item;
}

void PrintList( xLink xListPrint )
{
    cout << "List:" << endl;

    xLink xListNode = xListPrint;
    while ( xListNode ) {
        cout << xListNode->item << "    ";
        xListNode = xListNode->next;
    }

    cout << endl;
}
