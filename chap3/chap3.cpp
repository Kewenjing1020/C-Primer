#include <iostream>
#include <string>
#include <vector> 
#include <bitset>
using std::bitset;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    
    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // return 0;
    
    // string word;
    // while(cin>>word)
    // 	cout<<word;
    // return 0;



    //getline 
    // string line;
    // while(getline(cin,line))
    // 	cout<<line<<endl;
    // return 0;




	// string st;
	// string word;
	// while(cin>>word)
	// 	st  = st + word;
	// cout<<st;
	// cout << "the size of \'" <<st<<"\' is"<< st.size()<<endl;
	// return 0;


	//attention!  string::size_type
	//Full replication
	// string str("some string");
	// for(string::size_type ix=0;ix !=str.size();++ix)
	// 	// cout<< str[ix]<<endl;
	// 	str[ix]='*';
	//int a=2,b=3;
	// string::size_type a=2,b=3;
	// str[a*b]=a;
	// cout<<str<<endl;
	// return 0;



//calculate number of punct
	//ispunct
	// string s("Hello World!!!");
	// string::size_type cnt=0;
	// for(string::size_type index =0;index<= s.size();++index){
	// 	if(ispunct(s[index]))
	// 		cnt++;
	// }
	// cout<<cnt<<endl;

	// //tolower
	// for(string::size_type index =0;index<= s.size();++index)
	// {
	// 	s[index]=tolower(s[index]);
	// }
	// cout <<s<<endl;
	// return 0;



//vector
	// vector<string> v(10,"hello");
	// string a=v[2];
	// cout <<a <<endl;
	// return 0;

//add element
	// string word;
	// std::vector<string> text;
	// while(cin>>word)
	// 	text.push_back(word);

	// vector<int> ivec;
	// for(vector<int>::size_type ix=0;ix!=10;++ix)
	// {
	// 	ivec.push_back(ix);
	// 	cout<<ivec[ix]<<endl;
	// }
	// for(vector<int>::iterator iter = ivec.begin();iter!=ivec.end();++iter)
	// {
	// 	cout<<*iter;
	// 	*iter = 0;
	// 	cout<<*iter <<endl;
	// }
	// return 0;

	// for(vector<int>::const_iterator iter = ivec.begin();iter!=ivec.end();++iter)
	// {
	// 	cout<<*iter;
	// }
	// return 0;


//bitset, right to left

	bitset<16> bitvet1 (0xffff);
	bitset<32> bitvet2 (0xffff);
	bitset<128> bitvet3 (0xffff);
	cout << bitvet1<<endl;
	cout << bitvet2<<endl;
	cout << bitvet3<<endl;

	 string strval("1100");
	 bitset<32> bitvec4(strval);
	 cout<<bitvec4<<endl;


	string str("1111111011101000000011");
	bitset<32> bitvec5(str,5,4);
	bitset<32> bitvec6(str,str.size()-4);
	cout<<bitvec5<<endl;
	cout<<bitvec6<<endl;

	return 0;





}
