/*Write a program in C++ to use map associative container. The keys will be the names of 
states, and the values will be the populations of the states. When the program runs, the 
user is prompted to type the name of a state. The program then looks in the map, using 
the state name as an index, and returns the population of the state. */




#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    typedef map<string,int>maptype;
    maptype populationmap;
    populationmap.insert(pair<string,int>("maharastra",12312412));
    populationmap.insert(pair<string,int>("goa",54322524));
    populationmap.insert(pair<string,int>("kerla",658797));
    populationmap.insert(pair<string,int>("delhi",63546));
    populationmap.insert(pair<string,int>("punjab",234567));

    maptype::iterator it;
    string ch;
    char ch1;
    do{
        cout<<"enter the state name:"<<endl;
        cin>>ch;
        it=populationmap.find(ch);
        if(it!=populationmap.end())
        {
            cout<<ch<<" population is:"<<it->second<<endl;
        }
        else
        {
            cout<<"state not present in map"<<endl;
        }
        cout<<"\nwant to continue(y/n)"<<endl;
        cin>>ch1;
    }while (ch1 !='n');
    return 0;
}


    
