typedef struct V3_82BE4378 { int a, b, c; } V3_82BE4378;
typedef struct Slot_82BE4378 { V3_82BE4378 v; int pad; } Slot_82BE4378;
typedef struct Tmp_82BE4378 { char b[24]; } Tmp_82BE4378;
typedef struct Obj_82BE4378 { char pad[0x70]; V3_82BE4378 v70; } Obj_82BE4378;
extern void fn_82BA02A8(V3_82BE4378 *v);
extern V3_82BE4378 *fn_82BEEB18(Tmp_82BE4378 *t, void *a, void *b);
extern V3_82BE4378 *fn_82BEEBC0(Tmp_82BE4378 *t, V3_82BE4378 *a, V3_82BE4378 *b);
extern void fn_82BEEC00(V3_82BE4378 *v);

void fn_82BE4378(Obj_82BE4378 *o)
{
    Slot_82BE4378 y, x, z;
    Tmp_82BE4378 t;
    fn_82BA02A8(&x.v);
    fn_82BA02A8(&y.v);
    fn_82BA02A8(&z.v);
    x.v = *fn_82BEEB18(&t, (char *)o + 0x88, (char *)o + 0x7c);
    fn_82BEEC00(&x.v);
    y.v = *fn_82BEEB18(&t, (char *)o + 0xa0, (char *)o + 0x7c);
    fn_82BEEC00(&y.v);
    o->v70 = *fn_82BEEBC0(&t, &x.v, &y.v);
    fn_82BEEC00(&o->v70);
}
