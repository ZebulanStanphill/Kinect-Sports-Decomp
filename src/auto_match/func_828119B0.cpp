struct V {
    float x, y;
    V &operator-=(const V &other);
};
V &V::operator-=(const V &other) {
    x -= other.x;
    y -= other.y;
    return *this;
}
