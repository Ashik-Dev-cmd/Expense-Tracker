#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int x;
string categ_n;

void del()
{
    cin>>categ_n;
    fstream file;
    file.open(categ_n+".txt", ios::out);
    if(file.is_open())
    {
        file<<endl;
    }
    cout<<"The category "+categ_n+" has been deleted."<<endl;
}
void start()
{
cout<<"\nWHAT DO YOU WANT?\n\n";
cout<<"1. Create a category\n\n";
cout<<"2. Input expenses\n\n";
cout<<"3. See an individual category\n\n";
cout<<"4. Delete an individual category\n\n";
cout<<"5. Exit"<<endl;
cout<<endl;
cout<<"Choose an option (1 - 5): ";
cin>>x;


}


void append()
{
    //cin>>categ_n;
    string text;

    cin>>text;
    fstream file;
    file.open(categ_n+".txt", ios::app);
    if (file.is_open())

    {
        file<<"\n"+text;
        file.close();
    }
}

void go_back()
{
    string h;
    cout<<"\nPress y to go back\n";
        cin>>h;
        if(h=="y")
        {
            start();
        }
}


void see()
{
    string check;
    string line;
    cout<<"Write the name of the category: "<<endl;
    cin>>check;
    cout<<"\n\n\n-----------------------------------------Expenses from the category:  " +check+" --------------------------------------------\n";
    ifstream file(check+".txt");
    if(file.is_open())
    {
        while(getline(file,line))
        {
            cout<<line<<"\n";
        }
        file.close();
    }else{
    cout<<"File could not open!";
    }
    go_back();

}


void categ()
{

    cin>>categ_n;
    cout<<"\n\nA category named "<<categ_n<<" has been created. But if you typed an existing one that is not going to be created!\n";
    fstream file;
    file.open(categ_n+".txt", ios::out);


}
void x_function(int x)
{

for(int i=0; i=500; i++)
{
    if(x==1)
    {
        cout<<"Write a name for your new category(Don't use any space!!!): ";
    categ();
    cout<<"\n\nWanna go back?(press y = yes  press c = create another new category  press e = exit )\n";

    string x;
    cin>>x;
    if(x == "y")
    {
        start();


    }
    else if(x == "c")
    {
        cout<<"Type a name for a new category: \n";
        categ();
        go_back();
    }
    else if(x == "e")
    {
        break;
    }
    else{
    cout<<"Wrong option! Select the right one.\n";
    cout<<"Wanna go back?(press 1 = yes  press 2 = create another new category  press 3 = exit )\n";
    cin>>x;
    }
    }
    else if(x==2)
    {
        cout<<"Choose the category in which you want to input expense: ";
        cin>>categ_n;
        append();
        cout<<"The information has been added successfully!\n";
        go_back();
        }
    else if(x==3)
    {
        see();
        break;
    }else if(x==4)
    {
        cout<<"Choose the category you want to delete ";
        del();
        go_back();
    }
    else if(x==5)
    {
    break;
    }
    else{
    cout<<"Wrong option! Select the right one.\n";
    cin>>x;
    }


}
}

int main()
{
start();
x_function(x);

getch();
}
