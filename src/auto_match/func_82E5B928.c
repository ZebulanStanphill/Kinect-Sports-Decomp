typedef struct Entry_82E5B928 {
    char pad[6];
    unsigned short len;
} Entry_82E5B928;

extern int fn_82E5AFB0(void *list, unsigned int idx, Entry_82E5B928 **out);
extern unsigned __int64 fn_82E5B608(void *obj);
extern int fn_82E5BF90(void *p, int a, unsigned __int64 *out);

int fn_82E5B928(char *obj, unsigned __int64 *outBase, unsigned __int64 *outTotal)
{
    unsigned __int64 total;
    unsigned __int64 size;
    unsigned __int64 base;
    unsigned __int64 extra;
    unsigned int i;
    Entry_82E5B928 *e;
    Entry_82E5B928 *p;

    if (*(void **)(obj + 0xc) == 0) {
        return (int)0xc00d36b6;
    }
    total = 0x58;
    for (i = 0; i < *(unsigned int *)(obj + 0x160); i++) {
        p = fn_82E5AFB0(obj + 0xf8, i, &e) != 0 ? e : 0;
        total = p->len + total + 4;
    }
    size = fn_82E5B608(obj) + total;
    base = size;
    extra = 0;
    if (*(void **)(obj + 0x88) != 0) {
        fn_82E5BF90(*(void **)(obj + 0x88), 0, &extra);
        size = extra + size;
    }
    if (outBase != 0) {
        *outBase = base;
    }
    if (outTotal != 0) {
        *outTotal = size;
    }
    *(unsigned __int64 *)(obj + 0x20) = size;
    return 0;
}
