#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int calculate(int n) {
	if(n == 0) {
		return n;
	}
	return n + calculate(n - 1);
}
int  is_odd_even(int num) {
	if(~num & 1) {
		return 1;
	}
	return 0;
}
void multiplication(int n) {
	int i = 1;
	while(i <= 10) {
		printf("%d * %d = %d\n", n, i, i * n);
		++i;
	}
}
int revers_num(int n) {
	int tmp = 0;
	while (n) {
		tmp = tmp * 10 + n % 10;
		n /= 10;
	}
	return tmp;
}
int max(int arr[],int size){
	int max_temp = arr[0];
	for (int i = 1; i < size; ++i) {
		if(max_temp < arr[i]) {
			max_temp = arr[i];
		}
	}
	return max_temp;
}
int count_string(char str[]) { 
	int count = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		++count;
	}
	return count;
}
int check_number(int n) {
	if (n > 0) {
		return 1;
	}
	else if (n < 0) {
		return -1;
	}
	return 0;
}
int find_arr_elem(int arr[], int size) {
	int tmp = arr[0];
	for (int i =1; i < size; ++i) {
		if(tmp > arr[i]) {
			tmp = arr[i];
		}
	}
	return tmp;
}
int sum_elem_arr(int arr[], int size) {
	int tmp = 0;
	for (int i = 0; i < size; ++i) {
		tmp += arr[i];
	}
	return tmp;
}
int average_num(int arr[], int size) {
	int tmp = 0;
	for (int i = 0; i < size; ++i) {
		tmp += arr[i];
	}
	return tmp / size;
}
bool palindrom(int n) {
	int rev = 0;
	int num = n;
	while (num) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	if (n == rev) {
		return true;	
	}
	return false;
}
int factorial(int n) {
	if(n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}
int three_num(int n1, int n2, int n3) {
	int max = n1;
	if (n2 > max) {
		max = n2;
	}
	else if (n3 > max) {
		max = n3;
	}
	return max;
}
int is_prime(int n) {
	for (int i = 2; i < n/2; ++i) {
		if(n % i == 0) {
			return 0;
		} 
	}
	return 1;
}
int swap_nums(int* n1, int* n2) {
	int* swap = n1;
	n1 = n2;
	n2 = swap;
	return *n1;
}
int count_vowels(char* str) {
	int count = 0;
	char vowels[] = "aeiouAEIOU";
	while (*str) {
		for (int i = 0; vowels[i] != '\0'; ++i) {
			if(*str == vowels[i]) {
				++count;
				break;
			}
		}
		++str;
	}
	return count;
}
double power(int x, int y) {
	if(y < 0) {
		x = 1 / x;
		y = -y;
	}
	double result = 1.0;
	for (int i = 0; i < y; ++i) {
		result *= x;
	}
	return result;
}
int second_largest_number(int arr[], int size) {
		int max = 0;
		int sec_larg = 0;
	
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			sec_larg = max;
			max = arr[i];
		}
		else if (arr[i] > sec_larg && arr[i] < max){
			sec_larg = arr[i];
		}
	}
	return sec_larg;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	int arr[] = {1, 2, 3, 4};
	int size = 4;
	char str[] = "Hello World";
	//function result
	printf("Calculate %d\n", calculate(num));
	printf("even = 1 || odd = 0 //result = %d\n", is_odd_even(num));
	multiplication(num);
	printf("Revers num = %d\n", revers_num(num));
	printf("Maximum element an array = %d\n", max(arr, size));
	printf("Count string %d\n", count_string(str));
	printf("Check if a Number positiv = 1:neg = -1:zero = 0: %d\n", check_number(num));
	printf("Find element an array = %d\n", find_arr_elem(arr, size));
	printf("Sum elements array = %d\n", sum_elem_arr(arr, size));
	printf("Average numbersa %d\n", average_num(arr, size));
	
	if (palindrom(num)) {
		 printf("Yor number Palindrom :\n");
	}else {
        	printf("Your number no Palindrom\n");
	}
	printf("Factorial %d\n", factorial(num));
	printf("Find the Largest three numbers %d\n", three_num(num, 8, size));
	printf("Prime Numbers %d\n", is_prime(num));
	printf("Swap numbers n1 = %d \n", swap_nums(&num, &size));
	printf("Count vowels %d\n", count_vowels(str));
	printf("Number power %f\n", power(num, size));
	printf("Second largets number %d\n", second_largest_number(arr, size));
	return 0;
}
