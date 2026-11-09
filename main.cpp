#include <iostream>
using namespace std;

int main() {
int marks[100];
int n;

cout << "Enter the number of students: ";
cin >> n;

for (int i = 0; i < n; i++) {
    cout << "Enter marks: ";
    cin >> marks[i];
}

int total = 0;

for (int i = 0; i < n; i++) {
    total = total + marks[i];
}

cout << "\nTotal = " << total;

float avg;
avg = (float)total / n;

cout << "\nAverage = " << avg;

int highest = marks[0];

for (int i = 0; i < n; i++) {
    if (marks[i] > highest)
        highest = marks[i];
}

cout << "\nHighest = " << highest;

int low = marks[0];

for (int i = 0; i < n; i++) {
    if (marks[i] < low)
        low = marks[i];
}

cout << "\nLowest = " << low;

int pass = 0;
int fail = 0;

for (int i = 0; i < n; i++) {
    if (marks[i] >= 40) {
        pass++;
    }
    else {
        fail++;
    }
}

cout << "\nPassed students = " << pass;
cout << "\nFailed students = " << fail;

return 0;

}
   
