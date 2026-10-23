typedef struct Tbl {
    int pad0;
    unsigned int mask;
    int pad8[2];
    char entries[1];
} Tbl;

extern unsigned int fn_8268AF70(void *data, unsigned int len, int seed);
extern void fn_8268BA10(void *entry, unsigned int *key);
extern int fn_826D7938(Tbl **t, unsigned int *key, unsigned int h);
extern void fn_826DA7D8(Tbl **t, int a, unsigned int *key, unsigned int h);

void fn_826DC860(Tbl **t, int a, unsigned int *key)
{
    unsigned int h;
    Tbl *tbl;
    int idx;

    h = fn_8268AF70((char *)(*key & ~3u) + 8, *(unsigned int *)(*key & ~3u) & 0x7fffffff, 0x1505);
    tbl = *t;
    if (tbl == 0 || (idx = fn_826D7938(t, key, tbl->mask & h)) < 0) {
        fn_826DA7D8(t, a, key, h);
    } else {
        fn_8268BA10(tbl->entries + idx * 0xc, key);
    }
}
