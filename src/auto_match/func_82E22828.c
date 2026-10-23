extern unsigned char *fn_8265C9E0(int size);

typedef struct Reader Reader;
typedef struct ReaderVt {
    void *s00;
    void *s04;
    void *s08;
    void *s0c;
    void *s10;
    int (*GetPos)(Reader *r);
    unsigned char (*ReadByte)(Reader *r);
    void *s1c;
    void *s20;
    void *s24;
    void *s28;
    void (*SetHeader)(Reader *r, unsigned char *hdr);
} ReaderVt;

struct Reader {
    ReaderVt *vt;
    int pos;
    unsigned char a;
    unsigned char b;
};

unsigned char *fn_82E22828(Reader *r)
{
    unsigned char *hdr;
    int i;

    r->pos = r->vt->GetPos(r);
    hdr = fn_8265C9E0(0x40);
    for (i = 0; i < 0x40; i++) {
        hdr[i] = r->vt->ReadByte(r);
    }
    r->vt->SetHeader(r, hdr);
    r->a = hdr[0x36];
    r->b = hdr[0x24];
    return hdr;
}
