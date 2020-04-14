#include<iostream>

using namespace std;


const double cost_per_small_room {25.0};
const double cost_per_large_room {35.0};
const double sales_tax {0.03};
const int days_valid {30};

int main()
{
    int number_of_rooms;
    int number_of_smallrooms;
    cout << " <<< Welcome to Frank\'s Carpet Cleaning Service >>>"<< endl;
    cout << "\nEnter number of the small rooms you want cleaned :";
    cin >> number_of_smallrooms;
    cout << "Enter the number of large rooms you want cleaned :";
    cin >> number_of_rooms;

    cout << "####################################################" << endl;

    cout << "Number of small rooms :"<< number_of_smallrooms << endl;
    cout << "Cost per small room : $ "<< cost_per_small_room << endl;
    cout << "Number of large rooms :"<< number_of_rooms << endl;
    cout << "Cost per large room : $ "<< cost_per_large_room << endl;
    cout << "Sales tax given : " << sales_tax * 100 << "% " << endl;
    
    cout << "Total cost of rooms : $" << number_of_smallrooms * cost_per_small_room + number_of_rooms*cost_per_large_room << endl;
    cout << "Total tax : $" << (number_of_smallrooms * cost_per_small_room + number_of_rooms*cost_per_large_room)*sales_tax << endl;
    cout << "Estimate cost : $ "<< (number_of_smallrooms * cost_per_small_room + number_of_rooms*cost_per_large_room)*sales_tax +
    number_of_smallrooms * cost_per_small_room + number_of_rooms*cost_per_large_room << endl; 


    cout << "Validity for(days) :"<< days_valid << endl;;

    return 0;
}