typedef struct Obj_826C6F30 Obj_826C6F30;

typedef struct {
    Obj_826C6F30 **items;
    unsigned int count;
} Pair_826C6F30;

typedef struct {
    void *pad0[2];
    void (*f8)(Obj_826C6F30 *self, int a, int b);
    void *padC[2];
    unsigned char (*f14)(Obj_826C6F30 *self);
    void *pad18[6];
    unsigned char (*f30)(Obj_826C6F30 *self, Pair_826C6F30 *out, unsigned int index);
} Vtbl_826C6F30;

struct Obj_826C6F30 {
    Vtbl_826C6F30 *vt;
    int pad4[7];
    int field20;
};

extern unsigned int fn_826D7038(int a);
extern int fn_826D7728(Obj_826C6F30 *obj, int a, int b, int c);

void fn_826C6F30(int param_1, int param_2)
{
    Obj_826C6F30 *src;
    unsigned int n;
    unsigned int i;
    unsigned int j;
    Pair_826C6F30 pair;

    i = 0;
    src = *(Obj_826C6F30 **)(*(int *)(param_2 + 0x1c) + 0xc);
    n = fn_826D7038(src->field20);
    if (n != 0) {
        do {
            pair.items = 0;
            pair.count = 0;
            if (src->vt->f30(src, &pair, i)) {
                j = 0;
                if (pair.count != 0) {
                    do {
                        Obj_826C6F30 *o = pair.items[j];
                        if (o->vt->f14(o)) {
                            fn_826D7728(o, param_1, param_2, 1);
                        } else {
                            o->vt->f8(o, param_1, 0);
                        }
                        j++;
                    } while (j < pair.count);
                }
            }
            i++;
        } while (i < n);
    }
    *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) |= 0x400;
}
