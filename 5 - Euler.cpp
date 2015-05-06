#include <iostream>

using namespace std;

int main()
{

    int ans = 0;

    while( true )
    {

        ans++;

        bool accepted = true;

        for( int i = 1; i < 20; i++ )
        {

            if( ans%i != 0 )
            {

                accepted = false;
                break;

            }

        }

        if( accepted )
        {

            break;

        }

    }

    cout << "Number found:" << ans << endl;

}
