#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> student1, pair<int, int> student2) {
    return (student1.first - student1.second) > (student2.first - student2.second);
}

int main() {
    int n{}, a{}, b{};
    cin >> n >> a >> b;

    vector<int> biology(n);  
    for (int i = 0; i < n; i++) {
        cin >> biology[i];  
    }

    vector<int> physics(n);
    for (int i = 0; i < n; i++) {
       cin >> physics[i];
    }

    vector<pair<int, int>> students(n);

    for (int i = 0; i < n; i++) {
        students[i] = make_pair(biology[i], physics[i]);
    }

    sort(students.begin(), students.end(), cmp); 

    int sumScore = 0;

    for (int i = 0; i < a; i++) {
        sumScore += students.at(i).first;
    } 
    for (int i = a; i < n; i++) {
        sumScore += students.at(i).second;
    }
    cout << sumScore << endl;
    
    return 0;
}
