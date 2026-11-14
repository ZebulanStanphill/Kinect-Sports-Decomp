/* Comparator (stored as a function pointer by fn_82BB4080): 0 when the 0xf0-byte blocks at +0x14 are equal, else -1. */
int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Obj_82BB2BE8 {
    char pad0[0x14];
    unsigned char data[0xf0];   /* 0x14 */
} Obj_82BB2BE8;

int fn_82BB2BE8(const Obj_82BB2BE8 *a, const Obj_82BB2BE8 *b)
{
    return memcmp(a->data, b->data, sizeof(a->data)) != 0 ? -1 : 0;
}
