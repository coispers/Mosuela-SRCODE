#include <iostream>
#include <string>
char back;
using namespace std;
int n=100;
class stud{
	public:
	string name;
	string srcode;
	string subj;
	string prof;
	string time;
};

int choice()
{
	do{
		
	
	cout<<"Do you want to continue? [Y/N]: ";
	cin>>back;
	if (back=='Y'||back=='y'||back=='n'||back=='N')
	{
	
	system("cls");
	return back;
}

else 
{ 
cin.ignore(50,'\n');
	cout<<"Please enter a correct choice! Try again!\n";
}
}
while (back!='Y'||back!='y');
}
int main(){
	stud e[n];
	int i=0,m,temp;
	string x;

cout<<"Enter the number of students: ";
         while (true){
        cin>>m;
		if (cin.fail())
		{
			cout<<"PLEASE ENTER A NUMBER OR INTEGER!\n Enter the number of students: ";
			cin.clear();
			cin.ignore(100,'\n');	
				}
		else {
			system("cls");
			break;
		}
		}


for (i=0; i<m; i++)
{
  cout<<"Enter Student Name "<<i+1<<" : ";
  cin>>e[i].name;
  cout<<endl;
  cout<<"Enter SR-CODE of the Student "<<i+1<<" : ";
  cin>>e[i].srcode;  
  cout<<endl; 
  cout<<"Enter Subject being taken: ";
  cin>>e[i].subj;
  cout<<endl;
  cout<<"Enter who is the Professor of the Subject: ";
  cin>>e[i].prof;
  cout<<endl;
  cout<<"Enter the alloted time for the subject: ";
  cin>>e[i].time;
    

}
system("cls");

do
{

cout<<"Enter SR-CODE to view details: ";
cin>>x;
for (i=0;i<m;i++){

if (x==e[i].srcode)
{
	cout<<"NAME: "<<e[i].name<<endl;
	cout<<"Subject code: "<<e[i].subj<<endl;
	cout<<"Professor: "<<e[i].prof<<endl;
	cout<<"Time: "<<e[i].time<<endl;
	temp=1;
	break;
}
}
if (x!=e[i].srcode)
{
	cout<<"The student does not exist"<<endl;
}


choice();
}
while (back=='Y'||back=='y');
cout<<"Thank you!";
return 0;
}

