// R1::Soundscape::WwiseEmitterFireAndForgetFactory_c default constructor: vtable, then the
// std::list member at +4 (out-of-line list constructor fn_8286D250 taking the empty allocator).
extern "C" void fn_8286D250(void *list, const void *alloc);

struct Alloc_82873B20 {
};

struct List_82873B20 {
    void *head;
    unsigned int size;
    __forceinline List_82873B20()
    {
        Alloc_82873B20 al;
        fn_8286D250(this, &al);
    }
};

namespace R1 {
namespace Soundscape {
class EmitterFireAndForgetFactory_i {
public:
    virtual ~EmitterFireAndForgetFactory_i() {}
};

class WwiseEmitterFireAndForgetFactory_c : public EmitterFireAndForgetFactory_i {
public:
    WwiseEmitterFireAndForgetFactory_c();
    virtual ~WwiseEmitterFireAndForgetFactory_c();
    List_82873B20 m_list;
};

WwiseEmitterFireAndForgetFactory_c::WwiseEmitterFireAndForgetFactory_c()
{
}
}
}
