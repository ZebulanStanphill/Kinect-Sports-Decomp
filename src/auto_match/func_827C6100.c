typedef struct Src_827C6100 Src_827C6100;

typedef struct Reader_827C6100 {
    int x;
    int y;
    int pad8;
    unsigned char (*Read)(Src_827C6100 *src);
} Reader_827C6100;

struct Src_827C6100 {
    char pad0[0x18];
    Reader_827C6100 *reader;
};

typedef struct Dst_827C6100 {
    int x;
    int y;
    int pad8[6];
    Src_827C6100 *src;
} Dst_827C6100;

unsigned char fn_827C6100(Dst_827C6100 *d)
{
    Reader_827C6100 *r;

    r = d->src->reader;
    if (!r->Read(d->src)) {
        return 0;
    }
    d->x = r->x;
    d->y = r->y;
    return 1;
}
