/*
 * =====================================================================================
 *
 *       Filename:  point.cxx
 *
 *    Description:  class point
 *
 *        Version:  1.0
 *        Created:  2014/4/28 17:41:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cmath>
#include <cstdlib>

using namespace std;

/*
 * =====================================================================================
 *        Class:  Point
 *  Description:  
 * =====================================================================================
 */
class Point
{
    friend int operator == ( const Point &a, const Point &b )
    {
        return distance( a, b ) < .001;
    }

    public:
        /* ====================  LIFECYCLE     ======================================= */
        Point ()                             /* constructor */
        {
            x = 1.0 * rand( ) / RAND_MAX;
            y = 1.0 * rand( ) / RAND_MAX;
        }

        /* ====================  ACCESSORS     ======================================= */
        float X( ) const
        {
            return x;
        }

        float Y( ) const
        {
            return y;
        }

        /* ====================  MUTATORS      ======================================= */

        /* ====================  OPERATORS     ======================================= */
        float distance( Point a ) const
        {
            float dx = x - a.x, dy = y - a.y;
            return sqrt( dx * dx + dy * dy );
        }

        float distance( void ) const
        {
            return sqrt( x * x + y * y );
        }

    protected:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  METHODS       ======================================= */
        static float distance( Point a, Point b );

        /* ====================  DATA MEMBERS  ======================================= */
        float x, y;

}; /* -----  end of class Point  ----- */


float Point::distance( Point a, Point b )
{
    return a.distance( b ); 
}

