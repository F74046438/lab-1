#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
  int num;
  cout<<"please enter your number";
  cin>>num;
  
  while(num!=1)
  
  {
  	
  if(num%2==1)
  
  {num=3*num+1;
   cout<<num<<" ";
  }
  
  else if(num%2==0)
  
  {num=num/2;
   cout<<num<<" ";
  }
  
  }
  system("pause");
  return 0;
   
}
