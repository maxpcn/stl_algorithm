/*
 * =====================================================================================
 *
 *       Filename:  prac-3-51-array-indices-list.cpp
 *
 *    Description:  array indices list
 *
 *        Version:  1.0
 *        Created:  2014年05月09日 15时21分24秒
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
    int next;
};				/* ----------  end of struct node  ---------- */

typedef node *xLink;
typedef xLink Node;

xLink freelist;
int freelist_index;

void construct( int N )
{
    freelist = new node[ N + 1 ];
    for ( int i = 0; i < N; i++ ) {
        freelist[ i ].next = i + 1;
    }
    freelist[ N ].next = 0;
}


xLink newNode( int i )
{
    xLink x = remove( );
    x->item = i;
    x->next = i;
    return x;
}


void deleteNode( xLink x )
{
    insert( x );
//    delete x;
}


void insert( xLink x )
{
    int index = ( int ) ( x - freelist );
    freelist[ index ].next = freelist_index;
    freelist_index = index;
}


xLink remove( )
{
    int index = freelist_index;
    freelist_index = freelist[ freelist_index ].next;
    return freelist[ index ];
}


int next( xLink x )
{
    return x->next;
}


Item item( xLink x )
{
    return x->item;
}

int main( int argc, char *argv[ ] )
{
    int i, N = atoi( argv[ 1 ] ), M = atoi( argv[ 2 ] );
    construct( N );
}
