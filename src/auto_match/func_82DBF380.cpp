#include "havok/hkString.h"

extern "C" {

typedef struct Alloc Alloc;
typedef struct AllocVt {
    void *f0;
    char *(*alloc)(Alloc *a, int size);
} AllocVt;
struct Alloc { AllocVt *vt; };
typedef struct Mgr { char pad[0x10]; Alloc *alloc; } Mgr;

extern Mgr *fn_82CE5410(void);
extern char *fn_82D9EB80(char *mem);

char *fn_82DBF380(char *src)
{
    Alloc *a = fn_82CE5410()->alloc;
    char *mem = a->vt->alloc(a, 0xa0);
    char *o;
    *(unsigned short *)(mem + 4) = 0xa0;
    o = fn_82D9EB80(mem);
    hkString::memCpy(o + 0x10, src + 0x10, 0x84);
    return o;
}

}
