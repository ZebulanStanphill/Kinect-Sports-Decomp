#include "xdk/vectorintrinsics.h"

typedef struct {
    char pad[4];
    float y;
} Height_823690C8;

typedef struct {
    char pad[4];
    Height_823690C8 *height;
} Ground_823690C8;

typedef struct {
    char pad[8];
    void ***items;
    char padc[0x10];
    Ground_823690C8 *ground;
    char pad20[0x2b0];
    __vector4 origin[2];
    char pad2f0[0x1040];
    float scale;
    float angle;
} Owner_823690C8;

extern __vector4 lbl_8329EA20;
extern __vector4 *fn_822AA718(__vector4 *out, void *item);
extern __vector4 fn_8255AE78(float angle, __vector4 v);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

__vector4 *fn_823690C8(__vector4 *out, Owner_823690C8 *o, int flag)
{
    int idx = flag == 0;
    __vector4 dir;
    __vector4 v;

    fn_822AA718(&dir, (*o->items)[idx]);
    v = fn_8255AE78(o->angle, dir);
    v = __vmaddfp(v, Replicate(o->scale), o->origin[idx]);
    *out = __vsel(v, Replicate(o->ground->height->y), lbl_8329EA20);
    return out;
}
