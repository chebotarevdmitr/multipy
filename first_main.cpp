# include <iostream>

int main(int argc, char** argv){

 printf("\t Hello multiply \n"); 
 
 int number =0;
 std::cout<<"Enter number :";
 std::cin >> number;
 
 for(int i=1;i<=10;++i) {
 	std::cout<<number<< " * " << i << " = " << number*i<< std::endl;
 }	
	
	
 system("pause>0");
 return 0;	
}