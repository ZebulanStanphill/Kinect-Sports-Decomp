#include "havok/hkDefaultBuiltinTypeRegistry.h"
#include "havok/hkDynamicClassNameRegistry.h"
#include "havok/hkStaticClassNameRegistry.h"

class hkTypeInfo;

extern "C" {
extern hkDynamicClassNameRegistry *lbl_832654E4;
extern hkTypeInfoRegistry *lbl_832654E8;
extern hkVtableClassRegistry *lbl_832654EC;
extern hkStaticClassNameRegistry lbl_8323FDA0;   // the statically linked classes (hkBuiltinTypeRegistry::StaticLinkedClasses)
extern const hkTypeInfo *lbl_82193FA8[];
extern const hkClass *lbl_821944E8[];

void fn_82E09080(hkTypeInfoRegistry *registry, const hkTypeInfo *const *infos);
void fn_83082708(hkVtableClassRegistry *registry, const hkTypeInfo *const *infos,
                 const hkClass *const *classes);
}

void hkDefaultBuiltinTypeRegistry::init()
{
    lbl_832654E4->merge(lbl_8323FDA0);
    fn_82E09080(lbl_832654E8, lbl_82193FA8);
    fn_83082708(lbl_832654EC, lbl_82193FA8, lbl_821944E8);
}
