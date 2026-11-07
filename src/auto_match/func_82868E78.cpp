#include <new>

namespace R1 {
namespace Soundscape {
class DebugGamePrinting_c {
public:
    virtual void Print(void);
};
}
}

extern "C" unsigned int fn_82811400(void *buf, int n);
extern "C" void *fn_82811080(void *pool, int size, unsigned int arg);

extern "C" char lbl_832116F8[];
extern "C" R1::Soundscape::DebugGamePrinting_c *lbl_83211728;

extern "C" R1::Soundscape::DebugGamePrinting_c *fn_82868E78(void)
{
    if (lbl_83211728 == 0) {
        unsigned char buf[32];
        unsigned int a = fn_82811400(buf, 4);
        void *mem = fn_82811080(lbl_832116F8, 4, a);
        lbl_83211728 = new (mem) R1::Soundscape::DebugGamePrinting_c;
    }
    return lbl_83211728;
}
