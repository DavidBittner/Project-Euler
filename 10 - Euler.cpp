#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector< uint64_t > prims;

bool checkprime( uint64_t val )
{

    if( !(val%2) and val!=2 ) return false;
    if( val == 1 ) return false;

    for( uint64_t i = 3; i < val ; i++ )
    {

        if( val%i == 0 )
        {

            return false;
            break;

        }

    }

    return true;

}

void GetPrimes( uint64_t maxval )
{

    for( uint64_t i = 1; i < maxval; i++ )
    {

        if( checkprime(i) ) prims.push_back( i );
        if( !(i%10000) ) cout << ((float)i/maxval)*100 << endl;

    }

}

int main()
{

    GetPrimes( 2000000 );
    uint64_t a = 0;
    for( int i = 0; i < prims.size(); i++ )
    {

        a += prims[i];

    }

    cout << prims.size() << endl;
    cout << a << endl;

}
