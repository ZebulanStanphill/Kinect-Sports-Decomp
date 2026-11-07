typedef struct Entry_82FF0798 {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int fc;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1c;
} Entry_82FF0798;

typedef struct Range_82FF0798 {
    Entry_82FF0798 *begin;
    Entry_82FF0798 *end;
} Range_82FF0798;

typedef struct Obj_82FF0798 {
    unsigned char pad[0x70];
    unsigned int f70;
} Obj_82FF0798;

extern int fn_83018DD8(unsigned int a, Obj_82FF0798 *b, unsigned int c, unsigned int d,
                       unsigned int e, unsigned int f, unsigned int g, unsigned int h,
                       unsigned int i, int j);
extern Range_82FF0798 *fn_83027FB0(void *p);
extern unsigned int lbl_832642FC;

int fn_82FF0798(Obj_82FF0798 *param_1, void *param_2)
{
    Range_82FF0798 *v;
    Entry_82FF0798 *e;
    int r;

    r = 1;
    v = fn_83027FB0(param_2);
    if (v != 0) {
        for (e = v->begin; e != v->end; e++) {
            r = fn_83018DD8(lbl_832642FC, param_1, e->f8, e->fc, e->f10, e->f1c,
                            e->f14, e->f18, param_1->f70, 4);
            if (r != 1) {
                break;
            }
        }
    }
    return r;
}
