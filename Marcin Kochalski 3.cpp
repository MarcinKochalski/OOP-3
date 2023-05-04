#include <iostream>
using namespace std;


struct date {
int day;
int month;
int year;
};

void input_date(date &date){
int x;
cout <<"Input the day : ";
cin >> x;
cout << endl;
date.day = x;
cout <<"Input the month : ";
cin >> x;
cout << endl;
date.month = x;
cout <<"Input the year : ";
cin >> x;
cout << endl;
date.year = x;
}

void display_date(date &date)
{
cout <<"Day : " << date.day << endl;
cout <<"Month : " << date.month << endl;
cout <<"Year : " << date.year << endl;
}

int main(){
date datee;
input_date(datee);
display_date(datee);
return 0;
}
