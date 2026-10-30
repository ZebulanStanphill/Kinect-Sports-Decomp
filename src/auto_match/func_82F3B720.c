typedef struct { char pad[0xc]; void *c; char pad2[0x6c - 0x10]; unsigned int count; } Obj;

int fn_82F3B720(Obj *p, unsigned int i, unsigned __int64 *a, unsigned __int64 *b)
{
    if (p->c == 0) {
        return 0xc00d36b6;
    }
    if (i >= p->count) {
        return 0xc00d3a9d;
    }
    if (a) {
        *a = i * 6;
    }
    if (b) {
        *b = i * 6 + 4;
    }
    return 0;
}
