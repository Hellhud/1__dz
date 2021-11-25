#include <iostream>
bool ty(double a[], int s,int t=0) {
	for (size_t i = 0; i < s; i++) {
		a[i] = rand() % 100;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return true;
}
int main(){
	int s = 10;
	double a[10];
	ty(a, s);
	

}