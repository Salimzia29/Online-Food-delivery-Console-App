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
