

 #include <iostream>
using namespace std;
int main()
{
    for(int j=0;j<=10;j++)
    {for(int i=j;i<=10;i++)
        {
            cout<<" ";
        }
        int l=65;
    for(int i=1;i<=j;i++)
        {
            cout<<(char)l;
            l++;
        }
        l--;
    for(int i=1;i<j;i++)
        {
            l--;
            cout<<(char)l;
        }
        cout<<endl;
    }
return 0;
}
