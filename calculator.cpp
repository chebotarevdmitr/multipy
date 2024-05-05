#include <iostream>

int main(){
	char operat ='0';
	float number1=0;
	float number2=0;
	std::cout<<"\t Enter operator (+-*/%)\n";
	std::cin>>operat;
	
	std::cout<<"\t Enter operands :(number1 end number2)";
	std::cin >>number1>>number2;
	
	switch(operat) {
		case'+':
			std::cout<<number1+number2;
			break;
        case'-':
			std::cout<<number1-number2;
			break;
		case'*':
			std::cout<<number1+number2;
			break;
		case'/':
			if(number2 !=0){
			std::cout<<number1/number2;
	     	}
	     	else
	     	std::cout<<"Divizion by zero!";
			break;			
	default:
		std::cout<<"ERORR ";
		break;
    }
	std::cout<<std::endl;
	
	system("pause");
	return 0;
}