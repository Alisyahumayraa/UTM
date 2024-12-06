//exercise 1

//#include <iostream>
//#include <cctype>
//using namespace std;
//
//int main()
//{
//	char input;
//	
//	cout <<"Enter any character : ";
//	cin.get(input);
//	
//	if (isdigit(input))
//	{
//		cout.put(input);
//		cout << "It is the digit";
//	}
//	
//	if(isdigit(input))
//		cout << "It is a digit";
//		
//	if (islower(input))
//		cout << "The letter entered is lowercase";
//		
//	if(isupper(input))
//		cout <<"The letter entered is uppercase";
//	
//	return 0;
//}

//exercise 2

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main ()
//{
//	double area, radius;
//	
//	cout <<"This program calculates the area of a circle. \n";
//	
//	cout <<"What is the radius of the circle?";
//	cin >> radius;
//	
//	area=3.14159 * pow(radius,2.0);
//	cout << "The area is " << area <<endl;
//	
//	system("pause");
//	
//	return 0;
//}

//exercise 3

//#include <iostream>
//#includde <cmath>
//using namespace std;
//
//int main ()
//{
//	int nom1 ,nom2 ,result;
//	
//	cout << "Enter two number";
//	cin >> nom1 >> nom2;
//	
//	if ((nom1<0) || (nom2<0))
//	{
//		cout << "negative number /s";
//	}
//	else
//	{
//		result = sqrt(nom1 + nom2);
//		cout <<"The square root of "<< nom1+nom2 << "is" << result;
//	}
//	
//		return 0;
//}

//exercise 4

//#include <iostream>
//using namespace std;

//Definiton of function displayMessage

//void displayMessage()
//{
//	cout << "Hello from the function displayMessage.\n";
//}
//
// function main
//
//int main()
//{
//	cout << "Hello from main.\n";
//	displayMessage ();
//	
//	cout <<"Back in function main again.\n";
//	return 0;
//}


//exercise 5

//#include <iostream>
//#include <cctype>
//using namespace std;
//
//int main ()
//{
//	char input[15];
//	cout << "Enter a name ";
//	cin >>input;
//	
//	for (int i=0; input [i] !='\0';i++)
//		input[i]=toupper (input[i]);
//		cout << "The name in upper case is: " << input;
//		
//	return 0;
//}

//exercise 6

//#include <iostream>
//using namespace std;
//void printhi(int);
//
//int main()
//{
//	int n;
//	cout << "Enter a value for n : ";
//	cin >>n;
//	printhi (n);
//	cout <<"Tested \n";
//	
//	return 0;
//}
//
//void printhi(int n)
//{
//	int i;
//	for(i=0 ; i<n ; i++)
//	cout <<"Hi \n";
//}

//exercise 7

//#include <iostream>
//using namespace std;
//
//void showDouble(int);
//
//int main()
//{
//	int num;
//	for (num =0 ; num<10 ; num++)
//	showDouble (num);
//	system("pause");
//	return 0;
//}
//
//void showDouble (int value)
//{
//	cout << value <<"\t";
//	cout << (value*2)<< endl;
//}

//exercise 8

//#include <iostream>
//using namespace std;
//
//void f(int n)
//{
//	
//	cout <<"Inside f(int) , the value of the parameter is " << n <<endl;
//	n+=37;
//	cout << "Inside f(int) , the modified parameter is now " << n << endl;
//	
//}
//
//int main ()
//{
//	int m =612;
//	
//	cout << "The integer m= " << m <<endl;
//	cout << "Calling f(m) ...." <<endl;
//	f(m);
//	cout <<"The integer m = " << m << endl;
//	
//	return 0;
//}

//exercise 9

//#include<iostream>
//using namespace std;
//
//bool isEven(int);
//
//int main ()
//{
//	int val;
//	
//	cout << "Enter an integer and I will tell you ";
//	cout <<"If it is even or odd : ";
//	cin >> val;
//	
//	if(isEven (val))
//		cout << val << "is even.\n";
//		
//	else
//		cout << val << "is odd.\n";
//		
//	return 0;
//}
//
//bool isEven (int number)
//{
//	bool status;
//	
//	if(number % 2)
//		status = false;
//		
//	else
//		status = true;
//		
//	return status;
//}
