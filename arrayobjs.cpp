
// An example of arrays of objects
#include <iostream>

using namespace std;

enum resolution {low, medium, high};

class display {
int width;
int height;
resolution res;
public:
void set_dim(int w, int h) {width = w; height = h;}
void get_dim(int &w, int &h) {w = width; h = height;}
void set_res(resolution r) {res = r;}
resolution get_res() {return res;}
};
char names[3][7] = {
"low",
"medium",
"high",
} ;

int main()
{
display display_mode[3];
int i, w, h;
display_mode[0].set_res(low);
display_mode[0].set_dim(640, 480);
display_mode[1].set_res(medium);
display_mode[1].set_dim(800, 600);
display_mode[2].set_res(high);
display_mode[2].set_dim(1600, 1200);
cout << "Available display modes:\n\n";
for(i=0; i<3; i++) {
cout << names[display_mode[i].get_res()] << ": ";
display_mode[i].get_dim(w, h);

cout << w << " by " << h << "\n";
}
return 0;
}