#include "xdk/vectorintrinsics.h"

typedef struct Src_82CF6578 {
    __vector4 v;
    char f10[0x10];
} Src_82CF6578;

typedef struct Dst_82CF6578 {
    char pad[0x30];
    __vector4 v;
} Dst_82CF6578;

extern void fn_82CE6010(Dst_82CF6578 *dst, void *src);

void fn_82CF6578(Src_82CF6578 *src, Dst_82CF6578 *dst)
{
    fn_82CE6010(dst, src->f10);
    dst->v = src->v;
}
