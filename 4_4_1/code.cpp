#include "Base.h"
#include "Child1.h"
#include "Child2.h"
#include "Child3.h"
using namespace std;

void Base::in_out() {

	cin >> vecLen;
	vec.resize(vecLen);

	for (int i = 0; i < vecLen; i++) {
		cin >> vec[i];
	}
}
int Child1::func() {

	int sub = vec[0];

	for (int i = 1; i < vecLen; i++) {
		sub -= vec[i];
	}

	return sub;
}
int Child2::func() {

	int summ = 0;

	for (int i = 0; i < vecLen; i++) {
		summ += vec[i];
	}

	return summ;
}
void Child3::in_out() {

	cout << "Array dimension: " << vecLen << endl;

	cout << "The original array:";

	for (int i = 0; i < vecLen; i++) {
		printf("%5d", vec[i]);
	}
	cout << endl;

	cout << "Min: " << Child1::func() << endl;
	cout << "Sum: " << Child2::func();
}