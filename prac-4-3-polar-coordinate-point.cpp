/*
 * =====================================================================================
 *
 *       Filename:  prac-4-3-polar-coordinate-point.cpp
 *
 *    Description:  polar coordinate
 *
 *        Version:  1.0
 *        Created:  2014/4/30 10:35:20
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
    public:
        /* ====================  LIFECYCLE     ======================================= */
        Point ()                             /* constructor */
        {
            ro = 1.0 * rand( ) / RAND_MAX;
            theta = 360.0 * rand( ) / RAND_MAX;
        }

        /* ====================  ACCESSORS     ======================================= */

        /* ====================  MUTATORS      ======================================= */

        /* ====================  OPERATORS     ======================================= */
        float distance( Point a ) const
        {
            float deltaTheta = theta - a.theta;
            return sqrt( ro * ro + a.ro * a.ro - 2 * ro * a.ro * cos( deltaTheta ) );
        }

    protected:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  METHODS       ======================================= */

        /* ====================  DATA MEMBERS  ======================================= */
        float ro, theta;

}; /* -----  end of class Point  ----- */

