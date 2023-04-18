#include <iostream>
#include <cmath>
using namespace std;
//Question 3's function
int calculateFac(int num) {
    if (num == 0) {
        return 1;
    }
    return num * calculateFac(num - 1);
}
//Question 4's function
double calculate_sum() {

    int n;
    cout << "Enter your number: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = pow(-1, i + 1) / i;
        sum += term;
    }
    return sum;
}

int main() {
    int n,k;
    cout << "Enter the value of n: ";
    cin >> n;
    cout<<"Enter the value of k: ";
    cin >> k;

    double* numbers = new double[k];
    for (int i = 1; i <= k; i++) {
        numbers[i-1] = pow(n, i) / calculateFac(i);
    }

    double myResult = 1;

    for (int i = 0; i < k; i++) {
        myResult += numbers[i];
    }

    cout << "Result is : " << myResult << endl;
    delete[] numbers;

    double sum = calculate_sum();
    cout << "Sum: " << sum << endl;
    return 0;

}








