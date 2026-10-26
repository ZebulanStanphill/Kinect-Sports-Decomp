extern void fn_826C0B08(void *p);
extern void fn_8268C210(void *p);
extern void fn_82712F50(void *p, void *a);
extern double lbl_82005710;
extern char lbl_8200F1EC[];
extern char lbl_8200F198[];

typedef struct {
    void *vt;
    int f4[3];
    void *vt2;
    int f14[7];
    double d30;
    int f38;
} Obj;

Obj *fn_827133F0(Obj *self, void *a)
{
    double d;
    fn_826C0B08(self);
    d = lbl_82005710;
    self->vt = lbl_8200F1EC;
    self->d30 = d;
    self->vt2 = lbl_8200F198;
    fn_8268C210(&self->f38);
    fn_82712F50(self, a);
    return self;
}
