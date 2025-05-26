#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    virtual void startEngine()=0;
    virtual void shiftGear(int gear)=0;
    virtual void accelerate()=0;
    virtual void stopEngine()=0;
    virtual ~car(){} // destructor

};
class SportsCar:public car{
    public:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
    SportsCar(string b, string n){
        this->brand=b;
        this->model=n;
        isEngineOn=false;
        currentSpeed=0;
        currentGear=0;
    }
    void startEngine(){
        isEngineOn=true;
        cout<<brand<<" "<<model<<": Engine starts with a roar!"<<endl;


    }
    void shiftGear(int gear){
        if(!isEngineOn){
            cout<<brand<<" "<<model<<":Engine is off ! Cannot shift gear"<<endl;
            return;
        }
        currentGear=gear;
         cout<<brand<<" "<<model<<":Shift to gear"<<currentGear<<endl;
    }
    void accelerate(){

    }
    void brake(){

    }
    void stopEngine(){

    }

};
int main