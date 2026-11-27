#include "xdk/vectorintrinsics.h"

typedef struct { __vector4 v; } Vec4_824CC7E8;

typedef struct {
    void *vtable;
    Vec4_824CC7E8 (*get)(void *context);
    void *context;
} Getter_824CC7E8;
Vec4_824CC7E8 fn_824CC7E8(Getter_824CC7E8 *getter)
{
    Vec4_824CC7E8 r;
    r.v = getter->get(getter->context).v;
    return r;
}
