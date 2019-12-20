void main()
{
 int choice,a,b;                                                           //declaring variables for input.
 cout<<"Enter the first integer:";
 cin>>a;
 cout<<"\nEnter the second integer:";
 cin>>b;
 cout<<"Enter the number corresponding to the operation you'd like to perform: \n1.Addition\n2.Subtraction\n3.Multiplication.\n";         
 cin>>choice;
 switch(choice)
 {
  case 1: cout<<"\nSum of the two numbers is: "<<a+b; 
          break;
  case 2: cout<<"\nDifference of the two numbers is: "<<a-b;
          break;
  case 3: cout<<"\nProduct of the two numbers is: "<<a*b;
          break;
  default: cout<<"\n  Invalid Choice!!.";
 }
 return;
 }
