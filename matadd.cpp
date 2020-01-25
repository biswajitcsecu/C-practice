



#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>

#define N 50
#define M 50

using namespace std;

int main(int argc, char const *argv[]){

	int i, j;
	double** matX = new double*[M];
	double** matY = new double*[M];
	double** matZ = new double*[M];

	//define matrix
	for (i=0; i<M; i++){
		//first matrix
		matX[i] = new double [N];
		//secend matrix
		matY[i] = new double [N];
		//third matrix
		matZ[i] = new double [N];
	}

	//initilize
	for (i=0; i<M; i++){
		for(j =0; j<N; j++){
			matX[i][j] = std::sin((double)rand()/(RAND_MAX)+1);
			matY[i][j] = std::cos((double)rand()/(RAND_MAX)+1);
			matZ[i][j] = 0.0;
		}
	}

	//add two matrix
	for (i=0; i<M; i++){
		for(j =0; j<N; j++){		
			matZ[i][j] = matX[i][j]+ matY[i][j];
		}
	}

    ofstream fil ("out.txt");

    if(!fil){
       	cout << "Cannot open file.\n";
       	return 1;
   	}

	// write on text
	for (i=0; i<M; i++){
		for(j =0; j<N; j++){		
			matZ[i][j] = matX[i][j]+matY[i][j];
			fil<<matX[i][j]<<" "<<matY[i][j]<<" "<<matZ[i][j]<<"\n";
		}		
	}

    fil.close();
	return 0;
}