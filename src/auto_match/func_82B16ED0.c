typedef struct Obj_82B16ED0 {
    int pad0[2];
    unsigned int flags;      /* 0x08 */
    unsigned short pad0c;    /* 0x0c */
    unsigned short nibbles;  /* 0x0e */
    int pad10;               /* 0x10 */
    unsigned int bits;       /* 0x14 */
} Obj_82B16ED0;

typedef struct Inner_82B16ED0 {
    int pad[10];
    unsigned int hi : 17;    /* 0x28 */
    unsigned int bit14 : 1;
    unsigned int lo : 14;
} Inner_82B16ED0;

typedef struct Mid_82B16ED0 {
    int pad[37];
    Inner_82B16ED0 *inner;   /* 0x94 */
} Mid_82B16ED0;

typedef struct Page_82B16ED0 {
    Mid_82B16ED0 *mid;       /* 0x00 */
} Page_82B16ED0;

unsigned int fn_82B16ED0(Obj_82B16ED0 *o, unsigned int i)
{
    unsigned int v;
    unsigned int r;

    if ((o->flags & 0x3f80) == 16000) {
        Page_82B16ED0 *pg = (Page_82B16ED0 *)((unsigned int)o & 0xfffff000);
        if ((unsigned char)!pg->mid->inner->bit14 == 0) {
            return 0;
        }
        return ((o->bits >> 2) & 0xff) >> (i * 2) & 3;
    }
    r = 0;
    if ((o->flags & 0x1000000) == 0) {
        v = (o->nibbles >> (unsigned short)(i * 4)) & 0xf;
        if ((v & 4) != 0) {
            r = (v & 2) ? 2 : 1;
        }
    }
    return r;
}
