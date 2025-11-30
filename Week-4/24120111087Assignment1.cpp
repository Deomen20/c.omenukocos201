#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string fullname;
    double scholarshippercent;
    string admissionstatus;
    int jambscore;
    double waecaverage;
    int hostel;
   int hostelfee; 
    string hostelname;
    int age;
    bool isfirstchoice;
    bool isanydisciplinaryrecord;
    int tuition = 1500000;
    int grant ;


    cout << "Enter your full name : " ;
    cin>> fullname;

    cout << "Enter your jamb score : " ;
    cin>> jambscore;

   cout << "Enter your waec average : " ;
    cin>> waecaverage;

    cout << "Enter your age : " ;
    cin>> age;

    cout << "First Choice PAU?,Enter 1 for true and 0 for false: " ;
    cin>> isfirstchoice;

    cout << "Any disciplinary record?,Enter 1 for true and 0 for false: " ;
    cin>> isanydisciplinaryrecord;

    cout << "Enter your hostel preference from 1-5 :" << endl
         <<" 1 - Main Hostel(#180,000)" << endl
         <<"2 - Annex Hostel(#120,000)"<< endl
         <<"3 - Day student (#0)"<<endl;

    cin >> hostel;
    if (hostel != 1 && hostel != 2 && hostel != 3){
        hostelname= "Invalid input";
    }else if (hostel ==1 ){
        hostelname = "Main Hostel";
        hostelfee = 180000;
    }else if (hostel ==2 ){
        hostelname = "Annex Hostel"; 
        hostelfee = 120000;
    }else if (hostel ==3 ){
        hostelname = "Day student";
    }
    

 
    if (((jambscore >= 220) && (waecaverage >= 60)) || ((jambscore >= 200) && (waecaverage >= 70))){
         admissionstatus = "Accept";
    } else if ((isanydisciplinaryrecord == true) || (age < 15)){
        admissionstatus = "False ";
    } else {
        admissionstatus = "Pending";
    }

if ( admissionstatus == "Accept"){
   if (jambscore >= 320 ){
        scholarshippercent = 0.30 ;
    }
    else if (jambscore >= 280){
        scholarshippercent = 0.20;
    }
    else if (jambscore >= 240){
        scholarshippercent = 0.10;
    }
    else {
        scholarshippercent = 0.0;
    }
    
    if (waecaverage >= 80 && isfirstchoice == true){
        scholarshippercent += 0.05;
    }
        
    }


    string hostelassignment ;
    if ((admissionstatus == "Accept") && (isanydisciplinaryrecord == false)){
        hostelname;
        hostelfee;


    }else if (admissionstatus == "Pending"){
        hostelassignment = "On Hold";
    }else if (admissionstatus == "Rejected"){
        hostelassignment = "Not Applicable";
    }

    
     srand(time(0));
     int r;
     r = rand() % 101;
     bool isPrime = (r==2 || r==3 || r==5 || r==7 || r==11 || r==13 || r==17 ||
                     r==19 || r==23 || r==29 || r==31 || r==37 || r==41 || 
                    r==43 || r==47 || r==53 || r==59 || r==61 || r==67 || 
                    r==71 || r==73 || r==79 || r==83 || r==89 || r==97);
    if(isPrime && admissionstatus =="Admitted"){
        int grant = 50000;
    }

    int tuitionafterscholarship = tuition - (scholarshippercent * tuition);
    int totalpayable = tuitionafterscholarship + hostelfee - grant;

    
    if (totalpayable < 0){
        totalpayable = 0;
    }
    




    cout << "Name: " << fullname << endl;
    cout << "Admission Status: " << admissionstatus << endl;
    cout << "Scholarship: " << scholarshippercent  * 100 << "%\n";
    cout << "Tuition After Scholarship: ₦" << tuitionafterscholarship << endl;
    cout << "Hostel: " << hostelname << " Fee: ₦" << hostelfee << endl;
    cout << "Random draw: " << r 
         << "   Merit Grant: ₦" << grant << endl;
    cout << "TOTAL PAYABLE: ₦" << totalpayable << endl;

  
return 0;
 }