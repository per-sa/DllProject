/*Use __cplusplus preprocessor macro to determine
which language is being compiled.

If we use this technique and provide header files
for the DLL, these functions can be used by C and C++
users with no change

#ifdef __cplusplus
extern "C" {
#endif

//Your functions that can be accessible from
//C or C++ projects

#ifdef __cplusplus
}
#endif
*/

#ifdef __cplusplus  
extern "C" {
#endif  

	//Write your functions with __declspec( dllexport )
	//to available in client code
	__declspec(dllexport) void isValidTriangle(double a, double b, double c);
	__declspec(dllexport) double triangleType(double a, double b, double c);
	__declspec(dllexport) float circleArea(float radius);


#ifdef __cplusplus  
}
#endif  
