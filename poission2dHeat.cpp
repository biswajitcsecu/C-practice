

#include<iostream>
#include<cstdlib>
#include<exception>
#include<ostream>
#include<fstream>
#include<cmath>
#include<cstring>


#define M 500
#define N 500
#define  PI 22/7

using namespace std;


double  u_0(double x);
double  v_0(double x);


int main(int argc, char const *argv[])
{
	int T =2; int c = 1;
	int J= N; int K = M;

	double Delta_x = 1/J;
	double Delta_t = T/K;
	double mu = c*Delta_t/Delta_x;

	double** U = new double* [K+1];
	for (int i= 0; i< K+1; i++){
		U[i]= new double[J+1];
	}

	for (int i= 0; i< K+1; i++){		
		for (int j= 0; j< J+1; j++){
				U[i][j]= 0;
		}
	}	

	double* u0 = new double [J+1];
	double* v0 = new double [J+1];

	for (int j = 0; j<J+1; j++){
		u0[j]=0.0;
		v0[j]=0.0;
	}

	for (int j = 0; j<J; j++){
		u0[j]=u_0(j*Delta_x);
		U[1][j+1] = u0[j];
	}

	for (int j = 1;j<J-1; j++){
		v0[j]= v_0(j*Delta_x);
		U[2][j+1] = (1-mu*mu)*(U[1][j+1])+((mu*mu)/2)*(U[1][j]+U[1][j+2])+ Delta_t *v0[j];
	}

	ofstream outStrm; 
	outStrm.open ("File.txt");

	if (!outStrm.is_open())
		{
			cout << "integerFile cannot be opened!";
			return-1;
		}

	for (int i = 0;i<K; i++){
		for (int j = 0;j<J; j++){
		outStrm <<U[i][j]<<" ";		
		}
		outStrm <<"\n";
	}	

	outStrm.close();	
	return 0;
}

double  u_0(double x){
	return sin(PI*x);
}

double  v_0(double x){
	return 0;
}