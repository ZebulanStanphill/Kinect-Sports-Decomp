#include "havok/hkBase.h"
class hkStaticClassNameRegistry {
public:
 HK_DECLARE_PLACEMENT_ALLOCATOR();
 hkStaticClassNameRegistry(const hkClass *const *, int, const char *);
};
extern "C" { extern char lbl_8323FDA0[]; extern const hkClass *lbl_821944E8[]; void fn_83141B68(); int atexit(void (*)()); }
extern "C" void fn_831385C0() {
 new (lbl_8323FDA0) hkStaticClassNameRegistry(lbl_821944E8, -1, "Havok-7.0.0-r1");
 atexit(fn_83141B68);
}
