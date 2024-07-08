#include<bits/stdc++.h>

int n,m,a,b,v[2100][2100];
int k,x,y, d[2100][2100];

bool solve(int x,int y,int k)
{
    int l = std::max(1,x-k),r=std::min(x+k,n),t;
    for(int i=l;i<=r;i++)
    {
        t=k- std::abs(i-x);
        if(y-t>0 && !v[i][y-t])
        {
            a=i;
            b=y-t;
            return 1;
        }
        if(y+t<=m && !v[i][y+t]) 
        {
            a=i;
            b=y+t;
            return 1;
        }
    }
    return 0;
}

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std:: cin >> n >> m >> k;
    for(int i=0;i<k;i++)
    {
        std::cin >> x >> y;
        for(int j=-2;j<=2;j++){
            for(int k=-2;k<=2;k++) {
                if (x+j<1 || x+j>n || y+k<1 || y+k>m)
                    continue;
                d[x][y]= std::max(d[x][y],d[x+j][y+k] - std::abs(j)- std::abs(k));
            }
        }
        while(!solve(x,y,d[x][y]))
            d[x][y]++;
        v[a][b]=1;
        
        std::cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
