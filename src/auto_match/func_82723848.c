struct Base_82723848;
typedef struct BaseVT_82723848 {
    int pad[2];
    int (*f8)(struct Base_82723848 *);
} BaseVT_82723848;
typedef struct Base_82723848 {
    BaseVT_82723848 *vt;
} Base_82723848;
typedef struct Obj_82723848 {
    char pad0[0xa0];
    int fa0;
} Obj_82723848;
typedef struct Self_82723848 {
    int a;
    int b;
    Base_82723848 *base;
    char pad1[0x18 - 0xc];
    int val;
    int count;
} Self_82723848;
extern int fn_826957D0(Self_82723848 *, int);
extern int fn_82697610(int, int);
extern unsigned int fn_827A1630(int, int, int);
extern void fn_82681898(int, double);
extern double lbl_8200E890;

void fn_82723848(Self_82723848 *self)
{
    if (self->base != 0) {
        if (self->base->vt->f8(self->base) == 4) {
            Obj_82723848 *o;
            int v;
            int index;
            unsigned int r;
            double d;

            if (self->base != 0)
                o = (Obj_82723848 *)((char *)self->base - 0x68);
            else
                o = 0;
            if (self->count >= 1) {
                v = self->val;
                index = fn_82697610(fn_826957D0(self, 0), v);
                if (index >= 0 && (r = fn_827A1630(o->fa0, index, 0)) != 0xffffffff)
                    d = (double)r;
                else
                    d = lbl_8200E890;
                fn_82681898(self->b, d);
            }
        }
    }
}
