#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string full_name;
    bool isPaustudent;
    int coursechoice ;
    int locationchoice;

    cout<< " Enter Your Student Full name : " ;
    cin >> full_name ;

    cout << "Are you a Pau student?, Enter 1 for true and 0 for false: ";
    cin >> isPaustudent;
    cout << "You entered: " << isPaustudent << endl
         << "The Courses available currently are : "<< endl
         << " 1 - Photography "<< endl 
         << " 2 - Painting "<< endl 
         << " 3 - Fish Farming "<< endl 
         << " 4 - Baking"<< endl 
         << " 5 - Public Speaking "<< endl ;


    string cname;
    int day = 0;
    int reg =0;
    int cost = 0;

    cout << "Enter The course of your choice from 1-5 " << endl;
    cin >> coursechoice ;
    if (coursechoice != 1 && coursechoice != 2 && coursechoice != 3 && coursechoice != 4 && coursechoice != 5){
        
        cout << "Invalid Input !!"<< endl ;

    }else if (coursechoice == 1){
         cname = "Photography";
         day = 3;
         reg = 10000;
     
    }else if (coursechoice == 2){
         cname = "Painting";
         day = 4;
         reg = 8000;
        
    }else if (coursechoice == 3){
        cname = "Fish farming" ;
        day = 7;
        reg = 15000;
       
    }else if (coursechoice == 4){
        day = 3;
        reg = 13000;
        cname = "Baking" ;

        
    }else if (coursechoice == 5){
         cname = "Public Speaking " ;
         day = 2;
         reg = 5000;
       
    }
    


    cout << "The Accommodation location available currently are : "<< endl
         << " 1 - Camp House A "<< endl 
         << " 2 - Camp House B "<< endl
         << " 3 - Camp House C "<< endl
         << " 4 - Camp House D "<< endl
         << " 5 - Camp House E "<< endl ;

    

  cout << "Enter The location of your choice from 1-5 " << endl;
  cin>> locationchoice;
 string lhouse ;
 int lodgedaycost;
    if (locationchoice != 1 && locationchoice  != 2 && locationchoice  != 3 && locationchoice  != 4 && locationchoice  != 5){
        
        cout << "Invalid Input !!"<< endl ;
 } 
  else if(locationchoice == 1){

     lhouse = "Camp House A";
     lodgedaycost = 10000;

  } else if(locationchoice == 2){

     lhouse = "Camp House B";
     lodgedaycost = 2500;

  } else if(locationchoice == 3){

     lhouse = "Camp House C";
     lodgedaycost = 5000;

  } else if(locationchoice == 4){

     lhouse = "Camp House D";
     lodgedaycost = 13000;

  } else if(locationchoice == 5){

     lhouse = "Camp House E";
     lodgedaycost = 10000;

  } 


   int discount;
   int totallodgecost;
   int promo = 500;
   int lodgecost = lodgedaycost * day;   
   
    if (isPaustudent && (locationchoice != 1 || locationchoice  != 2)){
        discount = ((5 * lodgecost) / 100);
   } else if ((day > 5) || (reg > 12000) ){
    discount  = ((3 * lodgecost) / 100);
   }

   int newlodgecost = lodgecost - discount;
   
   srand(time(0));
   int r;
   r = rand() % 101;
   if (r ==7 || r ==77){
    totallodgecost = newlodgecost + promo;
   }
   
   totallodgecost = newlodgecost + promo;
  

cout <<"Name :"<<full_name<<endl
     <<"Course: "<< cname << endl
     <<"Pau student : "<< (isPaustudent ? "YES" : "NO")<<endl
     <<"Number of Days :" << day << endl
     <<"Registration fee :" << reg << endl
     <<"Location :" << lhouse<< endl
     <<"Lodging fee per day :"<<lodgedaycost<< endl
     <<"Loging cost :"<< newlodgecost << endl
     <<"Random draw :" << r<< endl
     <<"Promo applied :" << promo << endl
     <<"TOTAL :"<< totallodgecost << endl;

      return 0;
}