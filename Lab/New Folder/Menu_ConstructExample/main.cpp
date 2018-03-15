/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on March 15, 2016, 10:40 AM
 * Purpose: Construct
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Initialize Variables
    cout<<"choose from the following Menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
    cin>>choice;
    
    //Process/Map input to output
    if(choice>='1'&&choice<='4'){
        switch(choice){
            case'1':{
                cout<<"Independent-IF Example"<<endl;
                //Initialize Variables
                cout<<"This program calculates your payCheck"<<endl;
                cout<<"Input the hour you worked for the week "<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //if you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hour Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = %"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
            }
            switch(choice){
            case'2':{
                cout<<"Dependent-IfExample"<<endl;
                //Declare variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your payCheck"<<endl;
                cout<<"Input the hour you worked for the week "<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //if you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hour Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = %"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            switch(choice){
            case'3':{
         //Declare variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your payCheck"<<endl;
                cout<<"Input the hour you worked for the week "<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //if you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hour Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = %"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
            }
            switch(choice){
            case'4':{
                cout<<"Switch-Case Example"<<endl;
                //Declare variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your payCheck"<<endl;
                cout<<"Input the hour you worked for the week "<<endl;
                cout<<"and your Pay Rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //if you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hour Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = %"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
                
            }
    }else;{
        cout<<"Exiting Menu"<<endl;
    }
    
    
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}

