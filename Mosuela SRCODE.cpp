#include <iostream>
using namespace std;
char back;
struct Node {
	string name;
	string srcode;
	string subj;
	string prof;
	string time;
    Node* next;
};

Node* head = NULL;

void insert_node(string name, string srcode, string subj, string prof, string time) {
    Node* j = new Node();
    j->name = name;
    j->srcode = srcode;
    j->subj = subj;
    j->prof = prof;
    j->time = time;
    j->next = head;
    head = j;
}

void display_details(string srcode) {
    Node* current = head;
    while (current != NULL) {
        if (current->srcode == srcode) {
            cout << "Name: " << current->name << endl;
            cout << "SR-CODE: " << current->srcode << endl;
            cout << "SUBJECT: " << current->subj << endl;
            cout << "PROFESSOR: " << current->prof << endl;
            cout << "SCHEDULE: " << current->time << endl;
            return;
        }
        current = current->next;
    }
    cout << "Student with SR-CODE " << srcode << " not found." << endl;
}

void show_nsr() {
    Node* current = head;
    while (current != NULL) {
        cout << "Name: " << current->name << endl;
        cout << "SR-CODE: " << current->srcode << endl<<endl;
        current = current->next;
    }
}

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


int main() {
    int m,i;
    string name, srcode, subj, prof, time,x;

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
  cin>>name;
  cout<<endl;
  cout<<"Enter SR-CODE of the Student "<<i+1<<" : ";
  cin>>srcode;  
  cout<<endl; 
  cout<<"Enter Subject being taken: ";
  cin>>subj;
  cout<<endl;
  cout<<"Enter who is the Professor of the Subject: ";
  cin>>prof;
  cout<<endl;
  cout<<"Enter the alloted time for the subject: ";
  cin>>time;
insert_node(name, srcode, subj, prof, time);
    }

    system("CLS");
    cout << "Available Name + SRCODE:\n\n";
 
    


    do{
   show_nsr();
        cout << "Enter the SR-Code of the student to view complete details: ";
        cin >> x;
        cout << endl;
        display_details(x);

choice();
    }
	while (back == 'y' || back == 'Y');
    
cout<<"Thank you!";

    return 0;
}
