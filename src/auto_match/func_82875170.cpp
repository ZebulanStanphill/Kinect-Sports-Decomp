// R1::Soundscape::WwiseListener_c copy constructor (memberwise, including the
// ListenerBiasContext_c at +0x60). It is really the implicit
// ??0WwiseListener_c@Soundscape@R1@@QAA@ABV012@@Z (which matches too), but its
// callers (func_82875500, func_82875580) are still NonMatching C, so it keeps
// its fn_ name for now. WwiseListener_c is declared locally until its other
// members are converted.
#include "R1/Soundscape/AudioVariant.h"
#include "R1/Soundscape/ListenerBias.h"

namespace R1 {
namespace Soundscape {

class __declspec(novtable) Listener_i {
public:
    virtual void vf00() = 0;
    virtual void vf04() = 0;
    virtual void vf08() = 0;
    virtual void vf0C() = 0;
    virtual void vf10() = 0;
    virtual void vf14() = 0;
    virtual void vf18() = 0;
    virtual void vf1C() = 0;
    virtual void vf20() = 0;
    virtual void vf24() = 0;
    virtual void vf28() = 0;
    virtual ~Listener_i() {}
};

struct ListenerPipe_82875170 {
    unsigned char bytes[0x24];
};

class WwiseListener_c : public Listener_i {
public:
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual ~WwiseListener_c();

    // The implicit copy constructor, spelled out so that it can be inlined into
    // the extern "C" function below.
    __forceinline WwiseListener_c(const WwiseListener_c &o)
        : Listener_i(o), variant(o.variant), unk28(o.unk28), listener(o.listener), pipe(o.pipe),
          unk54(o.unk54), unk58(o.unk58), unk5C(o.unk5C), bias(o.bias)
    {
    }

    AudioVariant_c variant;
    unsigned char unk28;
    unsigned int listener;
    ListenerPipe_82875170 pipe;
    unsigned int unk54;
    unsigned int unk58;
    unsigned int unk5C;
    ListenerBiasContext_c bias;
};

} // namespace Soundscape
} // namespace R1

using namespace R1::Soundscape;

extern "C" WwiseListener_c *fn_82875170(WwiseListener_c *self, const WwiseListener_c *other)
{
    self->WwiseListener_c::WwiseListener_c(*other);
    return self;
}
