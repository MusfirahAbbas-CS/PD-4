#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name , int matricMarks , int interMarks, int ecatMarks);
void compareMarks(string nameStd1 , int ecatMarksStd1 , string nameStd2 , int ecatMarksStd2);
main()
{
    string name;
    int matricMarks;
    int interMarks ;
    int ecatMarks  ;
    string nameStd1;
    int ecatMarksStd1;
    string nameStd2;
    int ecatMarksStd2; 
    float Aggregate1;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the matric marks:";
    cin>>matricMarks;
    cout<<"Enter the inter marks:";
    cin>>interMarks;
    cout<<"Enter the ecat marks:";
    cin>>ecatMarks; 
    printMenu();
    calculateAggregate(name,matricMarks,interMarks,ecatMarks);
    cout<<"Enter the name of student1: ";
    cin>>nameStd1;
    cout<<"Enter the ecat marks of student1: ";
    cin>>ecatMarksStd1;
    cout<<"Enter the name of student2: ";
    cin>>nameStd2;
    cout<<"Enter the ecat marks of student2: ";
    cin>>ecatMarksStd2;
    compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
}
void printMenu()
{
              cout<<" ########################################## "<<endl ;
              cout<<" UNIVERSITY  ADMISSION   MANAGEMENT  SYSTEM "<<endl;
              cout<<" ########################################## "<<endl;
}
void calculateAggregate(string name , int matricMarks , int interMarks, int ecatMarks)
{
   float Aggregate1 ;
   Aggregate1 = ((matricMarks*30)/1100) + ((interMarks*30)/570) + ((ecatMarks*40)/400);
   cout<<"Aggregate is: "<<Aggregate1<<endl;
}
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2)
{
  if(ecatMarksStd1>ecatMarksStd2)
  {
   cout<<"Roll number 1 is: "<<nameStd1<<endl;
  }
  else
  {
   cout<<"Roll number 1 is: "<<nameStd2<<endl;
  }
}
   


   
     



