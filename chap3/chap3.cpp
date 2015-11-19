#include <iostream>
#include <string>
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
	string s("Hello World!!!");
	string::size_type cnt=0;
	for(string::size_type index =0;index<= s.size();++index){
		if(ispunct(s[index]))
			cnt++;
	}
	cout<<cnt<<endl;

	//tolower
	for(string::size_type index =0;index<= s.size();++index)
	{
		s[index]=tolower(s[index]);
	}
	cout <<s<<endl;
	return 0;




}
