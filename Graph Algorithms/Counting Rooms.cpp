#include <bits/stdc++.h>
using namespace std;
int n,m;
char arr[1001][1001];
bool vis[1001][1001];
bool isValid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>m)
    return 0;
    if(vis[x][y] || arr[x][y]=='#')
    return 0;
return 1;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    if(isValid(x+1,y))
    dfs(x+1,y);
    
    if(isValid(x-1,y))
    dfs(x-1,y);
    
    if(isValid(x,y+1))
    dfs(x,y+1);
    
    if(isValid(x,y-1))
    dfs(x,y-1);
}
int main() {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        cin>>arr[i][j];
    }
    int cnt_room=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='.' && !vis[i][j])
            {
                cnt_room++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt_room<<endl;
	return 0;
}

