#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
void chart(vector<int> a){
    line(100, 50, 100, 350); 
    line(100, 350, 400, 350);
    int left = 150;
    for(auto &i: a){
        bar(left, 350 - i, left + 30, 350);
        left += 40;
    } 
}
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"X:\\TC\\BGI");
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "items you entered:" << n;
    vector<int> a(n);
    cout << "Enter the Frequencies: ";
    for(auto &i: a) cin >> i;
    chart(a);
    getch();
    closegraph();
    
}

