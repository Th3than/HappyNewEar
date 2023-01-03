#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
    ifstream soup("score.txt");
    string text;
    double N,sum,M = 0,S = 0;
    int i = 0;
    while (getline(soup, text))
    {
        N = atof(text.c_str());
        sum += N;
        S += pow(N,2);
        i++;
    }
    soup.close();
     M = sum/i;
    S = sqrt((S/i)-pow(M,2));
    cout << "Number of data = "<<i;
    cout << setprecision(3);
    cout << "\nMean = "<<M;
    cout << "\nStandard deviation = "<<S;
}