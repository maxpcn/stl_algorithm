/*
 * =====================================================================================
 *
 *       Filename:  list.h
 *
 *    Description:  list interface
 *
 *        Version:  1.0
 *        Created:  2014-4-9 12:11:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


typedef int Item;

struct node {
    Item item;
    node *next;
};				/* ----------  end of struct node  ---------- */

typedef node *link;
typedef link Node;

void construct( int );
Node newNode( int );
void deleteNode( Node );
void insert( Node, Node );
Node remove( Node );
Node next( Node );
Item item( Node );
