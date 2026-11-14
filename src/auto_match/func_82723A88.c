struct Base_82723A88;
typedef struct BaseVT_82723A88 {
    int pad[2];
    int (*f8)(struct Base_82723A88 *);
} BaseVT_82723A88;
typedef struct Base_82723A88 {
    BaseVT_82723A88 *vt;
} Base_82723A88;
typedef struct Obj_82723A88 {
    char pad0[0xa0];
    int fa0;
} Obj_82723A88;
typedef struct Self_82723A88 {
    int a;
    int b;
    Base_82723A88 *base;
    char pad1[0x18 - 0xc];
    int val;
    int count;
} Self_82723A88;
extern int fn_826957D0(Self_82723A88 *, int);
extern int fn_82697610(int, int);
extern unsigned int fn_8279A600(int, int);
extern void fn_82681898(int, double);
extern double lbl_8200E890;

void fn_82723A88(Self_82723A88 *self)
{
    if (self->base != 0) {
        if (self->base->vt->f8(self->base) == 4) {
            Obj_82723A88 *o;
            int v;
            int index;
            unsigned int r;
            double d;

            if (self->base != 0)
                o = (Obj_82723A88 *)((char *)self->base - 0x68);
            else
                o = 0;
            if (self->count >= 1) {
                v = self->val;
                index = fn_82697610(fn_826957D0(self, 0), v);
                if (index >= 0 && (r = fn_8279A600(o->fa0, index)) != 0xffffffff)
                    d = (double)r;
                else
                    d = lbl_8200E890;
                fn_82681898(self->b, d);
            }
        }
    }
}
