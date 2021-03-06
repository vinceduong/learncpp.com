#include <iostream>

int main()
{
    int array[] { 6, 3, 2, 8, 7, 1, 5, 4, 8 };

    constexpr int arrayLength { static_cast<int>(std::size(array)) };

    for (int index{ 0 }; index < arrayLength - 1; index++)
    {
        for (int currentIndex{ 0 }; currentIndex < arrayLength - 1; currentIndex++)
        {
            if (array[currentIndex] > array[currentIndex + 1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }
    }

    for (int index{ 0 }; index < arrayLength; index++)
        std::cout << array[index] << '\t';
    std::cout << std::endl;
}
