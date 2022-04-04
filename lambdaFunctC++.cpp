#include <iostream>
using namespace std;


int main( )
{
// auto func=[](){
// cout<<"Hello world!\n";
// };

// func();
// func();

// [](){
//  cout<<"Hello world!\n";
// }();





//lambda function that takes paramets
// [](double a, double b){
//     std::cout<<"a+b "<<(a+b)<<endl;
// }(10.0, 5.0);



//auto func1=[](double a, double b){
// std::cout<<"a+b "<<(a+b)<<endl;
// };
//func1(10, 18);

// auto result=[](double a, double b){
// return a+b;
// }(10,20);

//cout<<result;
// std::cout<<"result: "<<[](double a, double b){
// return a+b;
// }(10,20);

// auto func2=[](double a, double b){
// return a+b;
// };
// auto result2=func2(9, 44);
//cout<<result2;


//explicitly specify the return type
auto func3=[](double a, double b)->int{
return a+b;
};

auto func4=[](double a, double b){
return a+b;
};

double a{6.9};
double b{3.5};

auto result3=func3(a,b);
auto result4=func4(a,b);

cout<<"size(result3) "<<sizeof(result3)<<endl;

std::cout<<"sizeof(result4) "<<sizeof(result4)<<endl;

return 0;

}