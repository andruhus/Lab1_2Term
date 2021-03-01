/*
#include "Triangle.h"


int main() {

    return 0;
}
*/
#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(FizzBuzzTest, shouldReturn1for1) {
    ASSERT_EQ(0, 0);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}