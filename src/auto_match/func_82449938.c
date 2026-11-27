#include "xdk/vectorintrinsics.h"

typedef struct {
    __vector4 v;
} Vec_82449938;

typedef struct {
    char pad[0x40];
    __vector4 v;
} Data_82449938;

typedef struct {
    int f0;
    Data_82449938 *data;
} Res_82449938;

typedef struct {
    char pad[0x174];
    Res_82449938 *res;
} Inner_82449938;

typedef struct {
    char pad[0x40];
    Inner_82449938 **inner;
} Obj_82449938;

Vec_82449938 fn_82449938(Obj_82449938 *o)
{
    Vec_82449938 r;
    r.v = (*o->inner)->res->data->v;
    return r;
}
