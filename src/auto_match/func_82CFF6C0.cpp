#include "havok/hkClass.h"

struct Owner_82CFF6C0 { int pad[3]; void *obj; unsigned char flag; };
typedef const hkClass *(*Method_82CFF6C0)(void *);

extern "C" unsigned fn_82CFF6C0(struct Owner_82CFF6C0 *o, char *e)
{
    int n = *(unsigned short *)(e + 4) & 0x7fff;
    if (n == 0 && o->flag) {
        const hkClass *v = (*(Method_82CFF6C0 *)((char *)*(void **)o->obj + 0x10))(o->obj);
        if (v) return v->getObjectSize();
        return 0;
    }
    return n;
}
