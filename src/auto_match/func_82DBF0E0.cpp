#include "havok/hkString.h"

extern "C" {

typedef struct Alloc Alloc;
typedef struct AllocVt { void *s0; char *(*alloc)(Alloc *a, int size); } AllocVt;
struct Alloc { AllocVt *vt; };
typedef struct { char pad[0x10]; Alloc *alloc; } Ctx;
extern Ctx *fn_82CE5410(void);
extern char *fn_82D972A0(char *mem);

char *fn_82DBF0E0(char *src)
{
    Alloc *al = fn_82CE5410()->alloc;
    char *mem = al->vt->alloc(al, 0xd0);
    char *o;
    *(unsigned short *)(mem + 4) = 0xd0;
    o = fn_82D972A0(mem);
    hkString::memCpy(o + 0x10, src + 0x10, 0xc0);
    return o;
}

}
