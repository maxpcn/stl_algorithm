/*
 * =====================================================================================
 *
 *       Filename:  point.cpp
 *
 *    Description:  point
 *
 *        Version:  1.0
 *        Created:  2014-3-10 14:52:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cmath>
#include "point.h"

using namespace std;

float  PointDistance( point a, point b )
{
    float dx = a.x - b.x, dy = a.y - b.y;
    return sqrt( dx * dx + dy * dy );
}
