#include "soccl.hpp"

namespace soccl {

Soccl::Soccl() : img_(320, 240, 1, 3) {
    img_.fill(0);
}

RGB Soccl::get_pixel(int x, int y) {
    RGB rgb;
    rgb.r = static_cast<int>(img_(x, y, 0, 0));
    rgb.g = static_cast<int>(img_(x, y, 0, 1));
    rgb.b = static_cast<int>(img_(x, y, 0, 2));
    return rgb; 
}

void Soccl::set_pixel(int x, int y, RGB rgb) {
    img_(x, y, 0, 0) = rgb.r;
    img_(x, y, 0, 1) = rgb.g;
    img_(x, y, 0, 2) = rgb.b;
}

} // namespace soccl
