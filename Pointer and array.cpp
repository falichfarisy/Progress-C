#include <iostream>
using namespace std;

int main(){
	
	char *ptr;
	char arr[]={"ABCDEFG"};
	//char*p =arr;
	
	for (int i=5; i<6;i++){
		cout << (arr+i)<<" ";
	}
	return 0;
	//hasil cout saat di run (f110 adalah FG
	
	
}
