#include <iostream>

int main()
{
    int array[] { 6, 3, 2, 8, 7, 1, 5, 4, 8 };

    constexpr int arrayLength { static_cast<int>(std::size(array)) };

    for (int index{ 0 }; index < arrayLength - 1; index++)
    {
        bool swapOccured{ false };

        for (int currentIndex{ 0 }; currentIndex < arrayLength - 1 - index; currentIndex++)
        {
            if (array[currentIndex] > array[currentIndex + 1])
            {
                std::swap(array[currentIndex], array[currentIndex + 1]);
                swapOccured = true;
            }
        }

        if (!swapOccured)
        {
            std::cout << "Early termination on iteration " << index + 1 << std::endl;
            break;
        }
    }

    for (int index{ 0 }; index < arrayLength; index++)
        std::cout << array[index] << '\t';
    std::cout << std::endl;
}
