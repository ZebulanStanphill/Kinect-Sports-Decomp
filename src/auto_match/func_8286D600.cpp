extern "C" void fn_8265CA20(void *p);
extern "C" void *memmove(void *, const void *, unsigned int);

class Elem_8286D600 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void Release(int flag);
};

struct Vec_8286D600 {
    Elem_8286D600 **first;
    Elem_8286D600 **last;
    Elem_8286D600 **end;
};

static __forceinline void Erase_8286D600(Vec_8286D600 *v, Elem_8286D600 **p)
{
    Elem_8286D600 **n = p + 1;
    memmove(p, n, (v->last - n) * 4);
    v->last = v->last - 1;
}

static __forceinline void Tidy_8286D600(Vec_8286D600 *v)
{
    if (v->first != 0) {
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

namespace R1 {
namespace Soundscape {
namespace Maths {
class SpringFactory_i {
public:
    virtual ~SpringFactory_i() {}
};
class SpringFactory_c : public SpringFactory_i {
public:
    virtual ~SpringFactory_c();
    Vec_8286D600 a;
};

__forceinline SpringFactory_c::~SpringFactory_c()
{
    Vec_8286D600 *v = &a;
    Elem_8286D600 **p;
    Elem_8286D600 *e;
    for (p = a.first; p != a.last; p++) {
        e = *p;
        Erase_8286D600(v, p);
        if (e != 0) {
            e->Release(1);
        }
    }
    Tidy_8286D600(v);
}
}
}
}

extern "C" void fn_8286D600(R1::Soundscape::Maths::SpringFactory_c *self)
{
    self->R1::Soundscape::Maths::SpringFactory_c::~SpringFactory_c();
}
