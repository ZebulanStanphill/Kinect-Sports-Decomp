typedef struct Entry_83008F78 {
    int id;
    int a;
    int b;
} Entry_83008F78;

typedef struct Table_83008F78 {
    Entry_83008F78 e[5];
    unsigned char bits0;   /* 0x3c */
    unsigned char bits1;   /* 0x3d */
} Table_83008F78;

typedef struct Obj_83008F78 {
    char pad0[0x24];
    Table_83008F78 *alt;   /* 0x24 */
    Table_83008F78 *tbl;   /* 0x28 */
    char pad2c[0x14];
    unsigned int mask;     /* 0x40 */
} Obj_83008F78;

extern float fn_830177C8(void *a, Obj_83008F78 *o, int b, int c);
extern void *lbl_832642FC;

static __forceinline unsigned char getBit_83008F78(unsigned char bits, unsigned char i)
{
    return (bits >> i) & 1;
}

unsigned char fn_83008F78(Obj_83008F78 *p, int idx)
{
    unsigned char r;

    if (*(void **)&p->tbl == 0) {
        return 0;
    }
    r = getBit_83008F78(p->tbl->bits0, (unsigned char)idx);
    if (p->tbl->e[idx + 1].id != -1 && ((1 << (idx + 0x18)) & p->mask) != 0) {
        return fn_830177C8(lbl_832642FC, p, idx + 0x18, 0) != 0.0f;
    }
    if (p->alt != 0) {
        r = getBit_83008F78(p->alt->bits1, (unsigned char)idx);
    }
    return r;
}
