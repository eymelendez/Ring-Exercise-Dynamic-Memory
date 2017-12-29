// MAIN.cpp

#include<iostream>
#include<cstring>

using namespace::std;

#include"Ring.h"

int main()
{
	int option;

	Ring rR;

	while (1)
	{
		cout << "MENU: " << endl;

		cout << "1) Insert Data (ADD)" << endl;
		cout << "2) Delete Data" << endl;
		cout << "3) Advance Data" << endl;
		cout << "4) Display Data" << endl;
		cout << "5) Exit" << endl;

		cout << "Enter a selection: ";
		cin >> option;

		switch (option)
		{

		case 1:
			// Prompt the user for input data.
			cout << "Enter data: ";

			// Read Data
			cin >> option;

			// Function call;
			rR.insert(option);

			// End of case.
			cout << "\n\n";
			break;

		case 2:
			// Function call 
			rR.deletion();
			cout << "\n\n";
			break;

		case 3:
			// Function call
			rR.advance();
			cout << "\n\n";
			break;

		case 4:
			// Function call
			rR.print();
			cout << "\n\n";
			system("pause");
			break;

		case 5:
			// Exit
			system("pause");
			exit(0);
			break;

		default:
			// Message of error
			cout << "ERROR. Closing now. " << endl;
			break;
		} // end switch.

	} // end while.

	system("pause");

	return 0;

} // end main. 15 de agosto de 2017 - Succesful!

  /*Output:

  MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 1
Enter data: 123
Press any key to continue . . .


MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 1
Enter data: 777


MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 1
Enter data: 38776


MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 4
123 777 38776

Press any key to continue . . .
MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 2


MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 4
777 38776

Press any key to continue . . .
MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 3


MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 4


Press any key to continue . . .
MENU:
1) Insert Data (ADD)
2) Delete Data
3) Advance Data
4) Display Data
5) Exit
Enter a selection: 5*/