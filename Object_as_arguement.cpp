#include <iostream>
using namespace std;
class weight{
double kilogram;
int gram;
static int count;
public:
weight():kilogram(0),gram(0){}
void getvalue()
{
  ++count;
  cout<<"\nENTER THE WEIGHT OF OBJ "<<count<<" (kilogram): ";
  cin>>kilogram;
  cout<<"ENTER THE WEiGHT OF OBJ "<<count<<" (gram): ";
  cin>>gram;
}

weight Addweight(weight w1,weight w2)
{
  weight temp;
  int c;
  temp.kilogram=w1.kilogram + w2.kilogram;
  temp.gram=w1.gram + w2.gram;
  c=temp.gram/1000;
  temp.gram=temp.gram%1000;
  temp.kilogram=temp.kilogram+c;
   
  return temp;
}
void display()
{
  cout<<"\nADDITON OF WEIGHTS IN KILOGRAM: "<<endl;
  cout<<kilogram; 
  cout<<"\nADDITON OF WEIGHTS IN GRAM: "<<endl;
  cout<<gram; 
}
};
int weight::count;
int main() {
  cout<<"ROLL NO. 198…
[8:12 PM, 9/2/2020] Wonder Woman: #include <iostream>
using namespace std;
class height{
int inches;
float feet;
int static count;
public:
height():inches(0),feet(0) {}
void getvalue()
{
  ++count;
  cout<<"\nENTER THE HEIGHT OF OBJ "<<count<<": \n";
  cout<<"IN FEET: ";
  cin>>feet;
  cout<<"IN INCHES: ";
  cin>>inches;
}

height Addheight(height h[],int n)
{ 
  height temp;
  int i;
  float c;
  for(i=1;i<=3;i++)
  {
    temp.inches=temp.inches+h[i].inches;
    temp.feet=temp.feet+h[i].feet;
  }
  c=temp.inches/12;
  temp.inches=temp.inches%12;
  temp.feet=c+temp.feet;
  return temp;
}
void display()
{
  cout<<"\nADDITION OF THE HEIGHTs OF OBJECTS ARE: "<<feet<<" feet "<<inches<<" inches";
}
};
int height::count;
int main() {
  cout<<"ROLL NO. 1981054\n";
  ;
  int i,n=5;
  height h[n];

  for(i=1;i<=3;i++)
  h[i].getvalue();
  
  height h4;
  h4=h4.Addheight(h,n);
  h4.display();
  return 0;
}
