typedef struct { void *vt; int pad[0x11]; float f48; } Obj_824B4E60;
extern void *fn_8265C9E0(unsigned);
extern void fn_824B4310(void *, void *);
extern char lbl_821C02C4[];
extern float lbl_821CC160;

Obj_824B4E60 *fn_824B4E60(void *arg)
{
  Obj_824B4E60 *p = (Obj_824B4E60 *)fn_8265C9E0(0x4c);
  if (p != 0) {
    float f;
    fn_824B4310(p, arg);
    f = lbl_821CC160;
    p->vt = lbl_821C02C4;
    p->f48 = f;
    return p;
  }
  return 0;
}
