/*
 * =====================================================================================
 *
 *       Filename:  prac-3-43-doubly-linked-list.cpp
 *
 *    Description:  doubly linked list swap
 *
 *        Version:  1.0
 *        Created:  2014年05月08日 15时44分57秒
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

typedef int Item;

struct node {
    Item item;
    node *prev;
    node *next;
}

typedef node *xLink;
typedef xLink Node;

Node SwapDoublyLinkedListNode( Node xLfNode, Node xRhNode )
{
    Node prev, next;

    xRhNode->prev->next = xLfNode;
    xRhNode->next->prev = xLfNode;
    xLfNode->prev->next = xRhNode;
    xLfNode->next->prev = xRhNode;
    next = xRhNode->next;
    prev = xRhNode->prev;
    xRhNode->next = xLfNode->next;
    xRhNode->prev = xLfNode->prev;
    xLfNode->next = next;
    xLfNode->prev = prev;
}
