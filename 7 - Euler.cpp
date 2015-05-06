#include <iostream>

using namespace std;

bool checkprime( int val )
{

    if( val%2 == 0 ) return false;
    //if( val == 1 ) return false;

    for( int i = 2; i < val; i++ )
    {

        if( val%i == 0 ) return false;

    }

    return true;

}

int main()
{

    int primecount = 0;
    int ans;

    for( int i = 1; primecount < 10001; i ++ )
    {

        if( checkprime( i ) ){ primecount++; cout << i << endl; }

        ans = i;

    }

    cout << ans << endl;

}
