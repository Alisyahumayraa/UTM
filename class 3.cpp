//exercise 1

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	char letter_grade;
//	
//	if (letter_grade == 'A')
//		cout << "Excellent !";
//		
//	else if (letter_grade == 'B')
//		cout << "Very good!";
//		
//	else if (letter_grade == 'C')
//		cout << "Good!";
//		
//	else if (letter_grade == 'D')
//		cout << "Adequate";
//		
//	else 
//		cout << "Fail";
//		
//	return 0;
//}

//exercise 2

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 10;
//	
//	while(n > 0)
//	{
//		cout << n << " ";
//		n=n - 1;
//	}
//	return 0;
//}

//exercise 3

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int n = 10;
//	do
//	{
//		cout << n << " ";
//		n = n-1;
//	}
//	while (n > 0);
//	
//	return 0;
//}

//exercise 4

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int n;
//	for (n=10 ; n>0 ; n=n-1)
//	{
//		if (n<8) break;
//		cout << n << " ";
//	}
//	return 0;
//}

//exercise 5

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	double avrg;
//	double sum = 0;
//	double i=1;
//	while (i<11)
//	{
//		sum = sum + 1;
//		i=i+2;
//	}
//	avrg = sum/5.0;
//	cout << avrg;
//	
//	return 0;
//}

//exercise 6

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int i = 1;
//	do 
//	{
//		cout << i << endl;
//		i = i + 1;
//	}
//	while (i < 11);
//	
//	return 0;	
//}

// write a complete c++ program and display incorrect pin numbers , as long the code entered is not 877

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int pin;
//	cout << "Enter the pin code : ";
//	cin >> pin;
//	
//	while (pin != 877)
//	{
//		cout << "Pin is incorrect.Pleas entered the new pin" ;
//		cin >> pin;
//	}
//	
//	cout << " You entered the correct pin";
//	
//	return 0;
//}






// print grid of stars with 4 rows and 8 columns
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int row;
//	int col;
//	for (row=0 ; row <=4 ; ++row) //outer loop
//	{
//		for (col=0 ; col <=row ; col++) //inner loop
//		cout <<"*" ;
//		cout <<endl;
//	}
//	return 0;
//}


// print the stars with triangle

//exercise 7

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	int x,y;
//	for (x=1 ; x<=8 ; x+=2)
//		for (y=x ; y<=10 ; y+=3)
//		
//	cout << "\nx = " << x << "y = " << y;
//	
//	return 0;
//}

//exercise 8

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double area , radius;
	
	cout << "This program calculates the area of a circle. \n";
	
	cout << "What is the radius of the circle ?";
	cin >>radius;
	
	area = 3.14159 * pow(radius,2.0);
	cout << "The area is " << area << endl;
	system ("pause");
	
	return 0;
}
