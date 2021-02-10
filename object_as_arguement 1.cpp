#include <iostream>
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

  int i,n=5;
  height h[n];

  for(i=1;i<=3;i++)
  h[i].getvalue();
  
  height h4;
  h4=h4.Addheight(h,n);
  h4.display();
  return 0;
}