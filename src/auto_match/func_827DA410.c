typedef struct Obj Obj;
typedef void (*VFn)(Obj *, int);
struct Obj { VFn *vt; };
extern void fn_82F64020(char *, int, char *);
extern char lbl_8201BBC0[];

void fn_827DA410(int param_1, int param_2)
{
  Obj *o;
  param_1 = param_2 * 0x28 + param_1;
  o = *(Obj **)(param_1 + 0x74);
  if (o != 0) {
    o->vt[0](o, 1);
  }
  *(Obj **)(param_1 + 0x74) = 0;
  fn_82F64020((char *)(param_1 + 0x54), 0x20, lbl_8201BBC0);
}
