#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   
    
    cout << "Ingrese 4 numeros enteros para hallar el menor:" << endl;
    float a;
    float b;
    float c;
    float d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
	if (a<b)
		{if (a<c)
			{if (a<d)
				{cout << "El menor es:" << endl;
				cout << a << endl;}
			else
				{cout << "El menor es:" << endl;
				cout << d << endl;}
			}
		else
			{if (c<d)
				{cout << "El menor es:" << endl;
				cout << c << endl;}
			else
				{cout << "El menor es:" << endl;
				cout << d << endl;}
			}
		}
	else
		{if (b<c)
			{if (b<d)
				{cout << "El menor es:" << endl;
				cout << b << endl;}
			else
		    	{cout << "El menor es:" << endl;
				cout << d << endl;}
			}
		else
			{if (c<d)
		     	{cout << "El menor es:" << endl;
				cout << c << endl;}
			else
		    	{cout << "El menor es:" << endl;
				cout << d << endl;}
			}
}
    system("PAUSE");
    return 0;
}
