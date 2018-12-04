#include<iostream>
using namespace std;

/// Принтира елементите на масив от int-ове с размер sz
void print(int * arrptr, int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout<<arrptr[i]<<" ";
    }
    cout<<endl;
}

/// Разменя стойностите на две променливи
void swap(int * left, int * right)
{
    // temp става равен на това, което се сочи от left(num1)
    int temp = *left;

    // Това, което сочи left(num1) става равно на това, което сочи right(num2)
    *left = *right;

    // Това, което сочи right(num2) става равно на temp
    *right = temp;
}

/// overload-ната за double
void swap(double * left, double * right)
{
    // temp става равен на това, което се сочи от left(num1)
    double temp = *left;

    // Това, което сочи left(num1) става равно на това, което сочи right(num2)
    *left = *right;

    // Това, което сочи right(num2) става равно на temp
    *right = temp;
}


/// Умножава елементите на един масив с числото mult
/// Може да се напише и void multiplyArr(int * arr, int sz, int mult)
void multiplyArr(int arr[], int sz, int mult)
{
    for(int i = 0; i < sz; i++)
    {
        arr[i] *= mult;
    }
}

/// Принтира матрица с брой редове sz и брой колони 3
void printMatrix(int matrix[][3], int sz)
{
    for(int i = 0;i < sz; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

/// Умножава матрица с брой редове sz и брой колони 3 с числоти mult
void multiplyMatrix(int matrix[][3], int sz, int mult)
{
    for(int i = 0;i < sz; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrix[i][j] *= mult;
        }
    }
}

int main()
{
    /// Масиви
    cout<<"Arrays: "<<endl<<endl;
    const int arrSize = 5;
    int arr[arrSize] = {4, 2, 3, 1};

    print(arr, arrSize);

    // Да разменим елементите 2 и 3 на масива
    swap(&arr[1], &arr[2]);

    cout<<"After swapping"<<endl;
    print(arr, arrSize);

    // Да умножим всички елементи на масива с 5
    multiplyArr(arr, arrSize, 5);
    cout<<"After multiplying the array with 5"<<endl;
    print(arr, arrSize);

    /// Матрици
    cout<<endl<<"Matrices: "<<endl<<endl;
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printMatrix(matrix, 2);

    // Да умножим матрицата с 5
    multiplyMatrix(matrix, 2, 5);
    cout<<"After multiplying with 5"<<endl;
    printMatrix(matrix, 2);
    return 0;
}
