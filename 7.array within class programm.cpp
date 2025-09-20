#include<iostream>
using namespace std;
const int m=3;
class product
{
    public:
    string p_name;
    int p_code[m],p_prize[m];
    void get_data()
    {
        cout << "Enter product name , code and prize:"<<endl;
        cin >> p_name;
        for ( int i = 0; i < m; i++)
        {
            cout << "Code:";
            cin >> p_code[i];
            cout << "Prize:";
            cin >> p_prize[i];
        }

    }
    void put_data()
    {
        cout << "Product name,code and prize:"<<endl;
        cout  << p_name;
        for ( int i = 0; i < m; i++)
        {
            cout << "Code"<<i+1<<":";
            cout << p_code[i] << endl;
            cout << "Prize"<<i+1<<":";
            cout << p_prize[i] << endl;
        }
    }
};
int main()
{
    product a;
    a.get_data();
    a.put_data();
    return 0;
}
