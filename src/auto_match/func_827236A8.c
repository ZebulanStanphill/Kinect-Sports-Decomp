struct Base_827236A8;
typedef struct BaseVT_827236A8 {
    int pad[2];
    int (*f8)(struct Base_827236A8 *);
} BaseVT_827236A8;
typedef struct Base_827236A8 {
    BaseVT_827236A8 *vt;
} Base_827236A8;
typedef struct Obj_827236A8 {
    char pad0[0xa0];
    int fa0;
} Obj_827236A8;
typedef struct Self_827236A8 {
    int a;
    int b;
    Base_827236A8 *base;
    char pad1[0x18 - 0xc];
    int val;
    int count;
} Self_827236A8;
extern int fn_826957D0(Self_827236A8 *, int);
extern float fn_826972E0(int, int);
extern unsigned int fn_827A1460(int, float, float);
extern void fn_82681898(int, double);
extern double lbl_82005728;
extern double lbl_8200E890;

void fn_827236A8(Self_827236A8 *self)
{
    if (self->base != 0) {
        if (self->base->vt->f8(self->base) == 4) {
            Obj_827236A8 *o;
            float x;
            float y;
            unsigned int r;
            double d;

            if (self->base != 0)
                o = (Obj_827236A8 *)((char *)self->base - 0x68);
            else
                o = 0;
            if (self->count >= 2) {
                x = fn_826972E0(fn_826957D0(self, 0), self->val);
                y = fn_826972E0(fn_826957D0(self, 1), self->val);
                r = fn_827A1460(o->fa0, (float)(x * lbl_82005728), (float)(y * lbl_82005728));
                if (r != 0xffffffff)
                    d = (double)r;
                else
                    d = lbl_8200E890;
                fn_82681898(self->b, d);
            }
        }
    }
}
