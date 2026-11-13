typedef struct Link_82A5D210 {
    struct Link_82A5D210 *next;
    struct Link_82A5D210 *prev;
} Link_82A5D210;

typedef struct Obj_82A5D210 {
    unsigned char isZero;     /* 0x00 */
    unsigned int flag;        /* 0x04 */
    Link_82A5D210 list;       /* 0x08 */
    int refs;                 /* 0x10 */
} Obj_82A5D210;

extern char lbl_83219D50[];
extern void *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);

Obj_82A5D210 *fn_82A5D210(int value, unsigned char flag)
{
    Obj_82A5D210 *o = (Obj_82A5D210 *)fn_82A3FF60(lbl_83219D50, 0x14, 0x20970006, 0);
    if (o != 0) {
        Link_82A5D210 *l = &o->list;
        o->refs = 1;
        o->isZero = value == 0;
        o->flag = flag;
        l->next = l;
        l->prev = l;
        return o;
    }
    return 0;
}
