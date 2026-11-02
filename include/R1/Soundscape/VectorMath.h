// Out-of-line 3-float vector helpers that the Soundscape shapes call. They are
// still C units (fn_ names); each returns its out parameter. The inline
// operators below are how the shapes appear to use them.

#ifndef R1_SOUNDSCAPE_VECTORMATH_H
#define R1_SOUNDSCAPE_VECTORMATH_H

// A 3-float vector. The name is a placeholder that std::vector instantiations
// already use (?reserve@?$vector@UElement_82834F10@@...).
struct Element_82834F10 {
    float x, y, z;
};

// The same type under the placeholder name that other instantiations use
// (??0?$vector@UElement_828729F8@@..., ?_Buy@?$vector@UElement_828729F8@@...):
// WwiseEmitter_Path_c's points.
struct Element_828729F8 {
    float x, y, z;
};


extern "C" {
// *out = *a + *b
Element_82834F10 *fn_82810830(Element_82834F10 *out, const Element_82834F10 *a, const Element_82834F10 *b);
// *out = *a - *b
Element_82834F10 *fn_828108B8(Element_82834F10 *out, const Element_82834F10 *a, const Element_82834F10 *b);
// dot(*a, *b)
float fn_82810280(const Element_82834F10 *a, const Element_82834F10 *b);
// *out = *v * s
Element_82834F10 *fn_82810A28(Element_82834F10 *out, const Element_82834F10 *v, float s);
// *out = *v normalised (VMX)
void fn_82810B78(const Element_82834F10 *v, Element_82834F10 *out);
// length of *v
float fn_82810BE8(const Element_82834F10 *v);
}

static __forceinline Element_82834F10 operator+(const Element_82834F10 &a, const Element_82834F10 &b)
{
    Element_82834F10 r;
    return *fn_82810830(&r, &a, &b);
}

static __forceinline Element_82834F10 operator-(const Element_82834F10 &a, const Element_82834F10 &b)
{
    Element_82834F10 r;
    return *fn_828108B8(&r, &a, &b);
}

static __forceinline Element_82834F10 operator*(const Element_82834F10 &v, float s)
{
    Element_82834F10 r;
    return *fn_82810A28(&r, &v, s);
}

static __forceinline float Length(const Element_82834F10 &v)
{
    return fn_82810BE8(&v);
}

static __forceinline float Dot(const Element_82834F10 &a, const Element_82834F10 &b)
{
    return fn_82810280(&a, &b);
}

#endif
