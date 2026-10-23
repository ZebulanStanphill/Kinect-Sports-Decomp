typedef struct Obj Obj;
typedef void (*VFn)(Obj *);
struct Obj { VFn *vt; };
extern void fn_82631C78(int, int, int, int);
extern int lbl_8320A898;

void fn_8258A880(Obj **param_1, int param_2)
{
  Obj *o;
  fn_82631C78(lbl_8320A898, 0, 0x28, 0x58);
  o = param_1[param_2 + 0x2eeb];
  o->vt[2](o);
}
