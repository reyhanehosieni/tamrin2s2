#include <iostream>
#include <stdlib.h>
using namespace std;

int main()

	{

		unsigned int num;



		cout << "Enter a number: ";

		cin >> num;



		srand(num);



		for (int i = 1; i <= 20; i++)

		{

			cout << rand() % 6 + 1 << "\t";



			if (i % 5 == 0)

				cout << endl;

		}

		return 0;
		system("pause");
	}