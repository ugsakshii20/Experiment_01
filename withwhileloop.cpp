#include <iostream>

using namespace std;

main() {
int num;
int total = 0;
int average;
int nums;
cout << "Enter a number: ";
cin >> num;
while (total + num <= 100) {
total += num;

cout << "Enter a number: ";
cin >> num;
}

while (total < 100){
average = total/nums;
}
cout << "The average of the " << num << "is" << average << endl;
}
