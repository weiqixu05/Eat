#include <iostream>
#include <vector>
using namespace std;

vector<string> list_of_restaurants;

int main() {
    string s;
    while (cin >> s) {
        cout << "add restaurant:\n";
    }
    for(int i = 0; i < list_of_restaurants.size(); i++) {
        printf("%s", list_of_restaurants[i].c_str());
    }
}