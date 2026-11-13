extern void *lbl_82023970[];

typedef struct Obj_82897458 {
    void **vt;
    int f4;
    int f8;
    int owner;
    int f10;
    int a[4];
    int b[4];
    unsigned char c[4];
} Obj_82897458;

void fn_82897458(Obj_82897458 *self, int owner)
{
    int i;
    self->owner = owner;
    self->vt = lbl_82023970;
    self->f4 = 0;
    self->f8 = 0;
    self->f10 = 0;
    for (i = 0; i < 4; i++) {
        self->b[i] = 0;
        self->a[i] = 0;
        self->c[i] = 0;
    }
}
