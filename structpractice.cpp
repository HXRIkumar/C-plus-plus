#include<iostream>

using namespace std;

// Struct declaration must come first
struct yogesh {
    string name;
    string gender;
    int age;
};

// Function declaration
void ints(yogesh &yogs);

int main() {
    yogesh yogs = {"Yogesh", "male", 20};
    ints(yogs);  // Pass `yogs` directly (no `&` needed)
    return 0;
}

// Function definition
void ints(yogesh &yogs) {
    cout << yogs.name << endl;
    cout << yogs.gender << endl;
    cout << yogs.age << endl;
}
