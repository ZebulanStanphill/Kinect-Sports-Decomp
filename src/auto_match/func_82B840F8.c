typedef struct Hdr_82B840F8 {
    unsigned int w0;
    unsigned int w1;
    unsigned int bits;          /* +0x08 */
    unsigned int hi : 16;       /* +0x0c */
    unsigned int lo : 16;       /* +0x0e */
} Hdr_82B840F8;

typedef struct Entry_82B840F8 {
    unsigned int top : 1;
    unsigned int d : 2;
    unsigned int e : 14;
    unsigned int f : 15;
    unsigned int pad0 : 11;
    unsigned int flag : 1;
    unsigned int pad1 : 16;
    unsigned int g : 4;
} Entry_82B840F8;

extern int fn_82ABDD90(int a, unsigned int b, unsigned int c, unsigned int d);
extern void fn_82B83B68(Hdr_82B840F8 *p, int a, int b, int c, int d, int e);

void fn_82B840F8(Hdr_82B840F8 *p1, int p2, int p3, int p4, unsigned int p5,
                 unsigned int p6, unsigned int p7, int p8, int p9, int p10)
{
    unsigned int v;
    int r;
    Entry_82B840F8 *e;

    fn_82B83B68(p1, p2, p4, p3, p3 == 0x68, p9);
    v = p1->bits;
    r = fn_82ABDD90(p2, (v >> 7) & 0x7f, (v >> 19) & 7, (v >> 14) & 7);
    e = (Entry_82B840F8 *)(r + ((char *)p1 - 8));
    e->d = p10;
    e->e = p6;
    e->f = p5;
    e->g = p7;
    e->flag = 1;
    switch (p10) {
    case 1:
        if ((p1->lo & 0xeeee) != 0xeeee)
            p1->lo |= 0xeeee;
        break;
    case 2:
        if ((p1->lo & 0x4444) != 0x4444)
            p1->lo |= 0x4444;
        break;
    case 3:
        if ((p1->lo & 0x6666) != 0x6666)
            p1->lo |= 0x6666;
        break;
    }
}
