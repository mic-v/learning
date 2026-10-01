#pragma once

// My implementation of a 2D vector
// Using templates and best practices in modern c++

#include <cmath>
namespace learn
{

template <typename T>
concept AllowedTypes = std::is_same_v<T, int> || std::is_same_v<T, float>;

template <AllowedTypes T> class vec2
{
  public:
    vec2(T xval, T yval) : x(xval), y(yval) {}
    vec2(vec2<T> const& vec) : x(vec.x), y(vec.y) {}

    vec2 operator+(const vec2<T> vec) { return vec2(x + vec.x, y + vec.y); }
    vec2 operator-(const vec2<T> vec) { return vec2(x - vec.x, y - vec.y); }
    vec2 operator*(int scalar) { return vec2(x * scalar, y * scalar); }

    // Return magnittude of vector without square root
    constexpr inline T get_magnitude() const { return x * x + y * y; }
    T get_magnitude_square() const { return std::sqrt(x * x + y * y); }

    vec2<T> get_unit_vector()
    {
        const T magnitude = get_magnitude();
        return vec2<T>(x * x / magnitude, y * y / magnitude);
    }

  public:
    T x;
    T y;
};

// only allow two types for this template for now
template class vec2<float>;
template class vec2<int>;

} // namespace learn
