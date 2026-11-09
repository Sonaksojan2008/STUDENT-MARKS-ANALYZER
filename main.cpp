// Online C++ compiler (editor)
// Write and run C++ online using this editor.

# include  <iostream>
using namespace std;
int main() {
    int marks[100];
    int n;

    cout << "enter the No. of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter marks: ";
        cin >> marks[i];
    }

    int total = 0;

    for (int i = 0; i < n; i++) {
        total = total + marks[i];
    }

    cout << "total = " << total;

    float avg;

    for (int i = 0; i < n; i++) {
        avg = total / n;
    }

    cout << " avg = " << avg;

    int highest = marks[0];

    for (int i = 0; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
    }

    cout << " highest = " << highest;

    int low = marks[0];

    for (int i = 0; i < n; i++) {
        if (marks[i] < low)
            low = marks[i];
    }

    cout << " low = " << low;

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 40)
            cout << " pass";
        else
            cout << " failed";
    }

    return 0;
}
