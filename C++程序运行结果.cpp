//C++������� 
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool Fun1(char const * str)
{
   	cout << str << endl;
    return false;
}
 
bool Fun2(char const* str)
{
    cout << str << endl;
    return true;
}
int main(int argc, char** argv) {
	bool res1, res2;
	/*
	���: 
		a
		b
		d
	*/
    res1 = (Fun1("a") && Fun2("b")) || (Fun1("c") || Fun2("d"));
    /*
	���: 
		a
	*/
	res2 = (Fun1("a") && Fun2("b")) && (Fun1("c") || Fun2("d"));
 	//res1Ϊtrue res2Ϊfalse ,���return ture 
    return res1 || res2;
}

 

