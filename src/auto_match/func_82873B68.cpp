// R1::Soundscape::WwiseEmitterFireAndForgetFactory_c::~WwiseEmitterFireAndForgetFactory_c():
// stores the vtable, runs the inline std::list destructor of the member at +4 (clear() is
// fn_8286D2C8, the head node is freed with operator delete), then the inline base destructor
// stores the EmitterFireAndForgetFactory_i vtable.
extern "C" {
void fn_8265CA20(void *p);
void fn_8286D2C8(void *list);
}

struct List_82873B68 {
    void *head;
    unsigned int size;
    ~List_82873B68()
    {
        fn_8286D2C8(this);
        fn_8265CA20(head);
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
    virtual __forceinline ~WwiseEmitterFireAndForgetFactory_c();
    List_82873B68 m_list;
};

__forceinline WwiseEmitterFireAndForgetFactory_c::~WwiseEmitterFireAndForgetFactory_c()
{
}
}
}

extern "C" void fn_82873B68(R1::Soundscape::WwiseEmitterFireAndForgetFactory_c *self)
{
    self->R1::Soundscape::WwiseEmitterFireAndForgetFactory_c::~WwiseEmitterFireAndForgetFactory_c();
}
