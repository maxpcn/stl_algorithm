/*
 * =====================================================================================
 *
 *       Filename:  stl_exercise_1_4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013-12-28 9:53:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;
static const int N = 10;
int main( )
{
    int i, p, q, id[ N ];
    for ( i = 0; i < N; i++ ) id[ i ] = i;
    while ( cin >> p >> q )
    {
        int t = id[ p ];
        if ( t == id[ q ] )
        {
            cout << "id[ p ] == id[ q ]";
            cout << "id[ " << p << " ] = " << id[ p ] << ", id[ " << q << " ] = " << id[ q ] << endl;
            continue;
        }
        for ( i = 0; i < N; i++ )
        {
            cout << "id[ " << p << " ] = " << id[ p ] << ", id[ " << i << " ] = " << id[ i ] << endl;
            if ( id[ i ] == t ) 
            {
                id[ i ] = id[ q ];
                cout << "equal:";
                cout << "id[ " << i << " ] = " << id[ i ] << ", id[ " << q << " ] = " << id[ q ] << endl;
            }
        }
        cout << " " << p << " " << q << endl;
    }
}
