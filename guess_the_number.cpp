#include <iostream>
#include <string>
#include <random>
using namespace std;
int generator() {
    random_device rn;
    mt19937 gen(rn());
    uniform_int_distribution<> distr(1,100);
    int num = distr(gen);
    return num;
}

int main() {
    int number = generator();
    int choosed_number;
    int guess_no=1;
    cout << "Lets Play A Game!" << endl;
    while (choosed_number != number) { 
     cout << "Enter A Number Between 1-100 :";
     cin >> choosed_number;
     if (choosed_number >= number) {
        cout << "The Chosen Number Is Greated Than The Target Number" << endl;
        guess_no ++;
     }
     else if (choosed_number <=number) {
        cout << "The Chosen Number Is less Than The Target Number" << endl;
        guess_no ++;
     }
     else if (choosed_number==number) {
        break;
     }
    
    }
    cout << number << " Was indeed the correct number! Great Job! Number Of Guesses: " << guess_no;
    return 0;
    
}