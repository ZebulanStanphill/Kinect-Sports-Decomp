typedef struct Res_83023908 Res_83023908;
typedef struct {
    void *s0, *s1;
    void (*f8)(Res_83023908 *);
    char pad[0x48 - 0xc];
    void (*f48)(Res_83023908 *);
} VT_83023908;
struct Res_83023908 {
    VT_83023908 *vt;
};
typedef struct {
    char pad[0x2c];
    Res_83023908 *a;
    Res_83023908 *b;
    Res_83023908 *c;
    void *d;
} Obj_83023908;

extern void fn_830234C8(Obj_83023908 *);
extern void fn_82FA5190(void *, void *);
extern void *lbl_831BC770;

void fn_83023908(Obj_83023908 *o)
{
    fn_830234C8(o);
    if (o->c != 0) {
        o->c->vt->f48(o->c);
        o->c = 0;
    }
    if (o->b != 0) {
        o->b->vt->f48(o->b);
        o->b = 0;
    }
    if (o->a != 0) {
        o->a->vt->f8(o->a);
        o->a = 0;
    }
    if (o->d != 0) {
        fn_82FA5190(lbl_831BC770, o->d);
        o->d = 0;
    }
}
