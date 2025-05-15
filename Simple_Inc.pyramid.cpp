#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter the levels of the pyramid: ";
	cin>>n;
	cout<<endl;
if (n>1){
	for(int i=1;i<=n;i++){      // (i and j) are changable variables...
		for(int j=0;j<i;j++)   //  When the first loop's conditions are met the second loops comes in play.
		{                     //  note: In loops, it's  check the condition, if correct then it's action, and then update. After the update, the loop rechecks the condition to take action or not. If the condition isn't correct we escape the loop.
			cout<<"*";       //  the action of the first loop IS the second loop.
		}                   // (1)the second loop performs its action..(2) Then it updates, but the conditions aren't met...(3) we escape the second loop and perform the last first loop's action.
		cout<<endl;        // (4) the first loop updates and rechecks after all the actions are done.
	}
}
  else
  {
  	cout<<"Invalid input."<<endl;
  }
cout<<endl;
cout<<"P.S... fuck you! :)";


	
	
	
	
	
return 0;
}
