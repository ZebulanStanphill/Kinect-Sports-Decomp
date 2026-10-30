namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8289B660;
extern "C" void fn_82F565A0(Element_8289B660 *self, const Element_8289B660 *other);

struct Element_8289B660 {
    Element_8289B660(const Element_8289B660 &other) { fn_82F565A0(this, &other); }
    int data[6];
};

typedef std::list<Element_8289B660, Allocator_825089A0<Element_8289B660, 1> > List_8289C940;

extern template void List_8289C940::_Insert(const_iterator, const Element_8289B660 &);

struct Impl_8289C940 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void Delete(bool freeMem);
};

struct Func_8289C940 {
    char space[0x10];
    Impl_8289C940 *impl;
};

struct Obj_8289C940 {
    char pad[0x38];
    List_8289C940 list;
};

extern "C" void fn_8289C940(Obj_8289C940 *o, Func_8289C940 *f)
{
    o->list.push_back(*(const Element_8289B660 *)f);
    if (f->impl != 0) {
        f->impl->Delete(f->impl != (Impl_8289C940 *)f);
        f->impl = 0;
    }
}
