// Task1CPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


void input(int l, int h, int** matrix) {
    

    for (int i = 0; i < h; i++) {

        int* current = new int[l];

        for (int j = 0; j < l; j++) {
            std::cin >> current[j];
        }

        matrix[i] = current;
    }


}

int* getSumInStr(int** matrix,int l, int h) 
{

    int* result = new int[h];

    for (int i = 0; i < h; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++)
        {
            result[i] += *(matrix[i] + j);
        }
    }

    return result;
}

void printArray(int* res) {
   
    for (int i = 0; i < sizeof(res); i++)
    {
        std::cout << "sum first line " << res[i] << std::endl;
    }
}

int main()
{
    int l, h;
    std::cin >> l;
    std::cin >> h;


    int** matrix = new int*[h];

    input(l, h, matrix);
    
    
    int* result = getSumInStr(matrix, l, h);

    printArray(result);
    
}

 