typedef struct Obj_828BE420 Obj_828BE420;

typedef struct Vtbl_828BE420 {
    void *f00;
    int (*f04)(Obj_828BE420 *self);
    void *pad08[25];
    int (*f6C)(Obj_828BE420 *self);
} Vtbl_828BE420;

struct Obj_828BE420 {
    Vtbl_828BE420 *vt;   /* 0x00 */
    int pad04[5];        /* 0x04 */
    int x18;             /* 0x18 */
    int pad1C[19];       /* 0x1C */
    unsigned char x68;   /* 0x68 */
    unsigned char x69;   /* 0x69 */
    unsigned char pad6A[2];
    void *x6C;           /* 0x6C */
};

extern unsigned int fn_828BD6F8(void *a, Obj_828BE420 *b, int c);
extern int fn_828BE2D0(void *a, Obj_828BE420 *b);

int fn_828BE420(Obj_828BE420 *p)
{
    unsigned int r;

    p->vt->f04(p);
    if (p->x6C != 0) {
        r = fn_828BD6F8(p->x6C, p, p->x18);
    } else {
        r = 1;
    }
    switch (r) {
    case 0:
        return 0;
    case 1:
        if (p->x68 == 0) {
            if (p->vt->f04(p) < 0x1b) {
                return p->vt->f6C(p);
            }
            return fn_828BE2D0(p->x6C, p);
        }
        return p->x69;
    case 3:
        return 1;
    }
    return 1;
}
