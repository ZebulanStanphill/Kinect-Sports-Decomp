extern void fn_82681898(void *p);
extern void *fn_826957D0(void *self, int index);
extern double fn_826972E0(void *obj, int key);
extern double fn_82F68918(double x);
extern double lbl_82005730;

typedef struct Obj_827129C8 {
    int pad0;
    void *x04;
    int pad8[4];
    int x18;
} Obj_827129C8;

void fn_827129C8(Obj_827129C8 *self)
{
    int key = self->x18;
    fn_82F68918(fn_826972E0(fn_826957D0(self, 0), key) + lbl_82005730);
    fn_82681898(self->x04);
}
