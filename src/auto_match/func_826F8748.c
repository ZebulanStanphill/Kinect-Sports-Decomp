extern void fn_8267C488(void *);
extern void fn_8267C4F0(void *);
extern unsigned int lbl_82005928;

typedef struct Obj_826F8748 { int pad[2]; void *vt; void *f0c; void *f10; void *f14; void *f18; } Obj_826F8748;

void fn_826F8748(Obj_826F8748 *o)
{
  if (o->f18 != 0) {
    fn_8267C4F0(o->f18);
  }
  if (o->f14 != 0) {
    fn_8267C4F0(o->f14);
  }
  if (o->f10 != 0) {
    fn_8267C4F0(o->f10);
  }
  if (o->f0c != 0) {
    fn_8267C4F0(o->f0c);
  }
  o->vt = &lbl_82005928;
  fn_8267C488(o);
}
