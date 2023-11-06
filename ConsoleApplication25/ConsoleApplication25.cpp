#include <iostream>
#include <array>

int main()
{
     std::array<char, 33> str;

    srand(time(0));

    int size_str = rand() % 9 + 25;

    std::cout << "The number of letters in the array\n" << size_str << std::endl;

    std::cout << "Initial array:" << std::endl;

    char* pa = new char[size_str];

    for (int i = 0; i < size_str; i++)
    {
        pa[i] = rand() % 26 + 65;
        std::cout << pa[i] << ' ';
    }

    std::cout << "\n";

    for (int i = 1; i < size_str; i += 2) {
        for (int j = i + 2; j < size_str; j += 2) {
            if (pa[i] > pa[j]) {
                std::swap(pa[i], pa[j]);
            }
        }
    }
    std::cout << "Array after sorting:" << std::endl;
    for (int i = 0; i < size_str; i++) {
        std::cout << pa[i] << " ";
    }
    std::cout << "\n";

    delete[] pa;

}
