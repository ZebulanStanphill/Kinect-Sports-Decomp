extern unsigned int lbl_821BFF20;
typedef struct Src_824AD578 { char pad[0x48]; int f48; int f4c; int f50; int f54; } Src_824AD578;
typedef struct Obj_824AD578 { void *vt; char pad[0x38]; int f3c; int f40; int f44; int f48; } Obj_824AD578;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82F53A20(Obj_824AD578 *o, Src_824AD578 *s);

Obj_824AD578 *fn_824AD578(Src_824AD578 *s)
{
  Obj_824AD578 *o = (Obj_824AD578 *)fn_8265C9E0(0x4c);
  if (o != 0) {
    fn_82F53A20(o, s);
    o->vt = &lbl_821BFF20;
    o->f3c = s->f48;
    o->f40 = s->f4c;
    o->f44 = s->f50;
    o->f48 = s->f54;
    return o;
  }
  return 0;
}
