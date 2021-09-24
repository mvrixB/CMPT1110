#include <iostream> 
#include <cmath>
using namespace std; 


int main(){
	float a, b, c, d, e, f, x, y, denominator;

   
	cout << "Enter the number values of A -> F to solve x: ";
	cin >> a >> b >> c >> d >> e >> f;
	cout << endl;

	denominator = (a*d - b*c);
 
 	if (denominator == 0){

 		cout << "The equation has no solution! ";

	} else{

		 x = ((e*d - b*f) / denominator );
		 y = ((a*f - e*c) / denominator );
		 
		 cout << "x value is " << x << endl;
		 cout << "y value is " << y << endl;

	}
	 
// 		if (denominator == 0){
// 		}
// 		cout << "The equation has no solution."
// 		cout << a, b, c, d, e, f;
// 			else

// ///////////////
//     float values(x) = (e*d - b*f) / (a*d - b*c)

//     float values(y) = (a*f - e*c) / (a*d - b*c)
// ////////////////

	return 0;

}