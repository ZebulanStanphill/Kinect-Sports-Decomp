typedef struct Obj_82A4AB90 Obj_82A4AB90;
typedef struct {
    void *v0;
    int (*fn4)(Obj_82A4AB90 *);
} Vt_82A4AB90;
struct Obj_82A4AB90 { Vt_82A4AB90 *vt; };

typedef struct {
    char pad[0x1c];
    Obj_82A4AB90 a;
    char pad2[0x54 - 0x20];
    Obj_82A4AB90 b;
} Self_82A4AB90;

void fn_82A4AB90(Self_82A4AB90 *self)
{
    if (self->a.vt->fn4(&self->a) >= 0) {
        self->b.vt->fn4(&self->b);
    }
}
