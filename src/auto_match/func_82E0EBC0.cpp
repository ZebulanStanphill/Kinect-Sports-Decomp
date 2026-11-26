// PackfileObjectCopier::PackfileObjectCopier(layoutIn, layoutOut): an hkObjectCopier with the default
// flags (FLAG_NONE, built in a stack temporary and passed by value). The class is in an anonymous
// namespace in the game (??_7PackfileObjectCopier@?A0x9721bf3b@@6B@); its constructor and vtable are
// named here without the namespace, whose hash a recompile cannot reproduce.
#include "havok/hkObjectCopier.h"

class PackfileObjectCopier : public hkObjectCopier {
public:
    PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut);
};

PackfileObjectCopier::PackfileObjectCopier(const hkStructureLayout::LayoutRules &layoutIn, const hkStructureLayout::LayoutRules &layoutOut)
    : hkObjectCopier(layoutIn, layoutOut)
{
}
