#include "xdk/vectorintrinsics.h"

typedef struct State_82DFC270 {
    unsigned char active; /* 0x00 */
    char padding[7];
    float distance; /* 0x08 */
    char padding0c[4];
    __vector4 first;   /* 0x10 */
    __vector4 second;  /* 0x20 */
    __vector4 third;   /* 0x30 */
    __vector4 fourth;  /* 0x40 */
    __vector4 rows[3]; /* 0x50 */
} State_82DFC270;

static __forceinline void Clear_82DFC270(__vector4 *value)
{
    *value = __vxor(*value, *value);
}

typedef struct Rows_82DFC270 {
    __vector4 values[3];
} Rows_82DFC270;

static __forceinline void ClearRows_82DFC270(Rows_82DFC270 *rows)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    rows->values[0] = zero;
    rows->values[1] = zero;
    rows->values[2] = zero;
}

void fn_82DFC270(void *self, void *input, State_82DFC270 *out)
{
    out->active = 1;
    out->distance = 0.0f;
    Clear_82DFC270(&out->third);
    Clear_82DFC270(&out->first);
    Clear_82DFC270(&out->second);
    Clear_82DFC270(&out->fourth);
    ClearRows_82DFC270((Rows_82DFC270 *)&out->rows);
}
