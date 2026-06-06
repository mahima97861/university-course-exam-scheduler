#include <bits/stdc++.h>
using namespace std;

/*
 University Course and Exam Scheduler
 Concepts Used:
 - Graph Construction (Conflict Matrix)
 - Greedy Coloring Algorithm
 - Backtracking
*/

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> courseNames(n);
    cout << "Enter course names: ";
    for (int i = 0; i < n; i++)
        cin >> courseNames[i];

    vector<vector<int>> students(n);
    cout << "\nEnter students enrolled in each course:\n";
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << courseNames[i] << ": ";
        string line;
        getline(cin, line);
        stringstream ss(line);
        int x;
        while (ss >> x)
            students[i].push_back(x);
    }

    // Build conflict graph (adjacency matrix)
    bool conflict[20][20] = {false};
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int s : students[i]) {
                if (find(students[j].begin(), students[j].end(), s) != students[j].end()) {
                    conflict[i][j] = conflict[j][i] = true;
                    break;
                }
            }
        }
    }

    // Greedy Coloring Algorithm
    vector<int> color(n, 0);
    color[0] = 1;
    for (int i = 1; i < n; i++) {
        bool used[20] = {false};
        for (int j = 0; j < n; j++) {
            if (conflict[i][j] && color[j] != 0)
                used[color[j]] = true;
        }
        for (int c = 1; c <= n; c++) {
            if (!used[c]) {
                color[i] = c;
                break;
            }
        }
    }

    // Output the Schedule
    cout << "\nOutput Schedule:\n";
    set<int> usedSlots;
    for (int i = 0; i < n; i++) {
        cout << "Course " << courseNames[i] << " -> Slot " << color[i] << endl;
        usedSlots.insert(color[i]);
    }

    cout << "Total Slots Used = " << usedSlots.size() << endl;
    return 0;
}
