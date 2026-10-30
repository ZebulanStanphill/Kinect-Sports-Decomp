struct Src_826E6D78;
typedef struct SrcVT_826E6D78 { char pad[0x28]; int (*read)(struct Src_826E6D78 *, void *, int); } SrcVT_826E6D78;
typedef struct Src_826E6D78 { SrcVT_826E6D78 *vt; } Src_826E6D78;
typedef struct Z_826E6D78 {
    void *next_in; unsigned int avail_in; unsigned int total_in;
    void *next_out; unsigned int avail_out;
} Z_826E6D78;
typedef struct Obj_826E6D78 {
    Src_826E6D78 *src;
    Z_826E6D78 z;
    char padz[0x40 - 0x4 - sizeof(Z_826E6D78)];
    int total;
    unsigned char eof;
    char pad45[3];
    int err;
    char pad4c[0x858 - 0x4c];
    char buf[0x1000];
} Obj_826E6D78;
extern int fn_827D1EB0(Z_826E6D78 *z, int flush);

int fn_826E6D78(Obj_826E6D78 *o, void *out, unsigned int want)
{
    int r, got;
    if (o->err != 0)
        return 0;
    o->z.next_out = out;
    o->z.avail_out = want;
    do {
    if (o->z.avail_in == 0) {
        r = o->src->vt->read(o->src, o->buf, 0x1000);
        if (r == 0) break;
        o->z.next_in = o->buf;
        o->z.avail_in = r;
    }
    r = fn_827D1EB0(&o->z, 2);
    if (r == 1) { o->eof = 1; break; }
    if (r != 0) { o->err = 1; break; }
} while (o->z.avail_out != 0);

    got = want - o->z.avail_out;
    o->total = o->total + got;
    return got;
}
