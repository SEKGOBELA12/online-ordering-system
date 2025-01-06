#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class user{
public :
    string name,password,address,cellno,pass,username;
    bool isTrue = true;
    int count = 0;
    void login();
    void verify();

};
void user:: login(){
    cout<<"ENTER YOUR NAME"<<endl;
    cin>>name;
    cout<<"ENTER YOUR PASSWORD"<<endl;
    cin>>password;
    cout<<"ENTER YOUR ADDRESS"<<endl;
    cin>>address;
    cout<<"ENTER YOUR CELL NUMBER"<<endl;
    cin>>cellno;

ofstream myfile("register.txt", ios::app);
myfile<<name<<' '<<password<<' '<<address<<' '<<cellno<<' '<<endl;
myfile.close();
}
void user:: verify(){
    cout<<"ENTER YOUR NAME"<<endl;
    cin>>username;
    cout<<"ENTER YOUR PASSWORD"<<endl;
    cin>>pass;
    ifstream myfile("register.txt");

while(myfile>>name>>password){
    if(name==username && password == pass){
        count = 1;
    }
}

if(count ==1){
    cout<<"WELCOME TO ONLINE ORDERING SYSTEMS"<<endl;
}else{
    cout<<"WRONG PASSWORD"<<endl;
    verify();
    }
}

class food{
public :
    string amount, receipt;
    int option;
    bool isTrue = true;
    int meal,many;
    double dunkedwings = 58.00;
    double zingerwings = 33.00;
    double happymeal = 60.00;
    double macfeast = 50.00;
    double fullchicken = 100.00;
    double halfchicken = 50.00;
    double amountofsaledunkedwings= 0;
    double amountofsalezingerwings= 0;
    double amountofsalehappymeal= 0;
    double amountofsalemacfeast= 0;
    double amountofsalefullchicken= 0;
    double amountofsalehalfchicken= 0;
    double total = 0;
    double cash;

    void placeorder();
    void kfc();
    void nandos();
    void macdonald();

};

void food:: placeorder(){
do{
    cout<<"CHOOSE A RESTAURANT "<<endl;
    cout<<"1. KFC"<<endl;
    cout<<"2. NANDOS"<<endl;
    cout<<"3. MACDONALD"<<endl;
    cout<<"4. EXIT"<<endl;
    cin>>option;

switch(option){
case 1:
     kfc();
    break;
case 2:
     nandos();
    break;
case 3:
     macdonald();
    break;
case 4:
    cout<<"your exited"<<endl;
    break;
    }
  }while(isTrue =! false);
}

void food:: kfc(){
    cout<<"Food menu"<<endl;
    cout<<"1. dunked wings .....R 58.00"<<endl;
    cout<<"2. zinger wings ........R 33.00"<<endl;
    cout<<"please choose a meal: ";
    cin>> meal;

if(meal >=3){
    cout<<"please select again"<<endl;
    kfc();
}else{
    cout<<"how many: ";
    cin>>many;

switch(meal){
    case 1:
    cout<<"dunked wings.....R 58.00 x "<<many<< "= R " <<many * dunkedwings<<endl;;
    amountofsaledunkedwings = many * dunkedwings;
    break;
    case 2:
    cout<<"zinger wings.....R 33.00 x "<<many<< "= R " <<many * zingerwings<<endl;;
    amountofsalezingerwings = many * zingerwings;
    break;
}

    total = 0;
    total = total + amountofsaledunkedwings + amountofsalezingerwings;
    cout<<"TOTAL AMOUNT IS = R "<<total<<endl;
    cout<<"make a payment = R ";
    cin>>cash;
if(cash <total){
    cout<<"cannot processes a order"<<endl;
    cout<<"Please try again"<<endl;
}else{
    cout<<"change = R "<<cash - total<<endl;
    cout<<"ENJOY YOUR MEAL"<<endl;
    cout<<"print receipt"<<receipt<<endl;
    }
  }
}

void food:: nandos(){
    cout<<"Food menu"<<endl;
    cout<<"1. happymeal .....R 60.00"<<endl;
    cout<<"2. macfeast ........R 50.00"<<endl;
    cout<<"please choose a meal: ";
    cin>> meal;
if(meal>=3){
    cout<<"please select again"<<endl;
    nandos();
}else{
    cout<<"how many: ";
    cin>>many;

switch(meal){
    case 1:
    cout<<"happymeal.....R 60.00 x "<<many<< "= R " <<many * happymeal<<endl;;
    amountofsalehappymeal = many * happymeal;
    break;
    case 2:
    cout<<"macfeast.....R 50.00 x "<<many<< "= R " <<many * macfeast<<endl;;
    amountofsalemacfeast = many * macfeast;
    break;
}
    total = 0;
    total = total + amountofsalehappymeal + amountofsalemacfeast;
    cout<<"TOTAL AMOUNT IS = R "<<total<<endl;
    cout<<"make a payment = R ";
    cin>>cash;
if(cash <total){
    cout<<"cannot processes a order"<<endl;
    cout<<"Please try again"<<endl;
}else{
    cout<<"change = R "<<cash - total<<endl;
    cout<<"ENJOY YOUR MEAL"<<endl;
    cout<<"print receipt"<<receipt<<endl;
    }
  }
}

void food:: macdonald(){
    cout<<"Food menu"<<endl;
    cout<<"1. fullchicken .....R 100.00"<<endl;
    cout<<"2. halfchicken ........R 50.00"<<endl;
    cout<<"please choose a meal: ";
    cin>> meal;
if(meal>=3){
    cout<<"please select again"<<endl;
    macdonald();
}else{
    cout<<"how many: ";
    cin>>many;

switch(meal){
    case 1:
    cout<<"fullchicken.....R 100.00 x "<<many<< "= R " <<many * fullchicken<<endl;;
    amountofsalefullchicken = many * fullchicken;
    break;
    case 2:
    cout<<"halfchicken.....R 50.00 x "<<many<< "= R " <<many * halfchicken<<endl;;
    amountofsalehalfchicken = many * halfchicken;
    break;
}
    total = 0;
    total = total + amountofsalefullchicken + amountofsalehalfchicken;
    cout<<"TOTAL AMOUNT IS = R "<<total<<endl;
    cout<<"make a payment = R ";
    cin>>cash;
if(cash <total){
    cout<<"cannot processes a order"<<endl;
    cout<<"Please try again"<<endl;
}else{
    cout<<"change = R "<<cash - total<<endl;
    cout<<"ENJOY YOUR MEAL"<<endl;
    }
  }
}

int main()
{
    user store;
    food order;
    int option;
    bool isTrue = true;
do{
    cout<<"WELCOME TO ONLINE ORDERING SYSTEM"<<endl;
    cout<<"1. login"<<endl;
    cout<<"2. sign up"<<endl;
    cin>>option;
switch(option){
    case 1:
    store.verify();
    order.placeorder();
    break;
    case 2:
    store.login();
    break;
    }
  }while(isTrue = !false);

}
