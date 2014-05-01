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
//    typedef link Node;
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
        typedef Node *link;
        typedef link node;
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
            insert( xlist, t );
            xlist = t;
            return t;
        }

        node remove( node x )
        {
            node t = x->next;
            x->next = t->next;
            return t;
        }

        node remove( )
        {
            return remove( xlist );
        }

        /* ====================  OPERATORS     ======================================= */

        List& operator = ( const List &other ); /* assignment operator */

    protected:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */
        link freelist;
        link xlist;

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
