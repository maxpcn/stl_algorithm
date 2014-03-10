/*
 * =====================================================================================
 *
 *       Filename:  point.h
 *
 *    Description:  point
 *
 *        Version:  1.0
 *        Created:  2014-3-10 14:51:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

struct point {
    float x;
    float y;
};				/* ----------  end of struct point  ---------- */

typedef struct point Point;

float PointDistance( point , point );
