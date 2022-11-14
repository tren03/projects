#include <iostream>
#include <string>
using namespace std;
class S
{
public:
    string name, usn;
    float marks[6][3];

    float sub_avg[6];
    void read()
    {
        cout << "Enter name " << name << endl;
        cin >> name;
        cout << "Enter usn " << usn << endl;
        cin >> usn;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter subject " << i + 1 << " score in test " << j + 1 << " ";
                cin >> marks[i][j];
            }
        }
    }
    void disp()
    {
        cout << endl
             << "name of student :" << name;
        cout << "usn :" << usn;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << endl
                     << " subject " << i + 1 << " score in test " << j + 1 << " :" << marks[i][j] << endl;
            }
        }
        for (int j = 0; j < 6; j++)
        {
            cout << "best in subject " << j + 1 << " " << sub_avg[j] << endl;
        }
    }
    void calc()
    {
        float a[3];
        float best_avg;
        float sum = 0;

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[j] = marks[i][j];
                sum += a[j];
            }

            best_avg = (sum - min(a)) / 2.0;
            sub_avg[i] = best_avg;
            sum = 0;
        }
    }
    float min(float a[])
    {
        float m = 1000;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] <= m)
            {
                m = a[i];
            }
        }
        cout << m;
        return m;
    }
};
int main()
{
    int n;
    cout << "enter nos of students ";
    cin >> n;
    S s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].read();
        s[i].calc();
        s[i].disp();
    }
}