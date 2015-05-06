#include <iostream>
#include <cmath>

using namespace std;

int SumOfSquares( double am )
{

    double temp = 0;

    for( double i = 1; i < am; i++ )
    {

        temp+= ( pow( i, 2 ) );

    }

    return temp;

}

int SquareOfSums( double am )
{

    double temp = 0;

    for( double i = 1; i < am; i++ )
    {

        temp+=i;

    }

    return ( pow( temp, 2 ) );

}

int main()
{

    cout << SquareOfSums( 101 ) - SumOfSquares( 101 ) + 1 << endl;

}
