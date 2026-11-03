// R1::Soundscape::WwiseEmitter_c::evf40 (vtable slot 0x40): clears unk78, lets the reverb
// control pick up the emitter (fn_82877BA8, NonMatching), stops the finished entries of unk7C
// (fn_82878D48(false)), then sets the handle at +0x4c (context.unk08) to the one the manager reports
// (fn_82868758 returns the manager, fn_82874908 reads its field +0x28) and tells the interface
// at unk54 (vtable slot 4) about it.
#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

extern "C" {
int fn_82877BA8(void *reverb, void *emitter);
void *fn_82868758(void);
unsigned int fn_82874908(void *manager);
int fn_82879968(void *emitter, unsigned int handle);
}

namespace R1 {
namespace Soundscape {

struct Interface_82879CD8 {
    virtual int vf00();
    virtual int vf04();
};

int WwiseEmitter_c::evf40()
{
    unk78 = false;
    fn_82877BA8(&reverb, this);
    fn_82878D48(false);
    unsigned int handle = fn_82874908(fn_82868758());
    if (context.unk08 != handle && fn_82879968(this, handle) < 0)
        return 0xa0200000;
    if (unk54 != 0 && ((Interface_82879CD8 *)unk54)->vf04() < 0)
        return 0xa0200000;
    return 0x20200000;
}

} // namespace Soundscape
} // namespace R1
