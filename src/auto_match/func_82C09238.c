typedef struct { int pad[1]; int type; } Entry_82C09238;
typedef struct { int pad[0x7c / 4]; int f7c; } Sub_82C09238;
typedef struct {
    int pad0;
    Sub_82C09238 *sub;
    char pad8[0x210 - 8];
    int f210;
    int pad214;
    void *f218;
} Ctx_82C09238;
extern int fn_82C07228();
extern int fn_82C07C18();
extern int fn_82C10F40();
extern int fn_82C11AD0();

int fn_82C09238(Ctx_82C09238 *c, void *a, int b, void *d, void *e, int *out, int g)
{
    struct { unsigned char key; Entry_82C09238 *entry; int res; } L;
    int hr;

    L.res = 0;
    L.key = 0;
    L.entry = 0;
    if (c != 0 && a != 0 && d != 0 && out != 0 && e != 0 && (*out = 1, c->f210 != 0)) {
        if (c->f218 == 0)
            return fn_82C07C18(0x805000a8);
        hr = fn_82C11AD0(c->f218, &L.key);
        if (hr >= 0) {
            hr = fn_82C10F40(c->sub->f7c, L.key, &L.entry);
            if (hr >= 0) {
                if (L.entry->type != 2)
                    return 4;
                fn_82C07228(c, a, b, d, &L.res, e, out, g);
            }
        }
        return fn_82C07C18();
    }
    return 4;
}
