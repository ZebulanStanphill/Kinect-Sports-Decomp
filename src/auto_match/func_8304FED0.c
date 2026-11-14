typedef struct Blk5_8304FED0 {
    int v[5];
} Blk5_8304FED0;

typedef struct Item_8304FED0 {
    int f0;                    /* 0x00 */
    Blk5_8304FED0 data;        /* 0x04 */
    int f18;                   /* 0x18 */
    unsigned int flags;        /* 0x1c */
    int f20;                   /* 0x20 */
} Item_8304FED0;

typedef struct Owner_8304FED0 {
    int pad0[4];               /* 0x00 */
    Item_8304FED0 *item;       /* 0x10 */
    int pad14[24];             /* 0x14 */
    unsigned int flags;        /* 0x74 */
} Owner_8304FED0;

extern void *fn_82FA5060(unsigned int heap, unsigned int size);
extern unsigned int lbl_831BC978;

int fn_8304FED0(Owner_8304FED0 *o, int a, Blk5_8304FED0 *src, int b)
{
    Item_8304FED0 *p;

    o->flags &= 0xfbffffff;
    p = (Item_8304FED0 *)fn_82FA5060(lbl_831BC978, 0x24);
    o->item = p;
    if (p != 0) {
        p->flags &= 0x7fffffff;
        if (src != 0) {
            o->item->f20 = 1;
            o->item->data = *src;
        } else {
            o->item->f20 = 0;
        }
        o->item->f0 = a;
        o->item->f18 = b;
        return 1;
    }
    return 2;
}
