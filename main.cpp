#include <iostream>

using namespace std;


void decToBin(int num)
{
    int
        binaryNum[32],
        i = 0;

    while (num > 0)
    {
        binaryNum[i] = (num % 2);
        num = (num / 2);

        ++i;
    }


    for (int j = (i - 1); j >= 0; --j)
        std::cout << binaryNum[j];
}


int main()
{
    int num;
    
    std::cout << "Enter number: ";
    std::cin >> num;
    
    decToBin(num);

    return 0;
}
