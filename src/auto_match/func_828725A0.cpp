// R1::Soundscape::WwiseEmitterFactory_c default constructor: vtable, three tree containers (out-of-line
// constructor fn_82828AE8 taking the empty comparator and allocator temporaries), then a
// vector of Element_82872CE8 that reserves 30 entries.
extern "C" void fn_82828AE8(void *tree, const void *comp, const void *alloc);

struct Element_82872CE8 {
    int data[2];
};

namespace std {
template <class T> class allocator {
};
template <class T, class A = allocator<T> > class vector {
public:
    T *first;
    T *last;
    T *end;
    vector() : first(0), last(0), end(0) {}
    void reserve(unsigned int n);
};
}

struct Empty_828725A0 {
};

struct Tree_828725A0 {
    char data[0x10];
    __forceinline Tree_828725A0()
    {
        Empty_828725A0 e;
        fn_82828AE8(this, &e, &e);
    }
};

namespace R1 {
namespace Soundscape {
class WwiseEmitterFactory_c {
public:
    WwiseEmitterFactory_c();
    virtual ~WwiseEmitterFactory_c();
    Tree_828725A0 m_a;
    Tree_828725A0 m_b;
    Tree_828725A0 m_c;
    std::vector<Element_82872CE8> m_v;
};

WwiseEmitterFactory_c::WwiseEmitterFactory_c()
{
    m_v.reserve(30);
}
}
}
