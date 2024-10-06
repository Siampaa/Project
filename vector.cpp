#include <vector>

using namespace std;

vector<int> incrementVector(const vector<int>& vec, int n) {
    vector<int> result(vec.size());
    for (size_t i = 0; i < vec.size(); i++) {
        result[i] = vec[i] + n;
    }
    return result;
}
