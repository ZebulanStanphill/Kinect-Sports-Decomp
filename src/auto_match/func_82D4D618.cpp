// hkpRemoveTerminalsMoppModifier2's constructor, under its fn_ name: the base's default constructor, then a
// query of the whole MOPP (an AABB from lbl_82014894 to lbl_82014898 in every component) with itself as the
// modifier, with the caller's bit field (82DEAA58 passes the enabled children of a list shape) stored at +0x1C
// for the time of the query. The class has no header; its vtables are ??_7hkpRemoveTerminalsMoppModifier2@@6B...
// The parameter types and the member's name are not confirmed.
#include "havok/hkAabb.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"

extern "C" {
extern float lbl_82014898, lbl_82014894;
void fn_82DCDF98(void *, const hkAabb *, hkpMoppModifier *);
}

class hkpRemoveTerminalsMoppModifier2 : public hkpRemoveTerminalsMoppModifier {
public:
    HK_FORCE_INLINE hkpRemoveTerminalsMoppModifier2(void *code, unsigned int *enabledChildren, const hkAabb &box)
    {
        m_enabledChildren = enabledChildren;
        fn_82DCDF98(code, &box, this);
        m_enabledChildren = 0;
    }

    unsigned int *m_enabledChildren;   // +0x1C
};

extern "C" hkpRemoveTerminalsMoppModifier2 *fn_82D4D618(hkpRemoveTerminalsMoppModifier2 *self, void *code,
                                                        unsigned int *enabledChildren)
{
    hkAabb box;
    box.m_max.setAll(lbl_82014898);
    box.m_min.setAll(lbl_82014894);
    self->hkpRemoveTerminalsMoppModifier2::hkpRemoveTerminalsMoppModifier2(code, enabledChildren, box);
    return self;
}
