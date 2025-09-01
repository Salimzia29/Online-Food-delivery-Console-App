
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>

using namespace std;


class Main_M{
public:
    string MenuItems [25] = {"Chana Chaat", "Dahi Bhalla", "Spring Rolls", "Buffalo Wings", "Chicken Wings","Karahi", "Biryani", "Haleem", "Shahi Paneer", "Lasagna" ,  "Karahi + Naan + Raita","Biryani + Kabab + Salad","Haleem + Fried Onions + Kulcha","Shahi Paneer + Jeera Rice + Papad","Chana Chaat + Dahi Bhalla + Gol Gappay", "Chocolate Cake", "Brownies", "Gulab Jamun", "Kheer", "Kulfi","Mint Margarita", "Lemonade", "Lassi", "Cold Coffee", "Cardamom Chai"};
    
    int ItemsPrice[25]={120, 150, 200, 250, 300,500, 550, 300, 400, 450 ,700, 750, 550, 600, 400,200, 180, 100, 120, 150 ,100, 80, 90, 120, 70};
};


class Menu : virtual public Main_M{
public:
    
    string Menu_T [5]={ "Appetizers","Main Course", "Combo Meals", "Desserts", "Drinks"};
    int qty [25] = {0};
    int choice;
    char more;
        
    void orderAppetizers(){
        string Menu_A[5] = { "Chana Chaat", "Dahi Bhalla", "Spring Rolls", "Buffalo Wings", "Chicken Wings" };
        int Prices_A[5] = { 120, 150, 200, 250, 300 };
        char more = 'Y';
        while (more == 'Y' || more == 'y') {
            cout << "\n--- Appetizers ---\n";
            for (int i = 0; i < 5; i++)
                cout << i + 1 << ". " << Menu_A[i] << " - " << Prices_A[i] << " Rs\n";
            
            int option, q;
            while (true) {
                cout << "0. Back to Main Menu\n";
                cout << "\nEnter Item Number to Order: ";
                cin >> option;
                if (cin.fail() || option < 0 || option > 5) {
                    cout << "Invalid input. Enter a number from 0 to 5.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            if (option == 0) break;
            
            while (true) {
                cout << "Enter Quantity: ";
                cin >> q;
                if (cin.fail() || q <= 0) {
                    cout << "Invalid quantity. Must be a positive number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            
            qty[option - 1] += q;
            
            cout << "Order more Appetizers? (Y/N): ";
            cin >> more;
        }
    }
        
    
    void orderMainCourse(){
        
        string Menu_M[5] = { "Karahi", "Biryani", "Haleem", "Shahi Paneer ", "Lasagna" };
                int Prices_M[5] = { 500, 550, 300, 400, 450 };
        char more = 'Y';
        while(more == 'Y'||more =='y') {
                    cout << "\n--- Main Course ---\n";
                    for (int i = 0; i < 5; i++)
                        cout << i + 1 << ". " << Menu_M[i] << " - " << Prices_M[i] << " Rs\n";
                    int option, q;
            while (true) {
                cout << "0. Back to Main Menu\n";
                cout << "\nEnter Item Number to Order: ";
                cin >> option;
                if (cin.fail() || option < 0 || option > 5) {
                    cout << "Invalid input. Enter a number from 0 to 5.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            if (option == 0) break;
            
            while (true) {
                cout << "Enter Quantity: ";
                cin >> q;
                if (cin.fail() || q <= 0) {
                    cout << "Invalid quantity. Must be a positive number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
                    qty[5 + option - 1] += q;

                    cout << "Order more Main Course? (Y/N): ";
                    cin >> more;
                };
        
    }
    void orderComboMeals(){
        
        string Menu_C[5] = {
                    " Karahi + Naan + Raita",
                    " Biryani + Kabab + Salad",
                    "Haleem + Onions + Kulcha",
                    "Shahi Paneer + Jeera Rice + Papad",
                    "Chana Chaat + Dahi Bhalla + Gol Gappay"
                };
                int Prices_C[5] = { 700, 750, 550, 600, 400 };
        char more = 'Y';
        while(more == 'Y'||more =='y') {
            cout << "\n--- Combo Meals ---\n";
            for (int i = 0; i < 5; i++)
                cout << i + 1 << ". " << Menu_C[i] << " - " << Prices_C[i] << " Rs\n";
            
            int option , q;
            while (true) {
                cout << "0. Back to Main Menu\n";
                cout << "\nEnter Item Number to Order: ";
                cin >> option;
                if (cin.fail() || option < 0 || option > 5) {
                    cout << "Invalid input. Enter a number from 0 to 5.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            if (option == 0) break;
            
            while (true) {
                cout << "Enter Quantity: ";
                cin >> q;
                if (cin.fail() || q <= 0) {
                    cout << "Invalid quantity. Must be a positive number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            qty[10 + option - 1] += q;
            
            cout << "Order more Combo Meals? (Y/N): ";
            cin >> more;
        }
        
        
    }
    void orderDesserts(){
        
        string Menu_D[5] = { "Chocolate Cake", "Brownies", "Gulab Jamun", "Kheer", "Kulfi" };
                int Prices_D[5] = { 200, 180, 100, 120, 150 };
        char more = 'Y';
        while (more == 'Y' || more == 'y') {
                    cout << "\n--- Desserts ---\n";
                    for (int i = 0; i < 5; i++)
                        cout << i + 1 << ". " << Menu_D[i] << " - " << Prices_D[i] << " Rs\n";

                    int option, q;
            while (true) {
                cout << "0. Back to Main Menu\n";
                cout << "\nEnter Item Number to Order: ";
                cin >> option;
                if (cin.fail() || option < 0 || option > 5) {
                    cout << "Invalid input. Enter a number from 0 to 5.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            if (option == 0) break;
            
            while (true) {
                cout << "Enter Quantity: ";
                cin >> q;
                if (cin.fail() || q <= 0) {
                    cout << "Invalid quantity. Must be a positive number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
                    qty[15 + option - 1] += q;

                    cout << "Order more Desserts? (Y/N): ";
                    cin >> more;
                };
        
        
    }
    
    
    
    void orderDrinks(){
        string Menu_Dr[5] = { "Mint Margarita", "Lemonade", "Lassi", "Cold Coffee", "Cardamom Chai" };
               int Prices_Dr[5] = { 100, 80, 90, 120, 70 };
        char more = 'Y';
        while (more == 'Y' || more == 'y') {
                   cout << "\n--- Drinks ---\n";
                   for (int i = 0; i < 5; i++)
                       cout << i + 1 << ". " << Menu_Dr[i] << " - " << Prices_Dr[i] << " Rs\n";

                   int option, q;
            while (true) {
                cout << "0. Back to Main Menu\n";
                cout << "\nEnter Item Number to Order: ";
                cin >> option;
                if (cin.fail() || option < 0 || option > 5) {
                    cout << "Invalid input. Enter a number from 0 to 5.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
            if (option == 0) break;
            
            while (true) {
                cout << "Enter Quantity: ";
                cin >> q;
                if (cin.fail() || q <= 0) {
                    cout << "Invalid quantity. Must be a positive number.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                } else {
                    break;
                }
            }
                   qty[20 + option - 1] += q;

                   cout << "Order more Drinks? (Y/N): ";
                   cin >> more;
               };
        
        
        
        
    }
    void cart(){
        int optt;
        do{
            bool empty = true;
            
            cout << "\n------------------- Your Cart -------------------\n";
            cout << left << setw(25) << "Item"
            << setw(10) << "Quantity" << setw(10) << "Price"
            << setw(10) << "Total" << "\n";
            cout << "--------------------------------------------------\n";
            for(int i = 0;i<25;i++){
                if (qty[i] > 0) {
                    empty = false;
                    int total = qty[i] * ItemsPrice[i];
                    
                    cout<<left<<setw(25)<<MenuItems[i]<<setw(10)<<qty[i]<<setw(10)<<ItemsPrice[i]<<setw(10)<<total<<endl;
                    cout<<endl;
                }
            }
            
            cout<<"Press 0 For Main Menu: ";
            cin>>optt;
            cout<<endl;
            cout << "--------------------------------------------------\n";
        }while (optt !=0);
    }
    void clearCart() {
        char confirm;
        cout << "\nAre you sure you want to empty the cart? (Y/N): ";
        cin >> confirm;
        if (confirm == 'Y' || confirm == 'y') {
            for (int i = 0; i < 25; ++i) {
                qty[i] = 0;
            }
            cout << "\nCart has been emptied successfully.\n";
        } else {
            cout << "Cart was not emptied.\n";
        }
    }


};


class Admin : virtual public Main_M {
protected:
    string Username;
    int password;

public:
    Admin() {
        Username = "admin";
        password = 1234;
    }

    bool UserN(string user) {
        return (Username == user);
    }

    bool UserP(int code) {
        return (code == password);
    }

    void AdminPanel() {
        int choice;
        string InputUser;
        int InputPass;

        cout << "Enter Username: ";
        cin >> InputUser;

        while (true) {
            cout << "Enter Password: ";
            cin >> InputPass;
            if (cin.fail()) {
                cout << "Invalid input. Please enter a numeric password.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }
        cout << endl;

        if (UserN(InputUser) && UserP(InputPass)) {
            do {
                cout << "\n--- Admin Panel ---\n";
                cout << "1. Change Item Name\n";
                cout << "2. Change Item Price\n";
                cout << "3. View All Items\n";
                cout << "4. Exit Admin Panel\n";
                while (true) {
                    cout << "Enter your choice: ";
                    cin >> choice;
                    if (cin.fail() || choice < 1 || choice > 4) {
                        cout << "Invalid input. Enter 1 to 4.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    } else {
                        break;
                    }
                }

                switch (choice) {
                    case 1: changeItemName(); break;
                    case 2: changeItemPrice(); break;
                    case 3: viewAllItems(); break;
                    case 4: cout << "Exiting Admin Panel...\n"; break;
                    default: cout << "Invalid choice.\n";
                }
            } while (choice != 4);
        } else {
            cout << "Invalid admin credentials.\n\n";
        }
    }

    void viewAllItems() {
        cout << "\n--- All Menu Items ---\n";
        for (int i = 0; i < 25; i++) {
            cout << i + 1 << ". " << MenuItems[i] << " - " << ItemsPrice[i] << " Rs\n";
        }
    }

    void changeItemName() {
        int index;
        string newName;
        viewAllItems();
        cout << "\nEnter item number to rename (1–25): ";
        while (true) {
            cin >> index;
            if (cin.fail() || index < 1 || index > 25) {
                cout << "Invalid input. Please enter a number between 1 and 25: ";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }
        cin.ignore();
        cout << "Enter new name for item " << index << ": ";
        getline(cin, newName);
        MenuItems[index - 1] = newName;
        cout << "Item name updated successfully.\n";
    }

    void changeItemPrice() {
        int index;
        float newPrice;
        viewAllItems();
        cout << "\nEnter item number to change price (1–25): ";
        while (true) {
            cin >> index;
            if (cin.fail() || index < 1 || index > 25) {
                cout << "Invalid input. Please enter a number between 1 and 25: ";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }

        cout << "Enter new price for item " << index << ": ";
        while (true) {
            cin >> newPrice;
            if (cin.fail() || newPrice < 0) {
                cout << "Invalid input. Please enter a valid price: ";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }

        ItemsPrice[index - 1] = newPrice;
        cout << "Item price updated successfully.\n";
    }
};

class Payment:virtual public Menu{
public:
    
    int receipt(){
        return rand() % 10000 + 1000;
    }
  
    
    void Credit_c(){
        
        float subtotal = 0;
        float  gst = 0.05;
        int total = 0;
        string name;
        bool empty = true;
        
        bool cartEmpty = true;
        for (int i = 0; i < 25; ++i) {
            if (qty[i] > 0) {
                cartEmpty = false;
                break;
            }
        }
        
        if (cartEmpty) {
            cout << "\nCart is Empty." << endl;
            return;
        }
        time_t now = time(0);
        tm *ltm = localtime(&now);
        char time[80];
        strftime(time, sizeof(time),"%d-%m-%Y %I:%M %p", ltm);
        //Time Function
        
        
        
        cout<<"Enter Customer Name: ";
        getline(cin>>ws,name);
        
        cout<<"\n======================Receipt====================\n";
        cout<<"====================Dream Bakkery================\n";
        cout<<endl;
        cout<<"Customer Name : "<<name;
        cout<<"\nReceipt # "<<receipt();
        cout<<"\nOrder Time : "<<time<<endl;;
        cout << "\n------------------- Your Cart --------------------\n";
        cout << left << setw(20) << "Item"
        << setw(10) << "Quantity" << setw(10) << "Price"
        << setw(10) << "Total" << "\n";
        cout << "--------------------------------------------------\n";
        for(int i = 0;i<25;i++){
            if (qty[i] > 0) {
                 empty = false;
                
                total = qty[i] * ItemsPrice[i];
                subtotal += total;
                cout<<left<<setw(20)<<MenuItems[i]<<setw(10)<<qty[i]<<setw(10)<<ItemsPrice[i]<<setw(10)<<total<<endl;
                cout<<endl;
            }
        }
        
        float tax = 0;
        tax = subtotal * gst;
        float grandtotal = 0;
        grandtotal = tax + subtotal;
        cout<<endl;
        cout << "--------------------------------------------------\n";
        
        cout<<"\n SubTotal : "<<subtotal;
        cout<<"\nCredit Card Payment";
        cout<<"\n Gst 5 % : "<<tax;
        cout<<"\n GrandTotal : "<<grandtotal<<endl;
        cout << "---------------------------------------------------\n";
        
        cout<<"                   Thank You";
        cout<<endl;
        
        
    }
                
            
    void Cash_P(){
        
        float subtotal = 0;
        float  gst = 0.16;
        int total = 0;
        bool empty = true;
        bool cartEmpty = true;
        string name;
        
        
        
        for (int i = 0; i < 25; ++i) {
            if (qty[i] > 0) {
                cartEmpty = false;
                break;
            }
        }
        
        if (cartEmpty) {
            cout << "\nCart is Empty." << endl;
            cout<<endl;
            return;
        }
        
        
        time_t now = time(0);
        tm *ltm = localtime(&now);
        char time[80];
        strftime(time, sizeof(time),"%d-%m-%Y %I:%M %p", ltm);
        //Time Function
        
        
        
       
                    cout<<"Enter Customer Name: ";
                    getline(cin>>ws,name);
                    
                    cout<<"\n======================Receipt====================\n";
                    cout<<"====================Dream Bakkery================\n";
                    cout<<endl;
                    cout<<"Customer Name : "<<name;
                    cout<<"\nReceipt # "<<receipt();
                    cout<<"\nOrder Time : "<<time<<endl;;
                    cout << "\n------------------- Your Cart --------------------\n";
                    cout << left << setw(20) << "Item"
                    << setw(10) << "Quantity" << setw(10) << "Price"
                    << setw(10) << "Total" << "\n";
                    cout << "--------------------------------------------------\n";
        for(int i = 0;i<25;i++){
            if (qty[i] > 0) {
                empty = false;
                total = qty[i] * ItemsPrice[i];
                subtotal += total;
                cout<<left<<setw(20)<<MenuItems[i]<<setw(10)<<qty[i]<<setw(10)<<ItemsPrice[i]<<setw(10)<<total<<endl;
                cout<<endl;
            }
        }
                    
                    float tax = 0;
                    tax = subtotal * gst;
                    float grandtotal = 0;
                    grandtotal = tax + subtotal;
                    cout<<endl;
                    cout << "--------------------------------------------------\n";
                    
                    cout<<"\n SubTotal : "<<subtotal;
                    cout<<"\n Cash Payment";
                    cout<<"\n Gst 16 % : "<<tax;
                    cout<<"\n GrandTotal : "<<grandtotal<<endl;
                    cout << "---------------------------------------------------\n";
                    
                    cout<<"                   Thank You";
                    cout<<endl;
                    
                }
            
            
        
    
};










class FoodApp:virtual public Main_M,public Admin, virtual public Menu,public Payment{
public:
    void App(){
        int opt;
        int opptt;
        cout<<"---Food Delivery System---"<<endl;
        do{
            cout<<"1. Menu\n2. Cart \n3. Payment \n4. Admin \n5. Exit"<<endl;
            
            
            
            cout<<"Enter Option: ";
            cin>>opt;
            switch (opt) {
                case 1:
                    do {
                        cout << "\n--- Menu Categories ---" << endl;
                        for (int i = 0; i < 5; ++i) {
                            cout << i + 1 << ". " << Menu_T[i] << endl;
                        }
                        
                        cout << "6. Exit\n";
                        cout << "\nPlease enter your order category: ";
                        cin >> choice;
                        
                        switch (choice) {
                                
                            case 1: orderAppetizers(); break;
                            case 2: orderMainCourse(); break;
                            case 3: orderComboMeals(); break;
                            case 4: orderDesserts(); break;
                            case 5: orderDrinks(); break;
                            default:break;
                        }
                        
                        
                        
                    }while(choice != 6);
                    break;
                case 2:
                    do{
                   
                        cout<<"\n1. View Cart\n2. Clear Cart\n0. Exit";
                        cout<<"\nSelect Option: ";
                        cin>>opptt;
                        switch (opptt) {
                            case 1:cart();break;
                            case 2:clearCart();break;
                            default:break;
                        }
                    }while(opptt != 0);; break;
                case 3:
                    do{
                   
                        cout<<"\n1. Cash\n2. Card\n0. Exit";
                        cout<<"\nSelect Option: ";
                        cin>>opptt;
                        switch (opptt) {
                            case 1:Cash_P();break;
                            case 2:Credit_c();break;
                            default:break;
                        }
                    }while(opptt != 0);
                    
                    break;
                case 4: AdminPanel();break;
            }
            
        
    }while(opt != 5);
}
};


int main(){
    FoodApp a;
    a.App();
    
    
}
