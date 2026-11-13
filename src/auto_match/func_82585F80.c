typedef struct Obj_82585F80 { int f00, f04; int inner; } Obj_82585F80;
extern int fn_82544528(void);
extern void fn_8263CBB0(unsigned int a, int b, int c, int d);
extern void fn_825D8490(int, float, int, int);
extern unsigned int lbl_8320A898;

void fn_82585F80(Obj_82585F80 *o, float v, int b)
{
  int r = fn_82544528();
  fn_8263CBB0(lbl_8320A898, 1, r, 0x40000000);
  fn_825D8490(o->inner, v, b, 1);
}
