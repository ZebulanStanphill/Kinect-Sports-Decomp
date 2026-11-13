typedef struct {
    unsigned char kind;
    int a;
    int b;
} Entry_829E0DC0;

typedef struct {
    char pad[0x10];
    Entry_829E0DC0 entries[1];
} Out_829E0DC0;

typedef struct { char pad[0xc]; unsigned short id; } Ctx_829E0DC0;

extern unsigned int *fn_829E0C20(Ctx_829E0DC0 *c, unsigned short id);
extern void fn_82A1DDC0(void *d, void *s, int n);

int fn_829E0DC0(Out_829E0DC0 *out, int index, Ctx_829E0DC0 *ctx, unsigned short id)
{
    unsigned int *hdr;

    if (id == 0) {
        return 0x80004005;
    }
    hdr = fn_829E0C20(ctx, id);
    if (hdr == 0) {
        return 0x80004005;
    }
    fn_82A1DDC0(&out->entries[index].a, hdr + 3, 4);
    fn_82A1DDC0(&out->entries[index].b, hdr + 4, 4);
    fn_82A1DDC0(&out->entries[index].kind, hdr + 2, 1);
    return 0;
}
