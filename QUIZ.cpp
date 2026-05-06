#include <iostream>
#include <string>

class Product{
    private:
    std::string name;
    int price;
    int amount;
    
    protected:
    int total;

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
    int total(int c, int d){
        return c*d;
    }
};

class Discount : public Product{
    
    private:
    int discount;
    
    public:
    int price_disc;
    void setDiscount(int des){
        this->discount= des;
    }
    int getDiscount(){
        return discount;
    }
    int price_disc(int total, int discount){
        return total*discount;
    }
};

int main(){
    
    Product product1;
    Discount product_desc;
    product1.setName("Iphone");
    product1.getName();
    std::cout << "Nombre: " <<
}