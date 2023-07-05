#include<iostream>
using namespace std;

void addition()
{
    int n, k=0;
	double number;
    double total=0;
    cout<<"\n How many numbers you want to Add:- ";
    cin>>n;
    cout<<"\n Please enter "<<n<<" numbers one by one:- ";
    while(k<n)
    { 
        cin>>number;
        total=total+number;
        k=k+1;
    }
    cout<<" Sum of entered numbers is: "<<total;
}

void subtraction()
{
    int n, k=0;
    double number;
    double subtract=0;
    cout<<"\n How many numbers you want to Subtract: " ;
    cin>>n;
    cout<<"\n Please enter "<<n<<" numbers one by one: ";
    while(k<n)
    { 
        cin>>number;
        if(k!=0)
          {
           subtract=subtract-number;
          }
        else
          {
           subtract=number-subtract;
          }
        k=k+1;
    }
    cout<<"\n Subtracted value of entered numbers is: "<<subtract;
}

void multiplication()
{
    int n, k=0;
    double number;
    double multiply=1;
    cout<<"\n How many numbers you want to Multiply:- ";
    cin>>n;
    cout<<"\n Please enter "<<n<<" numbers one by one:- ";
    while(k<n)
    { 
        cin>>number;
        multiply=multiply*number;
        k=k+1;
    }
    cout<<"\n Multiplicated value of entered numbers is: "<<multiply;
}

void division()
{
    double n,d,c;
    cout<<"\n Please enter the value of numerator: ";
    cin>>n;
    
    cout<<"\n Please enter the value of denomenator: ";
    cin>>d;
    
    c = n/d;
    
    cout<<"\n Divided value of entered number is: "<<c;
}

void moduluss()
{
	int a,b,c;
	cout<<"\n PLease enter the value of 'a':  ";
	cin>>a;
	cout<<" PLease enter the value of 'b':  ";
	cin>>b;
	
	c= a%b;
	
	cout<<"\n Your remainder(modulus) is: "<<c;	
}

int calculator() 
{
    
    int number;
    char a=37;
      
    cout<<"\n Enter a number of your choice \n ";
    cout<<"Press '1' for '+' \n Press '2' for '-' \n Press '3' for '*' \n Press '4' for '/' \n Press '5' for '"<<a<<"'";
    
    cout<<"\n\n Enter your choice: ";
	cin>>number;

    switch (number)
    {
        case 1:
             addition();
             break;
        case 2:
             subtraction();
             break;
        case 3:
             multiplication();
             break;
        case 4:
             division();
             break;
        case 5:
		      moduluss(); 
			  break; 
			  
         default:
             cout<<" Error! Please enter correct operator ";
    }

    return 0;
}

int main()
{
	int n;
	char a=37;
	
	cout<<" ************************************************** \n";
	cout<<" **                                              ** \n";
	cout<<" **     Mini Project of Calculator using C++     ** \n";
	cout<<" **                                              ** \n";
	cout<<" ************************************************** \n";
	cout<<"\n Arithmetic Operators are used to perform mathematical calculations. ";
    cout<<"\n Arithmetic Operator: +, -, *, /, "<<a<<endl;
	
	do
	{
		calculator();

		cout<<"\n\n Do you want to perform more calculations? YES or NO \n";
		cout<<"\n Press '1' for YES ";
		cout<<"\n Press '2' for NO ";
		cout<<"\n Enter your choice: ";
		cin>>n;
    }
	while(n == 1);

    return 0; 
}
