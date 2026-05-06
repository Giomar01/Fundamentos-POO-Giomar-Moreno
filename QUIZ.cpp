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

class Discount : public Product{
    
    private:
    float discount;
    
    public:
    float price_disc;
    void setDiscount(float des){
        this->discount= des;
    }
    float getDiscount(){
        return discount;
    }
   
};

int main(){
    
    Product product1;
    Discount product_desc;
    int total;
    float desc;
    product1.setName("Iphone");
    product1.getName();
    product1.setPrice(2800000);
    product1.getPrice();
    product1.setAmount(1);
    product1.getAmount();
 total= product1.getPrice() *  product1.getAmount();
    std::cout << "Nombre: " << product1.getName() << std::endl;
    std::cout << "Precio: " << product1.getPrice() << std::endl;
    std::cout << "Cantidad: " << product1.getAmount() << std::endl;
    std::cout << "Total sin descuento: " << total << std::endl;

    product_desc.setDiscount(0.20);
    product_desc.getDiscount();

    desc= total* product_desc.getDiscount();
    std::cout << "Precio con descuento: " << desc << std::endl;

    return 0;
}