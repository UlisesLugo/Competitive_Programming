#include <iostream>


using namespace std;

char a[150][150];
bool esCuadrado(int x1,int y1,int x2,int y2)
{
	for(int i=x1;i<=x2;i++)
		for(int j=y1;j<=y2;j++)
			if(a[i][j]=='#')
				return false;
	return true;
}
int main()
{
	int ans,n,x,y,t,maximo;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		ans=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]=='.')
				{
					maximo=1;
					x=i+1;
					y=j+1;
					while(x<=n && y<=n && esCuadrado(i,y,i+maximo,y) && esCuadrado(x,j,x,j+maximo) )
					{
						x++;
						y++;
						maximo++;
					}
					if(maximo>ans)
						ans=maximo;
				}
		cout<<ans<<endl;
	}
	return 0;
}
