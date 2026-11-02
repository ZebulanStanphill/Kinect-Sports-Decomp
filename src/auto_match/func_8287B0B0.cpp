// WwiseEmitterPositionable_c::evf40: refreshes the shape's points. The embedded
// emitter's own slot 0x40 runs first, then the nearest listener position is looked up,
// the points vector is cleared and the shape's vf8C refills it from the listener.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
void *fn_82868758(void);
Element_82834F10 *fn_82874AE0(Element_82834F10 *out, void *manager, const Element_82834F10 *position);
void fn_8287AE08(void *self, void *points, const Element_82834F10 *unk);
extern const Element_82834F10 lbl_821CA1A0;
}

// std::vector<Element>::erase(first, last): the linker folded the identical
// instantiations (12-byte elements) into fn_82834EA0, which keeps its name; C linkage
// cannot return the iterator class, so its hidden result pointer is spelled out.
typedef std::vector<Element_82834F10> PointVector;
struct PointIterator_82834EA0 {
    Element_82834F10 *ptr;
};
extern "C" PointIterator_82834EA0 *fn_82834EA0(PointIterator_82834EA0 *result, PointVector *self,
                                               PointVector::const_iterator first,
                                               PointVector::const_iterator last);

template <>
__forceinline PointVector::iterator PointVector::erase(const_iterator first, const_iterator last)
{
    PointIterator_82834EA0 result;
    return iterator(fn_82834EA0(&result, this, first, last)->ptr, this);
}

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf40()
{
    WwiseEmitter_c *e = &emitter;
    e->evf40();
    Element_82834F10 listener;
    fn_82874AE0(&listener, fn_82868758(), &unk90);
    unkA8.erase(unkA8.begin(), unkA8.end());
    vf8C(listener, &unkA8);
    fn_8287AE08(this, &unkA8, &lbl_821CA1A0);
    return 0x20130000;
}

} // namespace Soundscape
} // namespace R1
