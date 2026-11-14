/* Less-than comparator for keys ordered by size, kind, two bytes, then data bytes. */
extern int memcmp(const void *a, const void *b, unsigned int n);

typedef struct Key_828301D0 {
    const unsigned char *data;
    int pad4;
    unsigned int size;              /* 0x08 */
    unsigned int kind;              /* 0x0c */
    unsigned char a;                /* 0x10 */
    unsigned char b;                /* 0x11 */
} Key_828301D0;

unsigned char fn_828301D0(void *self, const Key_828301D0 *x, const Key_828301D0 *y)
{
    if (x->size != y->size)
        return x->size < y->size;
    if (x->kind != y->kind)
        return x->kind < y->kind;
    if (x->a != y->a)
        return x->a < y->a;
    if (x->b != y->b)
        return x->b < y->b;
    return memcmp(x->data, y->data, x->size) < 0;
}
