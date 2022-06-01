#include<iostream>
using namespace std;
# define x 10
# define Y 10
int wave(int ** arr, int m, int n){
	for (int i = 0; i < m; i++)
	{
		if (m%2 != 0)
		{
			for (int i = 0; i < m; i++)
			{
				cout<<arr[m][n];
			}
			
		}
		else {
			for (int i = n-1; i > 0; i--)
			{
				cout<<arr[m][n];
			}
			
		}
	}
	

}
int main() 
{
	int m,n;
	cin>>m>>n;
	int a[10][10],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	i=0;
	int row_start=0,column_start=0,column_end=n-1;
	while(i<n)
	{
		if(i%2==0)
		{	
			for(int col=column_start; col<=column_end;col++)
        	{
            	cout<<a[row_start][col]<<", ";
        	}
			row_start++;
		}
		else
		{	
			for(int col=column_end; col>=0;col--)
        	{
            	cout<<a[row_start][col]<<", ";
        	}
			row_start++;
		}	
		i++;
	}
    cout<<"END"<<endl;
return 0;
}