#include <iostream>
#include <chrono>
#include <functional>
using namespace std;
template<typename Func>
double calculate_execution_time(Func func) {
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    return duration.count();
}
void example_function() {
   
    for (int i = 0; i < 1000000; ++i) {
        
    }
}
void time() {
	double execution_time = calculate_execution_time(example_function);
	cout << "Execution time: " << execution_time << " seconds" << endl;
}




long long function1(long long n) {//recursive function
	long long  sum = 0;
	if (n == 1)
		return n;
	else {
		sum = n * function1(n - 1);
		return sum;
	}
}
long long function2(long long n) {//iterative function
	long long  sum = 1;
	for (long long i = 1; i <= n; i++) {
		sum *= i;

	}
	return sum;
}
int main() {

	 long long n;
	cout << "enter the value of n .\n";
	cout << "n = ";
	cin >> n;
	cout << "recursive function :" << function1(n) << endl;
	cout << "iterative function :" << function2(n) << endl;
	time();
    return 0;
}
