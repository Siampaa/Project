#include <gtest/gtest.h>
#include "vector.cpp"

using namespace std;

TEST(VectorIncrementTest, IncrementsVectorByN) {
    vector<int> input = { 1, 2, 3, 4, 5 };
    int n = 3;
    vector<int> expected = { 4, 5, 6, 7, 8 };
    vector<int> result = incrementVector(input, n);
    ASSERT_EQ(result, expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
