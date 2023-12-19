#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int n=0;
    double sum=0;
    double sum2=0;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
    sum = sum+atof(text.c_str());
    sum2 = sum2+pow(atof(text.c_str()),2);
    n++;
    }
    
    cout << "Number of data = " << n <<endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/n <<endl;
    cout << "Standard deviation = " << sqrt((1.0/n)*(sum2)-pow((sum/n),2));
}