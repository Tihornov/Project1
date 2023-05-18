#include <iostream>
using namespace std;

//��������� �����:
template <typename X, int n> class MyClass {
    //���� ������ - ������ 
    X array[n];
public:
    //����������� ������:
    MyClass()
    {
        //���������� �������� ���������� ����������:
        for (int i = 0; i < n; i++)
        {
            array[i] = (X)(i * i);
        }
    }
    //����� ��� ����������� �������:
    void get()
    {
        for (int i = 0; i < n; i++) cout << array[i] << " ";
        cout << endl;
    }
};
int main()
{
    const int n = 10;   // ������ �������
    MyClass<int, n> a;  // �������� �������

    auto aptr = std::make_unique<int[]>(n);;
    for (int i = 0; i < n; ++i)
    {
        aptr[i] = i;
    }
    a.get();            // ����������� �������
    return 0;
}