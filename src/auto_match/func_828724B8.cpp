struct Node_828724B8;
struct Iterator_828724B8 { Node_828724B8 *p; };
struct Node_828724B8 { Node_828724B8 *next; };

extern "C" {
// list::erase(first, last) with by-value one-word iterators
void fn_82834D68(void *ret, void *list, Iterator_828724B8 first, Iterator_828724B8 last);
void fn_8265CA20(void *p);
void fn_82872C80(void *p);
}

// std::list-like member: ~list() { clear(); free(head); }
struct List_828724B8 {
    unsigned int al;
    Node_828724B8 *head;
    unsigned int size;
    unsigned int pad;
    ~List_828724B8()
    {
        unsigned int ret[4];
        Iterator_828724B8 last = { head };
        Iterator_828724B8 first = { head->next };
        fn_82834D68(ret, this, first, last);
        fn_8265CA20(head);
    }
};

struct Tail_82872C80 {
    unsigned int data[4];
    ~Tail_82872C80() { fn_82872C80(this); }
};

namespace R1 {
namespace Soundscape {
class EmitterFactory_i {
public:
    virtual ~EmitterFactory_i() {}
};

class WwiseEmitterFactory_c : public EmitterFactory_i {
public:
    virtual __forceinline ~WwiseEmitterFactory_c();
    List_828724B8 a;
    List_828724B8 b;
    List_828724B8 c;
    Tail_82872C80 t;
};

__forceinline WwiseEmitterFactory_c::~WwiseEmitterFactory_c()
{
}
}
}

extern "C" void fn_828724B8(R1::Soundscape::WwiseEmitterFactory_c *self)
{
    self->R1::Soundscape::WwiseEmitterFactory_c::~WwiseEmitterFactory_c();
}
