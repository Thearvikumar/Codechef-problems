#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        int y=x;
        int arr[x];
        int arr1[y];
        int c1 = 0, d1 = 0, c2 = 0, d2 = 0; 
        int diffc, diffd;

        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < x; i++)
        {
            if (arr[i]==1)
            {
                c1 = c1+1;
            }
            else if (arr[i]==0)
            {
                d1= d1+1;
            }
            
            
            
        }
        
        
        for (int i = 0; i < y; i++)
        {
            cin>>arr1[i];
        }

        for (int i = 0; i < y; i++)
        {
            if (arr1[i]==1)
            {
                c2 = c2+1;
            }
            else if (arr1[i]==0)
            {
                d2 = d2+1;
            }
        }

        diffc = c2-c1;
        diffd = d2-d1;

       
        if (diffc%2 == 0 && diffd%2 == 0)
        {
            cout<<"1"<<endl;
        }
        
        else if (diffc%2 == 0 && diffd%2 != 0)
        {
            cout<<"0"<<endl;
        }

        else if (diffc%2 != 0 && diffd%2 == 0)
        {
            cout<<"0"<<endl;
        }

        else if (diffc%2 != 0 && diffd%2 != 0 )
        {
            cout<<"0"<<endl;
        }
        
        
        
        

        
        
    }
    
    return 0;
}
