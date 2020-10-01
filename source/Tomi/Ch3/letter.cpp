#include "std_lib_facilities.h"

int main(){

String first_name;
cout << "Enter the name of the person you want to write to" << endl;
cin >> first_name;
cout <<"Dear " << first_name << "," << endl;
cout <<"How are you? I am fine. I miss you."<< endl;
cout <<"Have you found a job? Since yesterday I work as a computer programmer." << endl;
cout <<"Did you get married? I have a wife, a son and a daughter."<< endl;
String friend_name;
cout<<"Please enter the name of another friend."<<endl;
cin >> friend_name;
cout <<"Have you seen "<<friend_name <<" lately?"<<endl;;
char friend_sex='0';
cout<<"Please enter the sex of your friend"<<endl;
cin >>friend_sex;
if(friend_sex=='m')
cout << "If you see "<<friend_name<<" please ask him to call me."<<endl;
if(friend_sex=='f')
cout << "If you see "<<friend_name<<" please ask her to call me."<<endl;
cout<<"Please enter the age of the recipient!"<<endl;
int age;
cin >> age;
cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
if(age<=0 || age>=110)
simple_error("you're kidding!");
if(age<12)
cout<<"Next year you will be "<<(age+1)<<"."<<endl;
if(age==17)
cout<<"Next year you will be able to vote."<<endl;
if(age>70 && age<110)
cout<<"I hope you are enjoying retirement."<<endl;
cout<<"Yours sincerely," <<endl;
cout<<"__"<<endl;
cout<<"Oláh Tamás";

return 0;
}



