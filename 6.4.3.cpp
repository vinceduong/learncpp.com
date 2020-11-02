#include <iostream>

int main()
{
    int array[] { 6, 3, 2, 8, 7, 1, 5, 4, 8 };

    constexpr int arrayLength { static_cast<int>(std::size(array)) };

    for (int index{ 0 }; index < arrayLength - 1; index++)
    {
        if (array[index] < array[index + 1])
        {
            const int temp = array[index + 1];
            array[index + 1] = array[index];
            array[index] = temp;
 
            index = -1;
        }
    }

    for (int index{ 0 }; index < arrayLength; index++)
        std::cout << array[index] << '\t';
    std::cout << std::endl;
}
