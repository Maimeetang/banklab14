#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double number[],int N,double sum[]){
    double sumx=0;
    double sum2x=0;
    double sum3x=1;
    double sum4x=0;
    double max=number[0];
    double min=number[0];
    for(int i=0;i<N;i++){
        sumx += number[i];
        sum2x += pow(number[i],2);
        sum3x *= number[i];
        sum4x += 1.0/number[i];
        if(max<number[i]){
            max = number[i];
        }
        if(min>number[i]){
            min = number[i];
        }
    }
    sum[0]=sumx/N;
    sum[1]=sqrt((sum2x/N)-pow(sum[0],2));
    sum[2]=pow(sum3x,1.0/N);
    sum[3]=N/sum4x;
    sum[4]=max;
    sum[5]=min;
}