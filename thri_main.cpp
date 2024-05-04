#include<iostream>

int main() {
	std::cout << "\t Hello multipy\n ";
  
   for( int i=1;i<=9;i++) {
   	for( int j=1;j<=9;j++) {
   		std::cout.width(4);
   		std::cout<<i*j<<" ";
	   }
	   std::cout<<"\n";
   }
	return 0;
}