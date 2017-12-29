// Ring.cpp

#include<iostream>
#include<cstring>

using namespace::std;

#include"Ring.h"

Ring::Ring()
{
	ringFront = NULL;
	ringRear = NULL;
}

Ring::Ring(int *ringArray, int *ringFront, int *ringRear)
{
	setRingArray(*ringArray);
	setRingFront(*ringFront);
	setRingRear(*ringRear);

}

/*Ring::Ring(Ring & aRing)
{
	setrArray(aRing.getrArray());
	setrFront(aRing.getrFront());
	setrRear(aRing.getrRear());

}*/

Ring::~Ring()
{
	delete[] ringArray[5];
	delete[] ringFront;
	delete[] ringRear;
}

void Ring::setRingArray(int aRingArray)
{
	int *ringArray = new int[aRingArray];
}

void Ring::setRingFront(int aRingFront)
{
	int *ringArray = new int[aRingFront];
}

void Ring::setRingRear(int aRingRear)
{
	int *ringArray = new int[aRingRear];
}

int * Ring::getRingArray() const
{
	return ringArray[5];
}

int * Ring::getRingFront() const
{
	return ringFront;
}

int * Ring::getRingRear() const
{
	return ringRear;
}

// Function adds a data into the ring
void Ring::insert(int data)
{
	// Condition Check
	if (*ringFront == -1 && *ringRear == -1)
	{
		// Add Data.
		*ringArray[++*ringRear] = data;

		// Updates front as rear
		*ringFront = *ringRear;

		// returns
		system("pause");
		return;
	} // end if

	// Condition Check
	else if (*ringFront == (*ringRear + 1) % 5)
	{
		// Warning Message
		cout << "Ring overflow";

		// returns
		system("pause");
		return;
	} // end else if

	// Updates Rear
	*ringRear = (*ringRear + 1) % 5;

	// Update rear value as data
	*ringArray[*ringRear] = data;
}

// Function deletes a data from the ring
void Ring::deletion()
{
	// Condition check.
	if (*ringFront == -1 && *ringRear == -1)
	{
		// Warning Message.
		cout << "Ring OverFlow";

		// Return
		system("pause");
		return;
	} // end if

	// Condition check
	else if (*ringFront == *ringRear)
	{
		// Update front and rear
		*ringFront = *ringRear = -1;

		// Return
		system("pause");
		return;
	} // else if

	// Updates front
	*ringFront = *(ringFront + 1) % 5;
}

void Ring::advance()
{
	// Declare the needed variable
	int index = *ringRear;

	// Initialize temp as arra last
	int temp = *ringArray[index];

	// For loop to iterate.

	for (index = *ringRear; index > *ringFront; index++)
	{
		// Swap Values
		*ringArray[index] = *ringArray[index - 1];

	} // end for

	// Update Array
	*ringArray[0] = temp;

	// Condition check.

	if (*ringFront <= *ringRear)
	{
		// For loop to iterate.
		for (index = *ringFront; index <= *ringRear; index++)
		{
			// Display Message.
			cout << *ringArray[index];
		} // end for
	} // end if
} // end function advance()

// Fuction to display the ring data
void Ring::print()
{
	// Declare the needed variable
	int index;

	// Condition Check
	if (*ringFront <= *ringRear)
	{
		// For loop to iterate till the ring rear
		for (index = *ringFront; index <= *ringRear; index++)
		{
			// Display message.
			cout << *ringArray[index] << " ";
		} // end for

	} // end if

	else
	{
		// For loop to iterate
		for (index = *ringFront; index <= 4; index++)
		{
			// Display message.
			cout << *ringArray[index] << " ";
		} // end for
	} // end else
}
