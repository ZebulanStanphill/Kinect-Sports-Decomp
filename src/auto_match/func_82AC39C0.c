typedef struct Hdr_82AC39C0 {
    char pad[0x1c];
    unsigned int count;
} Hdr_82AC39C0;
typedef struct Ctx_82AC39C0 {
    Hdr_82AC39C0 *hdr;
    int pad04[3];
    unsigned int *items;
    int pad14[5];
    unsigned char done;
    char pad29[0x1b];
    int base;
    unsigned int size;
} Ctx_82AC39C0;
typedef struct Entry_82AC39C0 {
    int a;
    unsigned short type;
    short b;
    int c;
} Entry_82AC39C0;

int fn_82AC39C0(Entry_82AC39C0 *entries, unsigned int index, Ctx_82AC39C0 *ctx)
{
    unsigned int *p;
    unsigned int count;
    unsigned int i;

    if (ctx->done == 0) {
        p = ctx->items;
        count = ctx->hdr->count;
        if ((unsigned int)p < (unsigned int)ctx->base) {
            return 0x80004005;
        }
        if ((unsigned __int64)(unsigned int)p + (unsigned __int64)count * 4 >
            (unsigned __int64)((__int64)ctx->base + ctx->size)) {
            return 0x80004005;
        }
        for (i = 0; i < count; i++) {
            if (index == (p[i] & 0xfff)) {
                return 0;
            }
        }
    }
    switch (entries[index].type & 0x3f) {
    case 6:
    case 7:
    case 0x10:
    case 0x11:
    case 0x19:
    case 0x1a:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x39:
        return 0;
    }
    return 0x80004005;
}
