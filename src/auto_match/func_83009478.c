typedef unsigned char bool;

typedef struct Entry_83009478 {
    int id;
    int a;
    int b;
} Entry_83009478;

typedef struct Obj_83009478 {
    char pad[0xc];
    Entry_83009478 e[4];
    unsigned char flags3c;
    unsigned char flags3d;
} Obj_83009478;

typedef struct Self_83009478 {
    char pad[0x24];
    Obj_83009478 *f24;
    Obj_83009478 *f28;
    char pad2[0x14];
    unsigned int f40;
} Self_83009478;

extern void *fn_82FA5060(void *heap, int size);
extern float fn_830177C8(void *ctx, Self_83009478 *p, int idx, int flag);
extern void fn_8301B058(void *ctx, Self_83009478 *p);
extern Obj_83009478 *fn_83034858(void *mem, Self_83009478 *p, unsigned int bits);
extern void *lbl_831BC768;
extern void *lbl_832642EC;
extern void *lbl_832642FC;

static __forceinline bool GetBit_83009478(unsigned char flags, unsigned char bit)
{
    return (flags >> bit) & 1;
}

Obj_83009478 *fn_83009478(Self_83009478 *p)
{
    fn_8301B058(lbl_832642EC, p);
    if (p->f24 == 0) {
        unsigned int bits;
        unsigned int i;
        unsigned int m;
        void *mem;

        bits = 0;
        for (i = 0, m = 1; i < 4; i++) {
            Obj_83009478 *o = p->f28;
            bool b;
            if (o == 0) {
                b = 0;
            } else {
                b = GetBit_83009478(o->flags3c, (unsigned char)i);
                if (o->e[i].id == -1 || ((m >> 8 | m << 24) & p->f40) == 0) {
                    if (p->f24 != 0) {
                        b = GetBit_83009478(p->f24->flags3d, (unsigned char)i);
                    }
                } else {
                    b = fn_830177C8(lbl_832642FC, p, i + 0x18, 0) != 0.0f;
                }
            }
            m = m << 1 | m >> 31;
            bits |= (unsigned int)(b != 0) << i;
        }
        mem = fn_82FA5060(lbl_831BC768, 0x40);
        p->f24 = mem ? fn_83034858(mem, p, bits) : 0;
    }
    return p->f24;
}
