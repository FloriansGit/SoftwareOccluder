#include "soccl.hpp"

#include "gmock/gmock.h"

class SocclTest: public testing::Test {
public:
    soccl::Soccl soccl;
};

TEST_F(SocclTest, TestPixelGetter) {
    soccl::RGB rgb = soccl.get_pixel(10, 20);
    ASSERT_EQ(rgb.r, 0);
    ASSERT_EQ(rgb.g, 0);
    ASSERT_EQ(rgb.b, 0);
}

TEST_F(SocclTest, TestPixelSetter) {
    soccl::RGB rgb{12, 21, 44};
    soccl.set_pixel(43, 23, rgb);

    ASSERT_EQ(rgb.r, 12);
    ASSERT_EQ(rgb.g, 21);
    ASSERT_EQ(rgb.b, 44);
}
