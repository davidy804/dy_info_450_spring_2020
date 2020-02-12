#include <iostream>
#include <cmath>
using namespace std;

double findStandardDeviation(double *index, int n);
double findMean(double *index, int n);

int main(){
    double index[10];
    int i;
    int n=10;

    for(i=0;i<n;i++){
        cout << "Enter the number for index " << i << ": ";
        cin >> index[i];
    }
    cout << "results, " << findMean(index, n) << ", " << findStandardDeviation(index, n);
}

double findMean(double *index, int n){
    double sum=0.0;
    double mean;
    int i;

    for(i=0;i<n;i++){
        sum+=index[i];
    }
    return sum/n;
}

double findStandardDeviation(double *index, int n){
    double sum=0.0;
    double standardDeviation=0.0;
    double mean;
    int i;

    for(i=0;i<n;i++){
        sum+=index[i];
    }
    mean = sum/n;

    for(i=0;i<n;++i){
        standardDeviation+=((index[i]-mean)*(index[i]-mean));
    }
    return sqrt(standardDeviation/n);
}