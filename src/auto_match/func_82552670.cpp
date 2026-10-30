extern "C" void fn_82864898(void *);
namespace R1 {
namespace Soundscape {
class AudioVariant_c {
public:
    AudioVariant_c(unsigned int id);
    ~AudioVariant_c() { fn_82864898(this); }
    int vptr;
    char m_name[0x1c];
    unsigned int m_id;
};
}
}

class Listener_82552670 {
public:
    virtual void fire();
};

struct Entry_82552670 {
    char pad[0x24];
    Listener_82552670 **a_begin;
    Listener_82552670 **a_end;
    char pad2[0x8];
    Listener_82552670 **b_begin;
    Listener_82552670 **b_end;
};

extern "C" {
Entry_82552670 *fn_822A8D30(void *, const R1::Soundscape::AudioVariant_c &);
extern void *lbl_8327F874;
}

static __forceinline void FireAll_82552670(Entry_82552670 *e)
{
    if (e != 0) {
        for (Listener_82552670 **p = e->a_begin; p != e->a_end; p++)
            (*p)->fire();
        for (Listener_82552670 **p = e->b_begin; p != e->b_end; p++)
            (*p)->fire();
    }
}

extern "C" void fn_82552670(unsigned int *param_1)
{
    unsigned int id = *param_1;
    FireAll_82552670(fn_822A8D30(lbl_8327F874, R1::Soundscape::AudioVariant_c(id)));
}
