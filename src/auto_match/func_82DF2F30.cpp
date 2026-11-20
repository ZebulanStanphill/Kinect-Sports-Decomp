#include "havok/hkString.h"

extern "C" {

typedef struct E { char pad[0x38]; unsigned int x38; } E;
typedef struct P { char pad[0xc]; E **items; int count; } P;

E *fn_82DF2F30(P *p, void *b)
{
    int i;
    for (i = 0; i < p->count; i++) {
        unsigned int v = p->items[i]->x38 & ~1u;
        if (v != 0 && hkString::strCasecmp((const char *)(v), (const char *)(b)) == 0)
            return p->items[i];
    }
    return 0;
}

}
