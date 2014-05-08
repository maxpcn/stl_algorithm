/*
 * =====================================================================================
 *
 *       Filename:  prac-3-40-list-reverse-head-node.cpp
 *
 *    Description:  list reverse with head node
 *
 *        Version:  1.0
 *        Created:  2014年05月07日 15时03分24秒
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

xLink reverse( xLink xLinkX )
{
    xLink temp, head = xLinkY = xLinkX, xReverse = NULL;

    while ( xLinkY != NULL ) {
        temp = xLinkY->next;
        xLinkY->next = xReverse;
        head->next = xReverse = xLinkY;
        xLinkY = temp;
    }

    return xReverse;
}
