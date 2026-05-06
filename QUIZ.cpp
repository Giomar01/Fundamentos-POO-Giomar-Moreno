#include <iostream>
#include <string>

class Product{
    private:
    std::string name;
    int price;
    int amount;
    
    public:

    void setName(std::string n){
        this->name=n;
    }
    std::string getName(){
        return name;
    }
   void setPrice(int p){
        this->price=p;
    }
    int getPrice(){
        return price;
    }
    void setAmount(int a){
        this->amount=a;
    }
    int getAmount(){
        return amount;
    } 
};