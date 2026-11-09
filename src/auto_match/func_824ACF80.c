extern unsigned int lbl_821BFE58;
typedef struct Src_824ACF80 { char pad[0x48]; int f48; int f4c; int f50; } Src_824ACF80;
typedef struct Obj_824ACF80 { void *vt; char pad[0x38]; int f3c; int f40; int f44; } Obj_824ACF80;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82F53A20(Obj_824ACF80 *o, Src_824ACF80 *s);

Obj_824ACF80 *fn_824ACF80(Src_824ACF80 *s)
{
  Obj_824ACF80 *o = (Obj_824ACF80 *)fn_8265C9E0(0x48);
  if (o != 0) {
    fn_82F53A20(o, s);
    o->vt = &lbl_821BFE58;
    o->f3c = s->f48;
    o->f40 = s->f4c;
    o->f44 = s->f50;
    return o;
  }
  return 0;
}
