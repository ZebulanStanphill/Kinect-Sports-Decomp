#include "xdk/vectorintrinsics.h"

typedef struct Obj_82312ED0 {
    char pad[0x80];
    __vector4 value;
} Obj_82312ED0;

extern const __vector4 lbl_82196750;

void fn_82312ED0(void *a, void *b, Obj_82312ED0 *obj, int d, __vector4 *outValue, int *outB,
                 __vector4 *outConst, int *outD)
{
    *outValue = obj->value;
    *outConst = lbl_82196750;
    *outD = 1;
    *outB = 0;
}
