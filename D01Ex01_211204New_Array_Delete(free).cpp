
//cоздание динамического массива по кол-во элементов 

// #include <iostream>

// int main()
// {
// 	int N;

// 	std::cout << "Please, enter below the number of items you want to create:" << std::endl; 
// 	N = 0;
// 	std::cin >> N;
// 	std::cout << "you entered " << N << std::endl;

//   int *array = new int[N];

//   for(int i = 0; i <= N, i++ ;)
//   {
//     std::cout << array[i] << std::endl;
//   }

//   delete [] array;

//   return 0;
// }

#include <iostream>

using namespace std;
int main() {
	int x, n;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items for the array elements one after another" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) 
  {
		cout << arr[x] << " ";
	}
	return 0;
}