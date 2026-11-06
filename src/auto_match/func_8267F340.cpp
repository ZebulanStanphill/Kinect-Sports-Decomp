// Constructor of Holder_8267F3B8 (Base_8267EE90 + GAcquireInterface), called by name
// from C units, so it stays fn_8267F340 and builds the object by placement new.
#include "game/Node_8267D248.h"

extern "C" {
void fn_8267EE78(void *self);
bool fn_8267EAB8(void *target, void (*cb)(void *), void *self);
}

class Holder_8267F3B8 : public Base_8267EE90, public GAcquireInterface {
public:
    __forceinline Holder_8267F3B8(void *target, unsigned int b)
        : Base_8267EE90((unsigned char)1), unk10(target)
    {
        unk14 = b;
        fn_8267EAB8(target, fn_8267EE78, this);
    }
    virtual ~Holder_8267F3B8();

    void *unk10;
    unsigned int unk14;
};

extern "C" Holder_8267F3B8 *fn_8267F340(Holder_8267F3B8 *h, void *target, unsigned int b)
{
    h->Holder_8267F3B8::Holder_8267F3B8(target, b);
    return h;
}
