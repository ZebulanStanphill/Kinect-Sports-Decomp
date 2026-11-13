typedef struct Obj_8270D6C0 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    char pad20[8];
    char name[0x20];    /* 0x28 */
    int f48;
} Obj_8270D6C0;

extern void fn_8268CC00(void *s);
extern void fn_8270D3E8(Obj_8270D6C0 *self, int a, int b, int c, float f, int d);

Obj_8270D6C0 *fn_8270D6C0(Obj_8270D6C0 *self, int a, int b, int c, float f, int d, int e)
{
    self->f0 = 0;
    self->f8 = 0;
    self->fc = 0;
    self->f10 = 0;
    self->f14 = 0;
    self->f18 = 0;
    self->f1c = 0;
    fn_8268CC00(self->name);
    self->f48 = e;
    fn_8270D3E8(self, a, b, c, f, d);
    return self;
}
