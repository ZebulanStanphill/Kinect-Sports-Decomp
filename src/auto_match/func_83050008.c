typedef struct Item_83050008 {
    int f0;
    int f4;
    int pad8[4];
    int f18;
    unsigned int f1c;
    void *f20;
} Item_83050008;

typedef struct Mgr_83050008 Mgr_83050008;
typedef int (*MgrFn_83050008)(Mgr_83050008 *self, int a, int b, int *c, unsigned char *flag, void *out);
typedef struct MgrVt_83050008 {
    void *slot0;
    MgrFn_83050008 f4;
    MgrFn_83050008 f8;
} MgrVt_83050008;
struct Mgr_83050008 {
    MgrVt_83050008 *vt;
};

typedef struct Self_83050008 Self_83050008;
typedef struct SelfVt_83050008 {
    void *slots[4];
    void (*f10)(Self_83050008 *self);
} SelfVt_83050008;
struct Self_83050008 {
    SelfVt_83050008 *vt;
    int pad4[3];
    Item_83050008 *item;
    int pad14;
    char f18[0x74 - 0x18];
    unsigned int flags;
};

extern Mgr_83050008 *lbl_83265048;
extern void fn_8304FF88(Self_83050008 *self);

int fn_83050008(Self_83050008 *self)
{
    Item_83050008 *item = self->item;
    unsigned char flag;
    int *p;
    MgrFn_83050008 fn;
    int r;

    if (item == 0 || (self->flags & 0x8000000) != 0) {
        return 1;
    }
    flag = 1;
    p = item->f20 != 0 ? &item->f4 : 0;
    if ((item->f1c & 0x80000000) != 0) {
        r = lbl_83265048->vt->f8(lbl_83265048, item->f0, item->f18, p, &flag, self->f18);
    } else {
        r = lbl_83265048->vt->f4(lbl_83265048, item->f0, item->f18, p, &flag, self->f18);
    }
    if (r == 1) {
        self->flags |= 0x4000000;
        self->vt->f10(self);
    }
    fn_8304FF88(self);
    return r;
}
