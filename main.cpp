//Client File
#include <vector>
#include <iostream>
#include "Players.h"
using namespace std;

	
	int main ()
	{
		vector <Players> P1= {{"Nana",1},{"Cumberbatch",2},
								{"Nana",3},{"Patel",4},{"Makda",5}};

		for (auto P:P1)
			{
				cout << " " << P.getPname() << P.getPNum<< endl;
			}
		
		cout << endl:
	}
		
