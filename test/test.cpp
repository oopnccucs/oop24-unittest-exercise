#include "sphere.h"
#include <gtest/gtest.h>

TEST(SphereTest, ConstructorTest) {
    Sphere sph(0, 1, 2, 3);
    EXPECT_EQ(sph.getOrigin()[0], 0);
    EXPECT_EQ(sph.getOrigin()[1], 1);
    EXPECT_EQ(sph.getOrigin()[2], 2);
    EXPECT_EQ(sph.getRadius(), 3);
}

TEST(SphereTest, ConstructorTest2) {
    Sphere sph(0, 1, 2, -3);
    EXPECT_EQ(sph.getOrigin()[0], 0);
    EXPECT_EQ(sph.getOrigin()[1], 1);
    EXPECT_EQ(sph.getOrigin()[2], 2);
    EXPECT_EQ(sph.getRadius(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}