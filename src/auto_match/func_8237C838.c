#include "xdk/vectorintrinsics.h"

typedef struct Unit_8237C838 {
    char pad0[0x24];
    int active; /* 0x24 */
} Unit_8237C838;

typedef struct Obj_8237C838 {
    char pad0[0x118];
    float volume; /* 0x118 */
    char pad11c[0x190 - 0x11c];
    float lo; /* 0x190 */
    float hi; /* 0x194 */
} Obj_8237C838;

extern __vector4 *fn_822B6C98(__vector4 *out, Unit_8237C838 *unit, int index);
extern int fn_822CEEC8(Unit_8237C838 *unit);
extern void fn_82A1E1A8(unsigned int value);

void fn_8237C838(Obj_8237C838 *self, Unit_8237C838 *unit)
{
    int below;

    if (unit->active == 0)
        return;
    {
        __vector4 range;

        fn_822B6C98(&range, unit, 9);
        if (self->hi >= range.vector4_f32[1])
            return;
        below = self->lo < range.vector4_f32[0];
    }
    if (below != fn_822CEEC8(unit))
        fn_82A1E1A8((unsigned int)(self->volume * 1000.0f));
}
