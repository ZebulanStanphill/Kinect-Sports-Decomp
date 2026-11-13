extern int fn_8265C990();
extern int fn_82917D90();
extern int fn_8265C990();
extern int fn_82917D90();
extern unsigned int lbl_8202E390;

typedef struct Obj {
    void *vtbl;
    int pad4;
    void *p8;
    int padc[2];
    void **items;   /* 0x14 */
    unsigned int count; /* 0x18 */
    void *p1c;
} Obj;

void fn_8291AF98(Obj *o)
{
    unsigned int i;
    void *it;

    o->vtbl = &lbl_8202E390;
    if (o->items != 0) {
        for (i = 0; i < o->count; i++) {
            it = o->items[i];
            if (it != 0) {
                fn_82917D90(it);
                fn_8265C990(it, 0x24810000);
            }
        }
        fn_8265C990(o->items, 0x24810000);
    }
    fn_8265C990(o->p8, 0x24810000);
    fn_8265C990(o->p1c, 0x24810000);
}
