#include <vector>

struct Big_8287EE10;
struct Small_8287E520;
extern "C" {
void fn_8287EE10(Big_8287EE10 *dst, const Big_8287EE10 *src);
void fn_8287E520(Small_8287E520 *dst, const Small_8287E520 *src);
}

struct Big_8287EE10 {
    int data[0x28];
    __forceinline Big_8287EE10(const Big_8287EE10 &o) { fn_8287EE10(this, &o); }
};

struct Small_8287E520 {
    int data[4];
    __forceinline Small_8287E520(const Small_8287E520 &o) { fn_8287E520(this, &o); }
};

struct Curve_8287EEE8 {
    int a;
    int b;
    std::vector<float> values;
    __forceinline Curve_8287EEE8(const Curve_8287EEE8 &o) : a(o.a), b(o.b), values(o.values) {}
};

struct Track_8287EEE8 {
    int key;
    Small_8287E520 small;
    __forceinline Track_8287EEE8(const Track_8287EEE8 &o) : key(o.key), small(o.small) {}
};

struct Obj_8287EEE8 {
    unsigned char flag;
    int f4;
    Curve_8287EEE8 curve;
    float f20;
    int f24;
    Big_8287EE10 big;
    Track_8287EEE8 track;
    float fdc;
    int fe0;
    __forceinline Obj_8287EEE8(const Obj_8287EEE8 &o)
        : flag(o.flag), f4(o.f4), curve(o.curve), f20(o.f20), f24(o.f24), big(o.big), track(o.track),
          fdc(o.fdc), fe0(o.fe0) {}
};

extern "C" Obj_8287EEE8 *fn_8287EEE8(Obj_8287EEE8 *self, const Obj_8287EEE8 *other)
{
    self->Obj_8287EEE8::Obj_8287EEE8(*other);
    return self;
}
