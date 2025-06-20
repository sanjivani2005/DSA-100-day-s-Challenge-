#include <iostream>
#include <vector>
using namespace std;

int lastOccurrenceRec(const vector<int>& vec, int key, int index) {
    if (index < 0)
        return -1;
    if (vec[index] == key)
        return index;
    return lastOccurrenceRec(vec, key, index - 1);
}

int main() {
    vector<int> vec = {2, 3, 5, 3, 6, 3, 9};
    int key = 3;

    int index = lastOccurrenceRec(vec, key, vec.size() - 1);

    if (index != -1)
        cout << "Last occurrence of " << key << " is at index: " << index << endl;
    else
        cout << key << " not found in the vector.\n";

    return 0;
}

