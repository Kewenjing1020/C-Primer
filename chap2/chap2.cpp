// create by kewenjing,17/11/2015
//chap 2 of C++ Primer

#include <iostream>
#include <string>
using namespace std;
string titleA= "C++ primer, 4th Ed.";

class sales_item{
public:

private:
	string book_name;
	int book_id;
	double price;
	double sum;
	int num;

};

int main()
{
	//no. 1
	// cout << "maomaoyu \
	// 		i love u!"
	// <<endl;
	// return 0;



	//no2. calculate 2^n
	// int value=2;
	// int power=10;
	// int result=1;

	// for (int cnt=1;cnt<=10;cnt++)
	// {
	// 	result*=value;
	// }
	// cout<< value <<" raised to the power of "
	// 	<< power << " is " <<result<<endl;
	// return 0;



	//no.3
	// extern string name;
	// string name="exercise";
	// cout<< name<<endl;
	// cout<< titleA <<endl;
	// return 0;


	//extern???????????????????????
	// extern double pi=3.14;
	// cout<<pi<<endl;



	//no.4
	// typedef double wages;
	// typedef int exam_score;
	// typedef wages salary;

	// wages hourly, weekly;
	// // weekly = hourly * 30;
	// salary month_salary;
	// // month_salary= weekly * 4;         
	// attention: define here is useless, 
	//   the programe execute line by line
	  
	// exam_score test_result;

	// cout<<"hourly wages?"<<endl;
	// cin>> hourly ;

	// weekly = hourly * 30;
	// month_salary= weekly * 4;
	// cout<< hourly<<" *30 => "<<weekly<< " * 4 =>" <<month_salary<<endl;
	// return 0;




	//no.5
	// enum open_modes{input, output, append};
	// cout<< input<<output<<append<<endl;

	// enum points{a=2, b, c, d=8,e, f};
	// cout<<a<<b<<c<<d<<e<<f<<endl;

	// points gg=a;
	// cout<<gg;

	// return 0;


}

