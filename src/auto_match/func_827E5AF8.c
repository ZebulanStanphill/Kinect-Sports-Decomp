typedef struct Entry_827E5AF8 {
    int f0;
    int pad[9];
} Entry_827E5AF8;

struct Obj_827E5AF8;
struct Sub_827E5AF8;

typedef struct SubVt_827E5AF8 {
    void *s0;
    void *s4;
    void (*f8)(struct Sub_827E5AF8 *, int);
} SubVt_827E5AF8;

typedef struct Sub_827E5AF8 {
    SubVt_827E5AF8 *vt;
} Sub_827E5AF8;

typedef struct ObjVt_827E5AF8 {
    void *s[7];
    unsigned int *(*f1c)(struct Obj_827E5AF8 *);
} ObjVt_827E5AF8;

typedef struct Obj_827E5AF8 {
    ObjVt_827E5AF8 *vt;
    int idx;
    Sub_827E5AF8 *sub;
    int pad0c;
    int pad10;
    int f14;
    int pad18;
    unsigned int f1c;
    Entry_827E5AF8 *entries;
} Obj_827E5AF8;

extern int fn_827D50F8(int);
extern void fn_827D9DA0(Sub_827E5AF8 *, int);
extern int fn_827D9DC0(Sub_827E5AF8 *);
extern int fn_827E4408(void);
extern unsigned int fn_827E8298(unsigned int);

int fn_827E5AF8(Obj_827E5AF8 *self)
{
    int flags;
    unsigned int *p;
    SubVt_827E5AF8 *vt;
    int r;

    if (fn_827D50F8(self->f14) != 0) {
        return 0x4c7;
    }
    flags = fn_827D9DC0(self->sub);
    if (self->entries[self->idx + 3].f0 == 0) {
        return 0x4b0;
    }
    if ((flags & 2) == 0 && (flags & 1) == 0) {
        fn_827D9DA0(self->sub, flags | 1);
        p = self->vt->f1c(self);
        if (fn_827E8298(self->f1c * 0x40 + *p) != 0) {
            vt = self->sub->vt;
            r = fn_827E4408();
            vt->f8(self->sub, r);
        }
    }
    return 0x3e4;
}
