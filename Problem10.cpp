//Take opponent run, current run, current over as input. Calculate current run rate and required run rate

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float op_run, cu_run, cu_over;
    float rem_run, rem_over;
    cout<<"Enter opponent run :"; cin>>op_run;
    cout<<"Enter current run :"; cin>>cu_run;
    cout<<"Enter current over: "; cin>>cu_over;
    rem_run= op_run- cu_run+1;
    rem_over= 50- cu_over;
    float cu_run_rate, req_run_rate;
    cu_run_rate= cu_run/cu_over;
    req_run_rate= rem_run/rem_over;
    printf("Current Run Rate: %.2f \nRequired Run Rate %.2f", cu_run_rate, req_run_rate);
    return 0;
}
