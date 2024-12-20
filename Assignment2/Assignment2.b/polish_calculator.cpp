/*
    Чигиренко Егор Дмитриевич st128240@student.spbu.ru
    Assignment2.b
*/

#include <iostream>
#include <string>

int main()
{ 
    std::string input;
    std::cout << "Write sentence: ";
    std::getline(std::cin, input);

    const int length = 50;
    double* array = new double[length];
    int pointer = -1;
    auto ind = 0;

    while(ind < input.size())
    {
        if (input[ind] == ' ')
        {
            ind++;
            continue;
        }

        else if(input[ind] == '+' || input[ind] == '-' || input[ind] == '*' || input[ind] == '/')
        {
            if(pointer < 1)
            {
                std::cerr << "Error: not enough operations or operators" << std::endl;
                delete[] array;
                return 1;
            }

            double n2= array[pointer--];
            double n1= array[pointer--];
            double res;

            switch(input[ind])
            {
      	        case '*':
       		    res = n1 * n2;
       		    break;

      		case '/':
      		    if (n2 == 0)
      		    {
      		        std::cerr << "Error: invalid operation: division by 0" << std::endl;
      		        delete[] array;
      		        return 1;
      		    }
        		res = n1 / n2;
        		break;

      		case '+':
        	    res = n1 + n2;
        	    break;

      		case '-':
        	    res = n1 - n2;
        	    break;
            }
            array[++pointer] = res;
            ind++;
        }

        else
        { 
            double num = 0;
            while(ind < input.size() && isdigit(input[ind]))
            {
                num = num * 10 + (input[ind] - '0');
                ind++;
            }
            array[++pointer] = num;
        }
    }

    if (pointer == 0)
    {
        std::cout << "Answer: " << array[0] << std::endl;
    }

    else
    {
        std::cerr << "Erorr: wrong sentence" << std::endl;
    }

    delete[] array;

    return 0;   
}
