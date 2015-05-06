#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdint.h>

using namespace std;

bool checkprime( uint64_t val )
{

    if( val%2 == 0 ) return false;
    if( val == 1 ) return false;

    for( uint64_t i = 2; i < val; i++ )
    {

        if( val%i == 0 )
        {

            return false;
            break;

        }

    }

    return true;

}

int main()
{

    const uint64_t numm = 600851475143;
    int currecord = 0;

    for( int i = 1; i < sqrt( numm ); i++ )
    {

        if( numm%i == 0 )
        {

            if( checkprime(i) )
            {

                if( i > currecord )
                {

                    currecord = i;

                }

            }

        }

    }

    cout << currecord << endl;

}
