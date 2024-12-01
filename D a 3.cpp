#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int numLockers = 100;
    vector<bool> lockers(numLockers, false); 
   
    for (int student = 1; student <= numLockers; ++student) {
      
        for (int locker = student - 1; locker < numLockers; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }

   
    bool first = true;
    for (int i = 0; i < numLockers; ++i) {
        if (lockers[i]) {
            if (!first) {
                cout << " ";
            }
            cout << i + 1;
            first = false;
        }
    }

   cout << endl;
    return 0;
}