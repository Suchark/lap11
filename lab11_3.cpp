//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int main (){
    int count = 0;
    float sum = 0, sumone = 0;

    string textline;
    ifstream source("score.txt");

    while (getline(source, textline))
    {
        sum += atof(textline.c_str());
        sumone += pow(atof(textline.c_str()), 2);
        count++;
    }

        source.close();
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum/count << "\n";
        cout << "Standard deviation = " << sqrt( sumone/count - pow(sum/count, 2 )) << "\n";
   
    return 0;
    
}