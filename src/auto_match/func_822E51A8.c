typedef struct Comp_822E51A8 Comp_822E51A8;
struct Comp_822E51A8 {
    struct {
        int pad0;
        void (*f4)(Comp_822E51A8 *, float);
    } *vt;
};
typedef struct Slot_822E51A8 {
    Comp_822E51A8 *c;
    int pad;
} Slot_822E51A8;
typedef struct Obj_822E51A8 {
    char pad0[0x24];
    int m24;
    char pad28[0x1cc - 0x28];
    Slot_822E51A8 s[8];
    char pad20c[0x2d4 - 0x20c];
    int m2d4;
    int m2d8;
} Obj_822E51A8;

extern void fn_822E6160(void);

void fn_822E51A8(Obj_822E51A8 *o, float dt)
{
    if (o->m2d8 == 0 && o->m2d4 != 0) {
        fn_822E6160();
        o->m2d8 = 1;
    }
    if (o->m24 == 0) {
        if ((int)o->s[0].c != 0) {
            o->s[0].c->vt->f4(o->s[0].c, dt);
            o->s[1].c->vt->f4(o->s[1].c, dt);
            o->s[2].c->vt->f4(o->s[2].c, dt);
            o->s[3].c->vt->f4(o->s[3].c, dt);
            o->s[4].c->vt->f4(o->s[4].c, dt);
            o->s[5].c->vt->f4(o->s[5].c, dt);
            o->s[6].c->vt->f4(o->s[6].c, dt);
            o->s[7].c->vt->f4(o->s[7].c, dt);
        }
    }
}
