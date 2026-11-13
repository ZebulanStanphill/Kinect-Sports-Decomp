extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Table_82CE2830 {
    char pad0[0x28];
    unsigned short count;
    unsigned short stride;
    char pad2c[4];
    unsigned char *data;
} Table_82CE2830;

int fn_82CE2830(Table_82CE2830 *t, unsigned int index, void *out)
{
    if (index >= t->count)
        return 0x80004005;
    memcpy(out, t->data + t->stride * index, 0x18);
    return 0;
}
