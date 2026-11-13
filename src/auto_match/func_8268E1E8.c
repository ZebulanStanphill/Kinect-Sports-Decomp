typedef struct Desc_8268E1E8 {
    int pad0[2];
    int a;
    short size;
    short b;
    int c;
    int d;
    int e;
    int f;
} Desc_8268E1E8;

typedef struct Obj_8268E1E8 {
    char pad0[0xc];
    int context;
} Obj_8268E1E8;

extern void fn_8268E140(Obj_8268E1E8 *self, int context, Desc_8268E1E8 *desc, int x, int y);

void fn_8268E1E8(Obj_8268E1E8 *self, int x, int y)
{
    Desc_8268E1E8 d;
    d.a = 0;
    d.size = 0x10;
    d.b = 0;
    d.c = 0;
    d.d = 0;
    d.e = 0;
    d.f = 0;
    fn_8268E140(self, self->context, &d, x, y);
}
