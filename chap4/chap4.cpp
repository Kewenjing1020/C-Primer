//written by KE Wenjing
//created in 22/11/2015
//chap4 of C-Primer, including array,   pointer

#include <iostream>
#include <string>
#include <vector>
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
	// int val1=1024,val2=2048;
	// int *pi=&val1,*pi2=&val2;
	// pi=pi2;
	// cout <<val1<<val2<<endl;
	// cout << *pi <<*pi2<<endl;

	// int &ri =val1, &ri2=val2;
	// ri=ri2;
	// cout << val1<<val2;


	// int ia[]={0,2,4,6,8};
	// int *ip=ia;				//=> int *ip =&ia[0]
	// cout<< *ip<<endl;

	// ip=&ia[4];
	// cout<<*ip<<endl;	

	// ip=ia;
	// cout<<ip<<endl;				//0x7fff5226bb60
	
	// int *ip2=ip+4;				//=> int *ip2= &(ia+4)
	// cout<<*ip2<<endl;
	// cout<<ip2<<endl;

	// int last=*(ia+4);
	// cout <<last<<endl;

	// int *p=&ia[2];
	// int j=p[1];					//-> ia[3]
	// int k=p[-2];				//->ia[0]
	// cout << j << k <<endl;


	// const size_t arr_sz=5;
	// int int_arr[arr_sz]={0,1,2,3,4};
	// for (int *pbegin=int_arr,*pend = int_arr+arr_sz; pbegin!=pend; ++pbegin)
	// 	cout << *pbegin<<' ';


	// const double *cptr;
	// const double pi=3.14;
	// const double h=6.31;
	// const double *cptr2 = &h;
	// cptr = &pi;
	// cout << *cptr<<endl;
	// cptr = cptr2;
	// cout << pi <<endl;
	// cout << *cptr <<endl;

 	
 	// int errNum=0;
 	// int *const curErr = & errNum;		//curErr is read-only

 	// cout << *curErr <<endl;

 	// *curErr =2;
 	// cout <<*curErr<<endl;



	// const char *cp="some value";
	// int n=0;
	// cout <<cp<<endl;
	// while (*cp)
	// {
	// 	++cp;	
	// 	++n;
	// }
	// cout <<n;



// 	const char *cp1="a string example";
// 	const char *cp2="a different string";
// 	int i= strcmp (cp1,cp2);
// 	cout<< i << endl;
// //C
// 	int a=strlen(cp1);
// 	int b=strlen(cp2);
// 	char largeStr[a+b];
// 	strcpy(largeStr, cp1);
// 	strcat(largeStr,cp2);
// 	cout <<a<<' '<<b<<endl;
// 	cout << largeStr<<endl;
// //C++
// 	string largeStr2=cp2;
// 	largeStr2 +=' ';
// 	largeStr2 +=cp2;
// 	cout<< largeStr2<<endl;


//new array
	// int *pia =new string int[10];

	// const char *pc="a very long literal string";
	// const size_t len=strlen(pc);
	// for (size_t ix=0;ix !=10000;++ix)
	// {
	// 	char *pc2 = new char[len+1];

	// }
	// ??????
	// ??????



	// const char *noerr ="success";
	// const char *err189="error: a function declaration must"
	// 					" specify a function return type!";
	// const char *errorTxt;
	// if (1)
	// 	errorTxt = err189;
	// else
	// 	errorTxt = noerr;
	// int dimension =strlen(errorTxt)+1;
	// char *errMsg = new char[dimension];
	// strncpy (errMsg, errorTxt, dimension);
	// for(size_t ix=0; ix!=strlen(errMsg)+1;++ix)
	// 	cout<<errMsg[ix];
	// //cout<<errrMsg<<endl;
	// delete [] errMsg;



	// const size_t arr_size =6;
	// int int_arr[arr_size]={0,1,2,3,4,5};
	// std::vector<int> v(int_arr,int_arr+arr_size);
	// for (size_t ix=0; ix!=6;++ix){
	// 	cout << v[ix]<<endl;
	// }
	// for (std::vector<int>::size_type ix=0; ix!=arr_size;++ix){
	// 	cout << v[ix]<<endl;
	// }


	





}
