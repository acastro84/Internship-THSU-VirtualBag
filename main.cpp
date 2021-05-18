#include<C:\Users\Armando\Desktop\ACC\Semester IV\\Practicum - CIS, General (08519)\\Iris Program\\FunctionDefinitions.h>
/******************************************************
* This program stores items entered from a user into a*
* stack. This stack acts as a virtual "bag". 		  *
*													  *
*		Options include:		                      *
*       1. Add an item to the stack                   *
*       2. Remove the last item in a list.            *
*       3. Look at the last item in the list.         *
*		4. Check if the stack is empty.cout if True   *
*		5. Display the contents of the stack/show top.*
*		6. Exit the program. 						  *
* This repeats until the user chooses the    		  *
* option to quit.  (6)                          	  *
******************************************************/


int main()
{
    Stack st;
    Item myitem;
    int choice = 0;
    int sent = 0;
    
    
    cout << "This program stores values for an expandable menu within" << endl;
    cout << "The THSU website.\n\n" << endl;
    
    cout << "The user will use this program to convert menu options to a queued stack of strings. \n" << endl;
    cout << "1-The user enters a value for the name of the menu item."<< endl;
    cout << "2-The user then enters the value that goes with this variable name.\n" << endl;
    cout << "The entries are saved into a stack of objects that can be displayed " << endl; 
	cout << "by selecting 5 when you have finished.\n"  << endl;
    cout << "Please note that options 2, 3, and 4 were intentionally left out in this menu. ";
	cout << "These options are left in for the developers to test data. \n" << endl;
	cout << "For the sake of testing, please only use 1, 5 or 6 until the interface is changed. \n" << endl;
	
	 
    /* This is the original stack menu.  This menu includes options to add, remove, 
    Look at the last item, and display the contents of the stack. All function definitions
	are included in the header file. For the purposes of this demo, 
	I will only include options 1, 5 and 6.  
    
    cout << "This program has the following options:" << endl;
    cout << "1. Add an item." << endl;
    cout << "2. Remove the last item in the list." << endl;
    cout << "3. Look at the last item in the list." << endl;
    cout << "4. Check if the stack is empty." << endl;
    cout << "5. Display the contents of the stack." << endl;
    cout << "6. Quit progam." << endl;;
    cout << "Please enter a number from 1-6:";
    cin >> choice;
    cout << "\n";
    */
    
    cout << "This program has the following options:" << endl;
    cout << "1. Add an item." << endl;
    cout << "5. Display the contents of the stack." << endl;
    cout << "6. Quit progam." << endl;;
    cout << "Please enter 1, 5 or 6:";
    cin >> choice;
    cout << "\n";
    
    while(sent < 1)  	// Keep the menu based options going.  
    {
    	switch(choice)
    	{
    		case 1:  //adding an item
			{
				   	
    			string name = "";
    			string color = "";
    			cout << "Please enter the name of the menu item as it appears on the THSU website:" << endl;
    			getline(cin >> ws, name);
    			cout << "Please enter the contents of the menu item as a sample user would input it: " << endl;
    			getline(cin >> ws, color);
    			myitem.setcolor(color);
    			myitem.setname(name);
    			/*if(st.isEmpty())
        			cout<<"Stack is empty\n";  This is for troubleshoooting and data checking puroposes*/
    			cout<<"\nAdding item "<<myitem.getname()<<" "<<myitem.getcolor()<<endl;
    			st.push(myitem);
    			cout<<"Item added to stack...\n\n";
    			cout << "1. Add an item." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter 1, 5 or 6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		case 2:			//Removing an item  (unused)
    		{
				cout << "Removing last item entered. \n\n" << endl;
    			st.pop();
    			cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		
    		case 3:  			//Look at last item in stack (unused)
    		{
    			cout<<"Item at top of stack is: "<<st.peek().getname()<<" "<<st.peek().getcolor()<<endl<<endl;
    			cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:" << endl;
    			cin >> choice;
    			cout << "\n\n";
    			break;
    		}
    		
			case 4:		//Check if the stack is empty (Unused) 
			{
				
				if(st.isEmpty())
        			cout<<"Stack is empty\n";
        		else
					cout << "The stack is not empty. \n\n";	
    			
				cout << "Please enter your choice 1 - 6:" << endl;
				cout << "1. Add an item." << endl;
    			cout << "2. Remove the last item in the list." << endl;
    			cout << "3. Look at the last item in the list." << endl;
    			cout << "4. Check if the stack is empty." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter a number from 1-6:";
    			cin >> choice;
    			cout << "\n\n";
				break;	
			}
			case 5:		//Display the contents of the stack. 
			{
    			st.display();
				cout << "\n1. Add an item." << endl;
    			cout << "5. Display the contents of the stack." << endl;
    			cout << "6. Quit progam." << endl;;
    			cout << "Please enter 1, 5 or 6";
    			cin >> choice;
    			cout << "\n\n";
    			break;
			}
			
			case 6:			//Quit program
			{
				cout << "Exiting program.";
				sent =1;
				break;	
    		}
    	}	
    		
	}
    


}
