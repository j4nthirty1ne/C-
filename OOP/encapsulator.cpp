#include <iostream>
#include <vector>

using namespace std;

class Product{
    private:
        int id;
        string name;
        double price;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setPrice(double price) {
            this->price = price;
        }
        double getPrice(){
            return this->price;
        }
        void setId(int id) {
            this->id = id;
        }
        int getId() { 
            return this->id;
        }
};

class Order{
    private:
        int id;
        string name;
        string remark;
        vector<Product> products;
    public:
        void setId(int id) {
            this->id = id;
        }
        int getId() {
            return id;
        }
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setRemark(string remark) {
            this->remark = remark;
        }
        string getRemark() {
            return remark;
        }
        void addProduct(Product product) {
            products.push_back(product);
        }
        vector<Product> getProducts(){
            return products;
        }
};

int main ()
{
    system ("cls");
    Product p1;
    p1.setId(404);
    cout << "Product ID: " << p1.getId() << endl;
    p1.setName("Laptop");
    cout << "Product Name: " << p1.getName() << endl;
    p1.setPrice(999.99);
    cout << "Product Price: $" << p1.getPrice() << endl;
    
    Order o1;
    o1.setId(1001);
    o1.setName("Order 1");
    o1.setRemark("Special Order");
    o1.addProduct(p1);

    cout << " [+] list all product " << endl;
    for (Product p: o1.getProducts())
    {
        cout << p.getId() << endl;
        cout << p.getName() << endl;
        cout << p.getPrice() << endl;

        cout << o1.getId() <<endl;
        cout << o1.getName() << endl;
        cout << o1.getRemark() << endl;
    }
    return 0;
}