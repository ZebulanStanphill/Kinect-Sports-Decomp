typedef struct Obj_82BA65D8 Obj_82BA65D8;

typedef struct Arr_82BA65D8 {
    int pad0;
    unsigned int count;
    Obj_82BA65D8 **data;
} Arr_82BA65D8;

struct Obj_82BA65D8 {
    void **vt;
    char pad4[0x34];
    Arr_82BA65D8 *arr;      /* 0x38 */
    char pad3c[0x48];
    unsigned int mask;      /* 0x84 */
};

extern void *fn_82BA4058(void);
extern int fn_82BBFE28(int p);

static __forceinline unsigned char Next_82BA65D8(Arr_82BA65D8 *a, unsigned int j, int k, Obj_82BA65D8 **e)
{
    if (j > a->count) {
        return 0;
    }
    *e = a->data[k];
    return 1;
}

void fn_82BA65D8(int param_1)
{
    Obj_82BA65D8 **list = (Obj_82BA65D8 **)fn_82BA4058();
    unsigned char changed;
    int i;

    do {
        changed = 0;
        for (i = 1; i <= fn_82BBFE28(param_1 + 0x80); i++) {
            Obj_82BA65D8 *o = list[i];
            if (((unsigned char (*)(Obj_82BA65D8 *))o->vt[2])(o) == 0) {
                Arr_82BA65D8 *a = o->arr;
                Obj_82BA65D8 *e = 0;
                unsigned int old = o->mask;
                int k = 0;
                unsigned int j = 1;
                while (Next_82BA65D8(a, j, k, &e)) {
                    o->mask = e->mask | o->mask;
                    j++;
                    k++;
                }
                changed = o->mask != old;
            }
        }
    } while (changed);
}
