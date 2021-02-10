#include <bits/stdc++.h>

using namespace std;

double cpt(double* co)
{
    double ret = 0;
    ret += sqrt(pow(co[2]-co[0], 2)+pow(co[3]-co[1], 2));
    ret += sqrt(pow(co[4]-co[2], 2)+pow(co[5]-co[3], 2));
    ret += sqrt(pow(co[4]-co[0], 2)+pow(co[5]-co[1], 2));
    return ret;
}

int main(void)
{
    double co[6] = {0};
    
    for(int i=0; i<6; i++)
        cin >> co[i];
    
    cout << fixed << setprecision(2) << cpt(co);
    return 0;
}