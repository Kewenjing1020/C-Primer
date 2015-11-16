//create by kewenjing, 16/11/2015
//this document includes the simple exercice in the book c++ primer
//chap1 preliminaire

#include <iostream>
#include "sales_item.h"
using namespace std;


int main()
{
    //cout, cin, namespace std
    
//    std ::cout << "enter two numbers:"<<std::endl;
//    int v1,v2;
//    std::cin>>v1>>v2;
//    std::cout<<"the sum of "<<v1<<" and "<<v2
//    <<" is "<<v1+v2<<std::endl;
//    return 0;
   
    //practice of "while"
//    int sum=0,val=1;
//    
//    while(val<=10)
//    {
//        sum+=val;
//        ++val;
//    }
//    cout<< "the sum of 1 to 10 inclusive is "<< sum<<"\n";
//    return 0;
    
    //for
//    int sum=0,val;
//    for (val=1; val<=10; ++val) {
//        sum+=val;
//    }
//    cout<< "the sum of 1 to 10 inclusive is "<< sum<<"\n";
//    return 0;
    
    //the practice of "if"
    //calculate the sum inclusive between lower and upper, lower and upper are unknown.
//    int sum=0,v1,v2;
//    cout<<"input?"<<endl;
//    cin>>v1;
//    cin>>v2;
//    
//    int lower,upper;
//    if (v1<=v2) {
//        lower=v1;
//        upper=v2;
//    }
//    else{
//        lower=v2;
//        upper=v1;
//    }
//    
//    for (int val=lower; val<=upper; ++val) {
//        sum+=val;
//    }
//    cout<< "the sum of "<<lower<<" to "<<upper<<" is "<< sum<<"\n";
//    return 0;

    //calculate a running total of all values read
//    int sum=0,value;
//    while (cin>>value) {        //read until the end of file
//        sum+=value;
//    }
//    
//    cout<< "sum is: "<<sum<<endl;
//    return 0;
    
    
    //class type
    //"sales_item.h" is given
//    Sales_item book;
//    cin>>book;
//    cout<<book<<endl;
//    return 0;
    
//    Sales_item item1,item2;
//    cin>>item1>>item2;
//    cout<<item1+item2<<endl;
//    return 0;
    
    // Sales_item item1,item2;
    // cin>>item1>>item2;
    // if(item1.same_isbn(item2))
    // {
    //     cout<<item1+item2<<endl;
    //     return 0;
    // }else{
    //     cerr<<"data must reger to same ISBM"<<endl;
    //     return -1;
    // }

    Sales_item total, trans;
    if (cin>>total){
        while(cin>>trans){
           if (total.same_isbn(trans))
                total=total +trans;
            else{
                cout <<total<<endl;
                total = trans;
            } 
        }
        cout<<total<<endl;

    }else{
        cout<<"no data?!"<<endl;
        return -1;
    }
    return 0;
    
    
}
