/*
 * =====================================================================================
 *
 *       Filename:  stack.cxx
 *
 *    Description:  stackck adt
 *
 *        Version:  1.0
 *        Created:  2015/3/5 16:59:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


template < class Item >
class STACK
{
    private:
        struct node
        {
            Item item;
            node *next;
            node( Item x, node *t )
            {
                item = x;
                next = t;
            }
        };

        typedef node *link;
        link head;

    public:
        STACK( int maxN )
        {
            head = 0;
        }

        int empty( void ) const
        {
            return head == 0;
        }

        void push( Item x )
        {
            head = new node( x, head );
        }

        Item pop ( void )
        {
            Item v = head->item;
            link t = head->next;
            delete head;
            head = t;
            return v;
        }
};
