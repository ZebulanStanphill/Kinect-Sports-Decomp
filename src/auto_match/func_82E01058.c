#define ALIGN16(x) (((x) + 15) & ~15)

typedef struct Layout_82E01058 {
    char pad0[0xc];
    unsigned int extraSize; /* 0xc */
    int pad10;
    unsigned short count; /* 0x14 */
} Layout_82E01058;

/* Lays out the two per-item tables and the extra block one after the other from base, each rounded
   up to 16 bytes, and returns the four boundaries. */
void fn_82E01058(Layout_82E01058 *self, int base, int unused, int *out)
{
    int sizeA = ALIGN16(self->count * 0x50);
    int sizeB = ALIGN16(self->count * 0x60);
    unsigned int extra = self->extraSize;
    int cur;

    out[0] = base;
    cur = base + sizeA;
    out[1] = cur;
    cur = cur + sizeB;
    out[2] = cur;
    out[3] = cur + ALIGN16(extra);
}
