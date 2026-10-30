// R1::Soundscape::OcclusionScheduler_c::~OcclusionScheduler_c(): stores the vtable, runs the
// shutdown routine (fn_8286D050), then the inline std::list destructor of the member at +0x18
// (clear() is fn_8286D2C8, the head node is freed with operator delete).
extern "C" {
void fn_8265CA20(void *p);
void fn_8286D050(void *self);
void fn_8286D2C8(void *list);
}

struct List_8286D0E8 {
    void *head;
    unsigned int size;
    ~List_8286D0E8()
    {
        fn_8286D2C8(this);
        fn_8265CA20(head);
    }
};

namespace R1 {
namespace Soundscape {
class OcclusionScheduler_c {
public:
    virtual __forceinline ~OcclusionScheduler_c();
    char pad[0x14];
    List_8286D0E8 m_list;
};

__forceinline OcclusionScheduler_c::~OcclusionScheduler_c()
{
    fn_8286D050(this);
}
}
}

extern "C" void fn_8286D0E8(R1::Soundscape::OcclusionScheduler_c *self)
{
    self->R1::Soundscape::OcclusionScheduler_c::~OcclusionScheduler_c();
}
