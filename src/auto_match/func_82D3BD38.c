#include "xdk/vectorintrinsics.h"

typedef union {
    __vector4 v;
    unsigned int u[4];
} Vertex_82D3BD38;

void fn_82D3BD38(unsigned char *self, const unsigned short *ids, int count, Vertex_82D3BD38 *out)
{
    int i;
    for (i = count - 1; i >= 0; i--) {
        unsigned int id = *ids++;
        out->v = *(__vector4 *)(self + 0x20 + id);
        out->u[3] = id | 0x3f000000;
        out++;
    }
}
