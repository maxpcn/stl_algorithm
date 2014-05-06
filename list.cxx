/*
 * =====================================================================================
 *
 *       Filename:  list.cxx
 *
 *    Description:  list class
 *
 *        Version:  1.0
 *        Created:  2014/4/30 16:10:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */



#include <cstdlib>
/*
 * =====================================================================================
 *        Class:  Node
 *  Description:  
 * =====================================================================================
 */
class Node
{
//    typedef xLink Node;
    friend class List;

    public:
        typedef int Item;

        /* ====================  LIFECYCLE     ======================================= */
        Node () : item( 0 ), next( NULL ) { }                             /* constructor      */

        /* ====================  ACCESSORS     ======================================= */

        /* ====================  MUTATORS      ======================================= */

        /* ====================  OPERATORS     ======================================= */

    protected:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */
        Item item;
        Node *next;

}; /* -----  end of class Node  ----- */



/*
 * =====================================================================================
 *        Class:  List
 *  Description:  
 * =====================================================================================
 */
class List
{
    public:
        typedef Node *xLink;
        typedef xLink node;
        typedef int Item;
        /* ====================  LIFECYCLE     ======================================= */
        List ( int N );                             /* constructor      */
        ~List ();                            /* destructor       */

        /* ====================  ACCESSORS     ======================================= */
        node next( ) const
        {
            return xlist->next;
        }

        Item item( ) const
        {
            return xlist->item;
        }

        node cur( ) const
        {
            return xlist;
        }

        void cur( node x )
        {
            xlist = x;
        }

        /* ====================  MUTATORS      ======================================= */
        node newNode( int i )
        {
            node x = remove( freelist );
            x->item = i;
            x->next = x;
            return x;
        }		/* -----  end of method List::newNode  ----- */

        void deleteNode( node x )
        {
            insert( freelist, x );
        }

        void insert( node x, node t )
        {
            t->next = x->next;
            x->next = t;
        }

        node insert( int i )
        {
            node t = newNode( i );

            if ( xlist ) {
                insert( xlist, t );
            }
            xlist = t;
            return t;
        }

        node erase( node x )
        {
            node next_node = x->next;
            deleteNode( remove( x ) );
            return next_node;
        }

        node remove( node x )
        {
            node t = x->next;
            x->next = t->next;
            return t;
        }

        node remove( )
        {
            deleteNode( remove( xlist ) );
            return xlist->next;
        }

        /* ====================  OPERATORS     ======================================= */

        List& operator = ( const List &other ); /* assignment operator */

    protected:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */
        xLink freelist;
        xLink xlist;

}; /* -----  end of class List  ----- */


/*
 *--------------------------------------------------------------------------------------
 *       Class:  List
 *      Method:  List
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
List::List ( int N )
{
    freelist = new Node[ N + 1 ];
    for ( int i = 0; i < N; i++ ) {
        freelist[ i ].next = &freelist[ i + 1 ];
    }
    freelist[ N ].next = NULL;

    xlist = NULL;
}  /* -----  end of method List::List  (constructor)  ----- */



List::~List ( )
{
    delete [ ] freelist;
}		/* -----  end of method List::~List  ----- */

//node List::newNode ( int i )
//{
//    node x = remove( freelist );
//    x->item = i;
//    x->next = x;
//    return x;
//}		/* -----  end of method List::newNode  ----- */

//Node newNode( int );
//void deleteNode( Node );
//void insert( Node, Node );
//Node remove( Node );
//Node next( Node );
//Item item( Node );
