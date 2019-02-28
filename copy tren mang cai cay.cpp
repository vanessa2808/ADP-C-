#include<iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;
const int MAX = 10005;
int Matrix[MAX][MAX]; // Ma tr?n luu tr?ng th�i c?a d? th?
bool Visit[MAX]; // M?ng d�nh d?u m?i di?m du?c tham hay chua
int cnt; // �?m s? di?m di qua trong 1 l?n duy?t d? bi?t
// d? th? c� li�n th�ng hay kh�ng
int N, M; // L?n lu?t l� s? d?nh v� s? c?nh
void Try(int u)
{
Visit[u] = 1;
cnt++;
for (int i = 1; i <= Matrix[u][0]; i++)
{
int v = Matrix[u][i];
if(!Visit[v]) Try(v);
}
}
int main()
{
ios::sync_with_stdio(false);
// Comment d�ng n�y tru?c khi submit
freopen("input.txt","r",stdin);
cin >> N >> M;
if(M == 0) cout << "NO" << endl;
else
{
cnt = 0;
for(int i = 0; i <= N; i++)
{
Visit[i] = false;
for(int j = 0; j <= N; j++)
Matrix[i][j] = 0;
}
// T?i h�ng th? i trong ma tr?n,
// ta s? luu id c?a nh?ng d?nh k? v?i d?nh i
// Matrix[i][0] luu s? lu?ng d?nh k?.
for(int i = 0; i < M; i++)
{
int a, b, m;
cin >> a >> b;
m = ++Matrix[a][0];
Matrix[a][m] = b;
m = ++Matrix[b][0];
Matrix[b][m] = a;
}
// N?u s? c?nh < s? d?nh tr? 1 th� ch?c ch?n kh�ng ph?i l� c�y
if(M == N-1)
{
// Th? duy?t t?i m?t di?m b?t k�, ? d�y l� di?m 1
Try(1);
// Khi s? c?nh l� N - 1 v� di du?c qua h?t N di?m
// th� ch?ng t? d? th? li�n th�ng.
// v� kh�ng c� chu tr�nh. N�n s? l� c�y.
if(cnt == N) cout << "YES" << endl;
else cout << "NO" << endl;
}
else cout << "NO" << endl;
}
return 0;
}
