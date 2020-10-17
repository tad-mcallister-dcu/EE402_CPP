//============================================================================
// Name        : EE402_CPP_T1.cpp
// Author      : Tad McAllister
// Version     :
// Copyright   : *DCU MSc Tutorials*
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

/*
 * 1]
 */
double sumDouble(double a,double b)
{
	return(a+b);
}

/*
 * 2]
 */
string helloName(string s)
{
	return("Hello " + s + "!");
}

/*
 * 3]
 */
bool monkeyTrouble(bool a, bool b)
{
	if (a != b) {
		return (false);
	}
	return(true);
}

/*
 * 4]
 */
void square(int *a)
{
	*a = ( (*a) * (*a));
}

/*
 * 5]
 */
int countEvens(int *arr, int n)
{
	int i, e = 0;

	/* for each element in array check if divisible by 2 */
	for (i = 0; i < n; i++) {

		if (arr[i] % 2 == 0) {
			e++;
		}
	}
	return(e);
}

/*
 * 6]
 */
bool sum28(int *arr, int n)
{
	if (countEvens(arr, n) != 8) {
		return false;
	}
	return(true);
}

/*
 * 7]
 */
void reverseStrArr(char **arr, int sz) {

	char *rv_arr[sz];
	int rv = sz;
	int j = 0, k = 0;

	for (int i =0; i < sz; i++) {
		rv_arr[rv] = arr[j];
		rv = rv-1;
		j++;
	}

	for (int i =0; i < sz; i++) {
	    std::cout << " " << rv_arr[k] << " ";
	    k++;
	}
}


int testMain(int argI, char **argA)
{
	reverseStrArr(argA, argI);

    return(EXIT_SUCCESS);
}


/*
 * 9]
 */
int factorial(int n)
{
	/* if not final depth */
	if (n >= 1) {
		/* recurse
		 * */
		return(n * factorial(n-1));
	} else {
		/* final depth */
		return(1);
	}
}


/*
 * 10]
 */
int* reverse(int a[],int n)
{
	int idx = n;
	int rev_arr[n];

	for (int i = 0; i < n; i++) {
		rev_arr[idx] = a[i];
		idx--;
	}
	/* return address of reversed array */
	return(rev_arr);
}


int main() {

	int sqrval = 12;
	square(&sqrval);

	int no_arr_0[5] = {2, 1, 2, 3, 4};
	int no_arr_1[3] = {2, 2, 0};
	int no_arr_2[3] = {1, 3, 5};

	int no_arr_3[6] = {2, 3, 2, 2, 4, 2};
	int no_arr_4[7] = {2, 3, 2, 2, 4, 2, 2};
	int no_arr_5[4] = {1, 2, 3, 4};
	int no_arr_6[8] = {2, 2, 4, 4, 6, 6, 8, 8};

	int no_arr_7[5] = {11, 22, 33, 44, 55};

	char *str_arr[3] = {"help", "me", "please"};
	string input[19] = {"the", "final", "exam", "will", "be", "based", "on", "the", "one", "lecture", "you", "missed", "and", "the", "one", "book", "you", "didn't", "read"};


	cout << "1]sumDoubleRes: " << sumDouble(2,8) << endl;

	cout << "2]" << helloName("Dr.") << endl;

	cout << "3]" << monkeyTrouble(true, true) << endl;

	cout << "4]orig. value: " <<  sqrt(sqrval) << "; sq. value: " << sqrval << "; address: " << &sqrval << endl;

	cout << "5.1]even no. in arr0: should be 3 - result: "
			<< countEvens(no_arr_0, (sizeof(no_arr_0)/sizeof(no_arr_0[0]))) << endl;
	cout << "5.2]even no. in arr1: should be 3 - result: "
			<< countEvens(no_arr_1, (sizeof(no_arr_1)/sizeof(no_arr_1[0]))) << endl;
	cout << "5.3]even no. in arr2: should be 0 - result: "
			<< countEvens(no_arr_2, (sizeof(no_arr_2)/sizeof(no_arr_2[0]))) << endl;

	cout << "6.1]";
	if (!sum28(no_arr_3, (sizeof(&no_arr_3)/sizeof(&no_arr_3[0])) )) {
		cout << "false" << endl;
	} else {
		cout << "true" << endl;
	} cout << "6.2]";
	if (!sum28(no_arr_4, (sizeof(no_arr_4)/sizeof(no_arr_4[0])) )) {
		cout << "false" << endl;
	} else {
		cout << "true" << endl;
	} cout << "6.2]";
	if (!sum28(no_arr_5, (sizeof(no_arr_5)/sizeof(no_arr_5[0])) )) {
		cout << "false" << endl;
	} else {
		cout << "true" << endl;
	} cout << "6.3]";
	if (!sum28(no_arr_6, (sizeof(no_arr_6)/sizeof(no_arr_6[0])) )) {
		cout << "false" << endl;
	} else {
		cout << "true" << endl;
	}

	cout << "7] " << testMain((sizeof(str_arr)/sizeof(str_arr[0])), str_arr) << endl;

	cout << "8] " << endl;

	cout << "9]factorial 5: " << factorial(5) << endl;

	for (int i = 1; (i < (sizeof(no_arr_7)/sizeof(no_arr_7[0]))+1); i++)
	{
		cout << "10] " << i << ": " << reverse(no_arr_7, 5)[i] << endl;
	}

	cout << "**Finished**" << endl;
	return(EXIT_SUCCESS);
}
