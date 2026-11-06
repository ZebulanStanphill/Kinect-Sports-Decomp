typedef struct Color_827582C8 {
    unsigned char r, g, b, a;
} Color_827582C8;

typedef struct Obj_827582C8 {
    int a;
    int b;
    int c;
    int sub;
    Color_827582C8 color;
} Obj_827582C8;

extern void fn_8268C210(int *p);

Obj_827582C8 *fn_827582C8(Obj_827582C8 *self)
{
    Color_827582C8 c;
    self->a = 0;
    self->b = 0;
    self->c = 0;
    fn_8268C210(&self->sub);
    c.a = 0;
    c.g = 0xff;
    c.b = 0xff;
    c.r = 0xff;
    self->color = c;
    return self;
}
