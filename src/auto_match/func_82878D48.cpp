#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

// The entries of WwiseEmitter_c::unk7C (declared as void *): objects with a
// vtable; slot 0x04 returns whether the entry may be removed, slot 0x1C is
// called once it has been removed. fn_82870AA0 is still a C unit.
struct __declspec(novtable) Entry_82878D48 {
    virtual void vf00();
    virtual bool vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
};

extern "C" unsigned char fn_82870AA0(Entry_82878D48 *entry);

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::fn_82878D48(bool all)
{
    std::vector<void *>::iterator it = unk7C.begin();
    while (it != unk7C.end()) {
        Entry_82878D48 *entry = static_cast<Entry_82878D48 *>(*it);
        if (all || (!fn_82870AA0(entry) && entry->vf04() == true)) {
            it = unk7C.erase(it);
            entry->vf1C();
        } else {
            ++it;
        }
    }
    return 0x20200000;
}

} // namespace Soundscape
} // namespace R1
