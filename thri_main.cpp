#include<iostream>
#include<iomanip>
int main() {
	std::cout << "\t Hello multipy\n ";
  
   for( int i=1;i<=9;i++) {
   	for( int j=1;j<=9;j++) {
   		std::cout<<std::right<<std::setw(3)<<i*j<<"  ";
	   }
	   std::cout<<"\n";
   }
	return 0;
}