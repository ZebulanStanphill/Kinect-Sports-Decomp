// The scalar deleting destructor of PackfileObjectCopier, a class in an anonymous
// namespace (RTTI: PackfileObjectCopier@?A0x9721bf3b -> hkObjectCopier). Its real
// name contains the anonymous namespace's hash, which a recompile cannot
// reproduce, so it keeps its fn_ name and is written out as the compiler
// generates it: the implicit destructor (only the out-of-line
// ~hkObjectCopier, fn_82E17FB8), then the class allocator's delete.
#include "havok/hkObjectCopier.h"

namespace {
class PackfileObjectCopier : public hkObjectCopier {
public:
    PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut)
        : hkObjectCopier(layoutIn, layoutOut) {}
};
}

extern "C" void *fn_82E12620(void *p, unsigned int flags)
{
    PackfileObjectCopier *self = static_cast<PackfileObjectCopier *>(p);
    self->PackfileObjectCopier::~PackfileObjectCopier();
    if (flags & 1)
        PackfileObjectCopier::operator delete(self);
    return self;
}
