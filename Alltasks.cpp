//task1
#include<iostream>
using namespace std;
void feet(float inch)
{
float feet;
feet=inch/12;
cout<<"Equivalent in feet: "<<feet<<endl;
}
main()
{
float inch;
cout<<"Enter the measurement in inches: ";
cin>> inch;
feet(inch);
}
//task2
#include<iostream>
using namespace std;
void no_ofstickers(int n)
{
int no_ofstickers;
no_ofstickers=n*n*6;
cout<<"Number of stickers needed: "<<no_ofstickers<<endl;
}
main()
{
int n;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>> n;
no_ofstickers(n);
}
//task3
#include<iostream>
using namespace std;
void fuel(float distance)
{
float fuelamount;
fuelamount=10*distance;
cout<<"Fuel needed: "<<fuelamount;
}
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}
//task4
#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);

}
void pet(int holidays)
{
int workingdays,hours,minutes;
workingdays=365-holidays;
float timeforgames;
timeforgames=workingdays*63+holidays*127;
int differencefromnorm;
differencefromnorm=30000-timeforgames;
if(differencefromnorm >= 0)
{
cout<<"Tom sleeps well"<<endl;
differencefromnorm=30000-timeforgames;
int hours,minutes;
hours=differencefromnorm/60;
minutes=differencefromnorm % 60;
cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
if(differencefromnorm<0)
{
cout<<"Tom will run away"<<endl;
differencefromnorm=timeforgames-30000;
int hours,minutes;
hours=differencefromnorm/60;
minutes=differencefromnorm % 60;
cout<<hours<<" hours and "<<minutes<<" minutes for play";
}
}
//task5
#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"Sum: "<<sum<<endl;
}
main()
{
int a,b;
cout<<"Enter number 1: ";
cin>>a;
cout<<"Enter number 2: ";
cin>>b;
char op;
cout<<"Enter Operator(+,-,/,*): ";
cin>>op;
if(op == '+' )
{
add(a,b);

}

}
//task6
#include<iostream>
using namespace std;
main(){
cout<<"Enter the number of sides of the polygon: ";
int n;
cin >> n;
int internalangles;
internalangles = (n-2) * 180;
cout << "The sum of internal angles of a "<<n<<"-sided polygon is: "<<internalangles<<" degrees";
}
//task7
#include<iostream>
using namespace std;
void equalornot(int num1,int num2)
{
if(num1==num2)
    {
     cout<<"true";

    }
else
    { 

     cout<<"false";

    }

}
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
equalornot(num1,num2);



}
//task8
#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"Sum: "<<sum<<endl;
}
main()
{
int a,b;
cout<<"Enter number 1: ";
cin>>a;
cout<<"Enter number 2: ";
cin>>b;
char op;
cout<<"Enter Operator(+,-,/,*): ";
cin>>op;
if(op == '+' )
{
add(a,b);
}

}
//task9
#include<iostream>
using namespace std;
void equalornot(string op);

main()
{
string op;
cout<<"Enter 'true' or 'false': ";
cin>>op;
equalornot(op);



}
void equalornot(string op)

{
if(op=="true")
    {
     cout<<"false";

    }
else
    { 

     cout<<"true";

    }
}
//task10
#include<iostream>
using namespace std;
main(){
cout<<"Number of Minutes: ";
int min;
cin>>min;
int sec;
sec=min*60;
cout<<"Frames per Second: ";
int frame;
cin>>frame;
int total;
total=sec*frame;
cout<<"Total Number of Frames: "<<total;
}
//task11
#include<iostream>
using namespace std;
void priceafterdiscount(string name,float ticketprice);

main()
{
string name;
float ticketprice;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>ticketprice;
priceafterdiscount(name,ticketprice);



}
void priceafterdiscount(string name,float ticketprice)
{
float priceafterdiscount;
if(name=="Pakistan")
   {
    priceafterdiscount=ticketprice-ticketprice*5/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="India")
    {
    priceafterdiscount=ticketprice-ticketprice*20/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="Ireland")
 {
    priceafterdiscount=ticketprice-ticketprice*10/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="Canada")
 {
    priceafterdiscount=ticketprice-ticketprice*45/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
if(name=="England")
 {
    priceafterdiscount=ticketprice-ticketprice*30/100;
    cout<<"Final ticket price after discount: $"<<priceafterdiscount<<endl;
    }
}
//task11
#include<iostream>
using namespace std;
main(){
cout<<"Enter Initial Velocity (m/s): ";
float iniv;
cin>> iniv;
cout<<"Enter Acceleration (m/s^2): ";
float acc;
cin>>acc;
cout<<"Enter Time (s): ";
int time;
cin>>time;
float finalv;
finalv=acc*time+iniv;
cout<<"Final Velocity (m/s): "<<finalv;
}
//task12
#include<iostream>
using namespace std;
main(){
cout<<"Enter Imposter Count: ";
int c;
cin>>c;
cout<<"Enter Player Count: ";
int p;
cin>>p;
int chance;
chance=100*c/p;
cout<<"Chance of being an imposter: "<<chance<<"%";
}
//task13
#include<iostream>
using namespace std; 
void checkSpeed(int speed);
main()
{
int speed;
cout<<"Speed: ";
cin>>speed;
checkSpeed(speed);



}
void checkSpeed(int speed)
{
if(speed>100)
   {
    cout<<"Halt... YOU WILL BE CHALLENGED!!!";


    }
else
{
   cout<<"Perfect! You're going good.";


}
}
//task14
#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"Addition: "<<sum<<endl;
}
void multiply(int num1,int num2)
{
int product;
product=num1*num2;
cout<<"Multiplication: "<<product<<endl;
}
void subtract(int num1,int num2)
{
int difference;
difference=num1-num2;
cout<<"Subtraction: "<<difference<<endl;
}
void divide(float num1,float num2)
{
float division;
division=num1/num2;
cout<<"Division: "<<division<<endl;
}
main()
{
int num1,num2;
char op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if(op=='+')
{
add(num1,num2);
}
if(op=='-')
{
subtract(num1,num2);
}
if(op=='*')
{
multiply(num1,num2);
}
if(op=='/')
{
divide(num1,num2);
}
}
//task15
#include<iostream>
using namespace std;
main(){
cout<<"Enter the Name of the Person: ";
string p;
cin>>p;
cout<<"Enter the target weight loss in kilograms: ";
float t;
cin>>t;
float days;
days=t*15;
cout<<p<<" will need "<<days<<" days to lose "<<t<<" kg of weight by following the doctor's suggestions";

}
//task16
#include<iostream>
using namespace std;
void greater(int h, int m);
main()
{
int h,m;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number of minutes: ";
cin>>m;
greater(h, m);
}
void greater(int h, int m)
{

if(h>m)
{
  print h;
}

if(m>h)
{
 print m;
}



}
//task17
#include<iostream>
using namespace std;
void vote(int age)
{
if(age>=18)
{
cout<<"You are eligible to vote.";
}
else
{
cout<<"You are not eligible to vote.";
}
}
main()
{
int age;
cout<<"Enter your age: ";
cin>>age;
vote(age);

}
//task18
#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float p;
cin>>p;
cout<<"Enter the cost of the bag: $";
float c;
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
float a;
cin>>a;
float costperpound;
costperpound=c/p;
float costpersquarefoot;
costpersquarefoot=c/a;
cout<<"Cost of fertilizer per pound: $"<<costperpound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<costpersquarefoot<<endl;

}
 //task19
#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float p;
cin>>p;
cout<<"Enter the cost of the bag: $";
float c;
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
float a;
cin>>a;
float costperpound;
costperpound=c/p;
float costpersquarefoot;
costpersquarefoot=c/a;
cout<<"Cost of fertilizer per pound: $"<<costperpound<<endl;
cout<<"Cost of fertilizing per square foot: $"<<costpersquarefoot<<endl;

}
//task20
#include<iostream>
using namespace std;
void longestduration(int h, int m);
main()
{
int h,m;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number of minutes: ";
cin>>m;
longestduration(h, m);
}
void longestduration(int h, int m)
{
int cal;
cal = h * 60;
if(cal>m)
{
  cout<<""<<h<<endl;
}
else
{
 cout<<""<<m<<endl;
}



}
//task21
#include<iostream>
using namespace std;
void PassOrFail(int score)
{
if(score>50)
{
cout<<"Pass";
}
else
{
cout<<"Fail";
}
}
main()
{
int score;
cout<<"Enter your score: ";
cin>>score;
PassOrFail(score);




}
//rask22
#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string name;
cin>>name;
cout<<"Enter the adult ticket price: $";
float price;
cin>>price;
cout<<"Enter the child ticket price: $";
float cprice;
cin>>cprice;
cout<<"Enter the number of adult tickets sold: ";
int sold;
cin>>sold;
cout<<"Enter the number of child tickets sold: ";
int csold;
cin>>csold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
float percent;
cin>>percent;
cout<<""<<endl;
float total;
total=sold*price+csold*cprice;
float donation;
donation=total/percent;
float remain;
remain=total-donation;
cout<<"Movie: "<<name<<endl;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity (" <<percent<< "%): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<remain<<endl;
}
//task23
#include<iostream>
using namespace std;
void flowershop(int redRose,int whiteRose,int tulip);
main()
{
int redRose,whiteRose,tulip;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips: ";
cin>>tulip;
flowershop(redRose,whiteRose,tulip);

}
void flowershop(int redRose,int whiteRose,int tulip)
{
float originalprice;
originalprice=redRose*2.00+whiteRose*4.10+tulip*2.50;
cout<<"Original Price: $"<<originalprice<<endl;
if(originalprice>200)
{
float discount;
discount=originalprice-originalprice*20/100;
cout<<"Price after Discount: $"<<discount<<endl;
}
else
{
cout<<"No discount applied.";
}
}
//task24
#include<iostream>
using namespace std;
void evenodd(int num)
{
if(num%2==0)
{
cout<<"Number " <<num<< " is even";
}
else
{
cout<<"Number " <<num<< " is odd";
}
}
main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
evenodd(num);

}
//task25
#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float kinc;
cin>>kinc;
cout<<"Enter fruit price per kilogram (in coins): ";
float finc;
cin>>finc;
cout<<"Enter total kilograms of vegetables: ";
float kg;
cin>>kg;
cout<<"Enter total kilograms of fruits: ";
float kgf;
cin>>kgf;
float rsofveg;
rsofveg=kinc*kg;
float rsoffru;
rsoffru=finc*kgf;
float final;
final=rsofveg+rsoffru;
float final_;
final_=final/1.94;
cout<<"Total earnings in Rupees (Rps): "<<final_;
}
 //task26
#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);

}
void pet(int holidays)
{
int workingdays;
workingdays=365-holidays;
float timeforgames;
timeforgames=workingdays*63+holidays*127;
int differencefromnorm;
differencefromnorm=30000-timeforgames;
int hours;
hours=differencefromnorm/60;
int minutes;
minutes=differencefromnorm % 60;
if(differencefromnorm <= 30000)
{
   {
cout<<"Tom sleeps well"<<endl;
   }
if(hours<0)
  {
cout<< hours << " hours and ";
  }
else
  {
cout<< hours << " hours and ";
  }
if(minutes<0)
  {
cout<<minutes<<" minutes less for play";
  }
else
  {
cout<<minutes<<" minutes less for play";
  }
}
else
{
   {
cout<<"Tom will run away"<<endl;
   }
if(hours<0)
   {
cout<< hours << " hours and ";
   }
else
   {
cout<< hours << " hours and ";
   }
if(minutes<0)
   {
 cout<<minutes<<" minutes for play";
   }
else
  {
 cout<<minutes<<" minutes for play";
  }
}
}
//task27
#include<iostream>
using namespace std;
void priceafterdiscount(int total,string day)
{
float discount;
if(day=="Sunday")
{
discount=total-total*10/100;
}
else
{
discount=total;
}
cout<<"Payable Amount: $"<<discount<<endl;
}

main()
{
string day;
int total;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>total;
priceafterdiscount(total,day);

}
//task28
#include<iostream>
using namespace std;
main(){
cout<<"Enter a 4-digit number: ";
int num;
cin>>num;
int num1;
num1=num%10;
int num2;
num2=num/10;
int num_2;
num_2=num2%10;
int num3;
num3=num2/10;
int num_3;
num_3=num3%10;
int num4;
num4=num3/10;
int final;
final=num1+num_2+num_3+num4;
cout<<"Sum of the individual digits: "<<final;
}
//task29
#include<iostream>
using namespace std;
void tpChecker(int people,int roll);
main()
{
int people,roll;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>roll;
tpChecker(people,roll);
}
void tpChecker(int people,int roll)
{
int singlepersonsheets;
int no_of_rolls ;
no_of_rolls=roll*500;
singlepersonsheets=no_of_rolls/people;
int dayservive;
dayservive=singlepersonsheets/57;
if(dayservive>=14)
{
cout<<"Your TP will last "<<dayservive<<" days, no need to panic!";
}
else
{
cout<<"Your TP will only last "<<dayservive<<" days, buy more!";
}

}
task30
#include<iostream>
using namespace std;
void fuel(float distance)
{
float calculatefuel;
calculatefuel=distance*10;
if(calculatefuel>100)
{
cout<<"Fuel needed: "<<calculatefuel<<endl;
}
else
{
cout<<"Fuel needed: 100";
}
}
main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
fuel(distance);
}
//task31
#include<iostream>
using namespace std;
main(){
cout<<"Number 1: ";
float one;
cin>> one;
cout<<"Number 2: ";
float two;
cin>>two;
cout<<"Number 3: ";
float three;
cin>>three;
cout<<"Number 4: ";
float four;
cin>>four;
cout<<"Number 5: ";
float five;
cin>>five; 
cout<<"Number 6: ";
float six;
cin>>six;
cout<<"Number 7: ";
float seven;
cin>>seven;
cout<<"Number 8: ";
float eight;
cin>>eight;
cout<<"Number 9: ";
float nine;
cin>>nine;
cout<<"Number 10: ";
float ten;
cin>>ten;
cout<<"Number 11: ";
float ele;
cin>>ele;
cout<<"Number 12: ";
float tel;
cin>>tel;
cout<<"Number 13: ";
float thir;
cin>>thir;
cout<<"Number 14: ";
float fourteen;
cin>>fourteen;
cout<<"Number 15: ";
float fifteen;
cin>>fifteen;
float firstadd;
firstadd=one+two+three+four+five;
float multiplynum;
multiplynum=six*seven*eight*nine*ten;
float sublastnum;
sublastnum=ele-tel-thir-fourteen-fifteen;
float final;
final=firstadd+multiplynum;
float majorfinal;
majorfinal=final-sublastnum;
cout<<"The final result is: "<<majorfinal;
}
//task32
#include<iostream>
using namespace std;
main(){
cout<<"Enter the person's age: ";
int age;
cin>>age;
cout<<"Enter the number of times they've moved: ";
int moves;
cin>>moves;
int move;
move=moves+1;
int ave;
ave=age/move;
cout<<"Average number of years lived in the same house: "<<ave;
}
//task35
#include<iostream>
using namespace std;
main(){
cout<<"Number of square meters you can paint: ";
int squaremeters;
cin>>squaremeters;
cout<<"Width of the single wall (in meters): ";
int width;
cin>>width;
cout<<"Height of the single wall (in meters): ";
int height;
cin>>height;
int area;
area=width*height;
int final;
final=squaremeters/area;
cout<<"Number of walls you can paint: "<<final;
}
//task36
#include<iostream>
using namespace std;
void add(int a,int b)
{
int sum;
sum=a+b;
cout<<"Sum is: "<<sum;
}
main()
{
int a,b;
cout<<"Enter first int: ";
cin>>a;
cout<<"Enter sec int: ";
cin>>b;
add(a,b);

}
//task37
#include<iostream>
using namespace std;
main(){
cout<<"Enter height: ";
float h;
cin>> h;
cout<<"Enter radius: ";
float rad;
cin>>rad;
float Area;
Area=2*3.14*rad*(rad+h);
cout<<"Area of cylinder is: "<<Area<<" sq.units. ";
}
//task37
#include<iostream>
using namespace std;
void timeTravel(int ho, int mi);
int main()
{
cout<<"Enter Hours: ";
int h,m;
;
cin>> h;
cout<<"Enter Minutes: ";
cin>> m;
timeTravel(h,m);
}
void timeTravel(int ho, int mi)
{
int add;
add=mi+15;
if(mi>=46)
{

int k,g;


g=add-60;
k=ho+1;
if(k>=23)
{
k=0;
}
cout<<k<<":" <<g;
}
if(mi<46)
{
int k;
k=ho;
cout << k <<":"<<add<<endl;
}
}
//task38
#include<iostream>
using namespace std;
int argument(int num); 
main()
{
int num;
cout<<"Enter a five-digit number: ";
cin>>num;
argument(num);

}
int argument(int num) 
{
int a,b,c,d,e,num1,num2,num3;
a=num%10;
num1=num/10;
b=num1%10;
num2=num1/10;
c=num2%10;
num3=num2/10;
d=num3%10;
e=num3/10;
   if(a==e && b==d)
   {
cout<<"The number is symmetrical.";
   }
   else
   {
cout<<"The number is not symmetrical.";
   }
}
 



