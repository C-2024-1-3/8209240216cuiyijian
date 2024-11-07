#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;
int main() {
    const double price_per_apple = 0.8;
    int apples_today = 2;
    int total_apples = 0;
    double total_cost = 0.0;
    int days = 0;

    while (apples_today <= 100) {
        total_apples += apples_today;
        total_cost += apples_today * price_per_apple;
        days++;

     
        apples_today *= 2;
    }

   
    double average_cost = total_cost / days;

cout << "总共花费了 " << fixed << setprecision(2) << total_cost << " 元" << endl;
   cout << "总共购买了 " << total_apples << " 个苹果" << endl;
    cout << "一共花了 " << days << " 天" << endl;
   cout << "平均每天花费 " << fixed << setprecision(2) << average_cost << " 元" << endl;

    return 0;
}
