#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string toString( int x )
{

	stringstream s;
	s << x;
	return s.str().c_str();

}

bool isPalindrome( int val )
{

    string temp = toString( val );
    for( int i = 0; i < temp.length(); i++ )
	{

        if( temp[ i ] != temp[ temp.length() - i - 1 ] ) return false;

	}

	return true;

}

int main()
{

	int curans = 0;

    for( int i = 0; i < 1000; i++ )
	{

		for( int j = 0; j < 1000; j++ )
		{

            int temp = i*j;
            string tempstring = toString( temp );
			if( isPalindrome( temp ) and temp > curans )
			{

				curans = temp;

			}

		}

	}

	cout << curans << endl;

}
