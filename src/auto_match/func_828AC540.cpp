// Key comparison. It matches only as a member function: the byte of the argument is loaded before
// the byte of this.

struct Key_828AC540 {
    int pad0;
    unsigned char kind; // 0x4
    unsigned int a;     // 0x8
    unsigned int b;     // 0xc
    unsigned int c;     // 0x10
    unsigned int d;     // 0x14

    bool operator==(const Key_828AC540 &other) const;
};

bool Key_828AC540::operator==(const Key_828AC540 &other) const
{
    bool result;
    result = kind == other.kind && a == other.a;
    result = result && b == other.b;
    result = result && c == other.c;
    return result && d == other.d;
}
