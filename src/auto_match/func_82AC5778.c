typedef struct Hdr_82AC5778 {
    char pad0[0x20];
    unsigned int maxIndex;
} Hdr_82AC5778;

typedef struct Entry_82AC5778 {
    unsigned int info;
    int pad4[2];
} Entry_82AC5778;

typedef struct Ctx_82AC5778 {
    Hdr_82AC5778 *hdr;
    Entry_82AC5778 *entries;
    int pad8[4];
    unsigned int *links;
    unsigned int flags;
    char pad20[0x44 - 0x20];
    char *base;
    unsigned int size;
    char pad4c[0x8058 - 0x4c];
    unsigned int numKinds;
} Ctx_82AC5778;

int fn_82AC5778(unsigned int *p, Ctx_82AC5778 *c)
{
    unsigned int flags;
    unsigned int n;
    unsigned int i;
    unsigned int prev;
    unsigned int v;
    unsigned int idx;
    unsigned int kind;
    unsigned int link;
    unsigned int *lp;
    unsigned int maxIndex;
    unsigned int *links;

    flags = c->flags;
    if ((flags & 0x40000) != 0) {
        return 0x80004005;
    }
    if ((flags & 0x20000) != 0) {
        return 0x80004005;
    }
    n = (flags >> 5) & 0x1f;
    if ((char *)p < c->base) {
        return 0x80004005;
    }
    if ((unsigned __int64)(unsigned int)p + (unsigned __int64)n * 4 > (__int64)c->base + c->size) {
        return 0x80004005;
    }
    maxIndex = c->hdr->maxIndex;
    prev = 0;
    links = c->links;
    for (i = 0; i < n; i++) {
        v = *p;
        idx = (v >> 16) & 0xfff;
        if (idx > maxIndex) {
            return 0x80004005;
        }
        kind = (v >> 8) & 0xf;
        if (kind >= c->numKinds) {
            return 0x80004005;
        }
        lp = &links[idx];
        do {
            link = *lp;
            if ((c->entries[link & 0xfff].info & 0x3f) != kind) {
                return 0x80004005;
            }
            lp++;
        } while ((link & 0x1000) == 0);
        if (i != 0 && prev >= (v & 0xff)) {
            return 0x80004005;
        }
        prev = v & 0xff;
        p++;
    }
    return 0;
}
