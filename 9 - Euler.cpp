#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a = 0, b = 0, c = 0;
    int ops;

    for( int i = 1; i < 1000; i++ )
    {

        for( int j = 1; j < 1000; j++ )
        {

            for( int k = 1; k < 1000; k++ )
            {

                ops++;
                c = i;
                b = j;
                a = k;

                if( a > b ) break;
                if( b > c ) break;

                if( (a + b + c)  == 1000 )
                {

                    int temp = pow( a, 2 ) + pow( b, 2 );
                    if( sqrt(temp) == c )
                    {

                        i = 1001;
                        j = 1001;
                        k = 1001;

                    }


                }
            }

        }

    }

    cout << "Calculated:" << a * b * c << endl;
    cout << "In " << ops << " ops. \n";

}
