typedef struct Pair_82F58FF8 {
    void *items[2];
} Pair_82F58FF8;

typedef struct Obj_82F58FF8 {
    Pair_82F58FF8 pairs[2];   /* 0x00 */
    int initialized;          /* 0x10 */
    int pad14[2];
    int arg1c;                /* 0x1c */
    int pad20;
    int arg24;                /* 0x24 */
} Obj_82F58FF8;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82F5CB80(void *mem, int index, int a, int b);
extern void fn_82F58F98(Obj_82F58FF8 *self);

/* creates the two pairs of 0x50-byte objects, releasing everything on failure */
int fn_82F58FF8(Obj_82F58FF8 *self)
{
    int hr = 0;
    unsigned int i;
    Pair_82F58FF8 *pair;
    void *mem;

    if (self->initialized != 0) {
        hr = 0x80004005;
    } else {
        for (i = 0, pair = self->pairs; i < 2; i++, pair++) {
            if (hr < 0)
                break;
            mem = fn_8265C9E0(0x50);
            pair->items[0] = mem ? fn_82F5CB80(mem, 0, self->arg1c, self->arg24) : 0;
            if (pair->items[0] == 0) {
                hr = 0x8007000e;
            } else {
                mem = fn_8265C9E0(0x50);
                pair->items[1] = mem ? fn_82F5CB80(mem, 1, self->arg1c, self->arg24) : 0;
                if (pair->items[1] == 0)
                    hr = 0x8007000e;
            }
        }
        if (hr < 0)
            fn_82F58F98(self);
        else
            self->initialized = 1;
    }
    return hr;
}
