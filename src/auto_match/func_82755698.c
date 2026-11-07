typedef struct Obj_82755698 {
    int pad[3];
    unsigned int data;
} Obj_82755698;

extern unsigned int fn_826BD078(const char **p);

static __forceinline int ToUpper_82755698(int c)
{
    if (c >= 0x61 && c <= 0x7a)
        return c - 0x20;
    return c;
}

int fn_82755698(Obj_82755698 *o, int start, const char *pat, unsigned char exact)
{
    unsigned int first;
    unsigned int c;
    unsigned int pc;
    unsigned int tc;
    int pos;
    int skipped;
    const char *it;
    const char *a;
    const char *b;

    first = fn_826BD078(&pat);
    pos = 0;
    it = (const char *)((o->data & ~3u) + 8);
    while ((c = fn_826BD078(&it)) != 0) {
        if (pos >= start &&
            ((exact && c == first) ||
             (!exact && ToUpper_82755698(c) == ToUpper_82755698(first)))) {
            b = it;
            a = pat;
            for (;;) {
                skipped = -1;
                pc = fn_826BD078(&a);
                do {
                    tc = fn_826BD078(&b);
                    skipped++;
                } while (tc == 10);
                if (tc == 0)
                    break;
                if (pc == 0)
                    return pos;
                if (exact) {
                    if (tc == pc)
                        continue;
                } else {
                    if (ToUpper_82755698(tc) == ToUpper_82755698(pc))
                        continue;
                }
                break;
            }
            if (pc == 0)
                return pos;
            if (tc == 0)
                return -1;
            pos -= skipped;
        } else if (c == 10) {
            pos--;
        }
        pos++;
    }
    return -1;
}
