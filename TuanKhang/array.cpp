#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    // Nhap mang
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Tim gia tri lon nhat trong mang
    int tmp = A[0]; // tmp luu gia tri lon nhat
    for (int i = 0; i < N; i++)
    {
        if (A[i] > tmp)
            tmp = A[i];
    }

    // Chi so cua cac phan tu lon nhat
    cout << "Chi so cua cac phan tu lon nhat la: ";
    for (int i = 0; i < N; i++)
    {
        if (A[i] == tmp)
            cout << i << " ";
    }
}