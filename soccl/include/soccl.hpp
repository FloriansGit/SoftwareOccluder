#ifndef SOCCL_HPP
#define SOCCL_HPP

#define cimg_display 0
#include <CImg.h>

namespace soccl {

struct RGB {
    int r, g, b;
};

class Soccl {
public:
    Soccl();

    RGB get_pixel(int x, int y);
    void set_pixel(int x, int y, RGB rgb);
private:
    cimg_library::CImg<unsigned char> img_;
};

} // namespace soccl

#endif
