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
        Item *s;
        int N;

    public:
        STACK( int maxN )
        {
            s = new Item[ maxN ];
            N = 0;
        }

        int empty( void ) const
        {
            return N == 0;
        }

        void push( Item item )
        {
            s[ N++ ] = item;
        }

        Item pop ( void )
        {
            return s[ --N ];
        }
};
