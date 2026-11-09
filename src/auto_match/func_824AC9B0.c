extern unsigned int lbl_821BFDDC;
typedef struct Src_824AC9B0 { char pad[0x48]; int f48; int f4c; int f50; int f54; } Src_824AC9B0;
typedef struct Obj_824AC9B0 { void *vt; char pad[0x38]; int f3c; int f40; int f44; int f48; } Obj_824AC9B0;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82F53A20(Obj_824AC9B0 *o, Src_824AC9B0 *s);

Obj_824AC9B0 *fn_824AC9B0(Src_824AC9B0 *s)
{
  Obj_824AC9B0 *o = (Obj_824AC9B0 *)fn_8265C9E0(0x4c);
  if (o != 0) {
    fn_82F53A20(o, s);
    o->vt = &lbl_821BFDDC;
    o->f3c = s->f48;
    o->f40 = s->f4c;
    o->f44 = s->f50;
    o->f48 = s->f54;
    return o;
  }
  return 0;
}
