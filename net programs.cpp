#include <iostream>
#include <string>

int main()
{
    int a;
    int b;
    std::cout << "What's your number brotherham?: "<<std::endl;
    std::cin >> a;

    std::cout << "Next number my niggy: "<<std::endl;
    std::cin >> b;

    int choice = 0;

    std::cout << "What operation would you like to perform?"<<std::endl;
    std::cout << "1. addition\n2. subtraction\n3. multiplication\n4. division"<<std::endl;

    if(choice == 1)
    {
        int c = a + b;
        std::cout << "Sum issssssssssssss " << c << ".";
    }
    if(choice == 2)
    {
        int c = a - b;
        std::cout << "Difference isssssssss " << c << ".";
    }
    if(choice == 3)
    {
        int c = a * b;
        std::cout << "Product isssssssss " << c << ".";
    }
    if(choice == 4)
    {
        int c = a / b;
        std::cout << "Divisor issssssssss " << c << ".";
    }



    return 0;
}
