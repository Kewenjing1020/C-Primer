//written by KE Wenjing
//created in 22/11/2015
//chap4 of C-Primer, including array,   pointer

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){

//array
	// const unsigned buf_size = 512, max_files =20;
	// int staff_size = 27;
	// //const unsigned sz =get_size();
	// char input_buffer[buf_size];
	// string fileTable[ max_files + 1 ];
	// return 0;


	// const unsigned array_size=3;
	// int ia[array_size]={1,2,3};
	// int ib[]={4,5,6};
	// cout<<ia[0]<<ia[1]<<ia[2]<<endl;
	// cout<<ib[0]<<ib[1]<<ib[2]<<endl;

	// string str_arr[array_size]={"hi ","bye"};
	// cout<<str_arr[0]<<str_arr[1]<<endl;

	// char ca1[]={'c','+','+'};
	// char ca2[]={'c','+','+','\0'};
	// char ca3[]="c++";
	// cout<<ca2[0]<<ca2[1]<<ca2[2]<<ca2[3]<<endl;
	// return 0;



	// const int array_size=10;
	// int ia[array_size];

	// for(int cnt=0;cnt<array_size;++cnt)
	// {
	// 	ia[cnt]=cnt;
	// 	cout<<ia[cnt]<<endl;
	// }
	// return 0;



	// const size_t array_size=7;
	// int ia1[]={0,1,2,3,4,5,6,7,8,9};
	// int ia2[array_size];

	// for(size_t ix=0; ix<array_size;ix++){
	// 	ia2[ix]=ia1[ix];
	// 	cout<<ia2[ix];
	// }
	// return 0;



//pointer
	// vector<int> *pvec;     //pvec point to a vector<int>
	// int *ip1,*ip2;
	// string *pstring;

	// int ival=1024;
	// int *pi=0;
	// int *pi2 = &ival;
	// cout << *pi2<<endl;       //output:1024 ->value
	// cout << &*pi2<<endl;	  //output: 0x7fff5c5d6b18 ->adress
	// cout << &ival<<endl;      //output: 0x7fff5f26bb38 ->adress
	// cout << *&ival<<endl;     //output:1024 ->value

	// int a=3;
	// //int *pi3=a;		//error:point to a value;
	// int *pi3=&a;
	// cout<<*pi3<<endl;
//void *	
	// double obj=3.14;
	// double *p1=&obj;
	// void *p2=&obj;
	// // cout << *p2<<endl;        //error: void does not have an output
	// p2=p1;
	// // cout<< *p2<<endl;		//error
	// // double *p1;
	// // p1=p2;
	// cout<<*p1;
	// return 0;


	// string s("hello world");
	// string *sp=&s;
	// cout <<*sp<<endl;

	// *sp="goodbye";		//change the content of s
	// cout <<*sp<<endl;

	// string s2 ="some value";
	// sp =&s2;
	// cout << *sp;

//reference and pointer
	int val1=1024,val2=2048;
	int *pi=&val1,*pi2=&val2;
	pi=pi2;
	cout <<val1<<val2<<endl;
	cout << *pi <<*pi2<<endl;

	int &ri =val1, &ri2=val2;
	ri=ri2;
	cout << val1<<val2;






}
