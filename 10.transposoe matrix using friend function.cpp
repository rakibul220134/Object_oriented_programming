#include<iostream>
using namespace std;
class matrix
{
    public:
        int i,j,a[3][3];
        void read()
        {
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   cin>>a[i][j];
               }
           }
        }
        void transpose()
        {
            cout<<"transpose matrix:\n";
             for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   cout<<a[j][i]<<" ";
               }
               cout <<endl;
           }
        }
    friend matrix trans(matrix b);

};
 matrix trans(matrix b)
{
   b.transpose();
}
int main()
{
    matrix a,b;
    a.read();
    trans(a);

   return 0;
}
