#include <iostream>
using namespace std;
char back;
void insert_node(string name, string srcode, string subj, string prof, string time); 
void view_details(string srcode);
void show_nsr();


class Node 
{
	public:
	string name;
	string srcode;
	string subj;
	string prof;
	string time;
    Node* next;
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
  	cout<<endl;
	insert_node(name, srcode, subj, prof, time);
    }

    system("CLS");
    cout << "Available Name + SRCODE:\n\n";

    do{
   show_nsr();
    cout << "Enter the SR-Code of the student to view complete details: ";
    cin >> x;
    cout << endl;
    view_details(x);
	choice();
    }
	while (back == 'y' || back == 'Y');
    
	cout<<"Thank you!";

    return 0;
}

Node* head = NULL;

void insert_node(string name, string srcode, string subj, string prof, string time) 
{
    Node* new_node = new Node();
    new_node->name = name;
    new_node->srcode = srcode;
    new_node->subj = subj;
    new_node->prof = prof;
    new_node->time = time;
    new_node->next = head;
    head = new_node;
}

void view_details(string srcode)
 {
    Node* current = head;
    while (current != NULL) 
	{
    if (current->srcode == srcode) 
	{
    cout << "Name: " << current->name << endl;
    cout << "SR-CODE: " << current->srcode << endl;
    cout << "Subject: " << current->subj << endl;
    cout << "Professor: " << current->prof << endl;
    cout << "Time: " << current->time << endl;
    return;
    }
        current = current->next;
    }
    cout << "The SR-CODE: "<<srcode<<" is not found in your list.\n";
}

void show_nsr() 
{
    Node* current = head;
    while (current != NULL) {
    cout << "Name: " << current->name << endl;
    cout << "SR-CODE: " << current->srcode << endl<<endl;
    current = current->next;
    }
}



