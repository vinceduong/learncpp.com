#include <iostream>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };

    const int arrayLength { static_cast<int>(std::size(array)) };

    for (int startIndex{ 0 }; startIndex < arrayLength; startIndex++)
    {
        int maxIndex{ startIndex };

        for (int searchIndex{ startIndex }; searchIndex < arrayLength; searchIndex++)
        {
            if (array[searchIndex] > array[maxIndex])
                maxIndex = searchIndex;
        }

        if (maxIndex != startIndex)
        {
            const int temp = array[startIndex];
            array[startIndex] = array[maxIndex];
            array[maxIndex] = temp;
        }
    }


    for (int i{ 0 }; i < arrayLength; i++)
    {
        std::cout << array[i] << '\t';
    }

    std::cout << std::endl;
}


