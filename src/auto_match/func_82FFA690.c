typedef struct Msg_82FFA690 { short a; short type; int obj; char pad[0x20]; } Msg_82FFA690;
typedef struct Obj_82FFA690 { char pad[0x2c]; int f2c; int f30; } Obj_82FFA690;
extern void fn_82FF9FA8(Obj_82FFA690 *o);
extern int fn_8300F1A8(void);
extern void fn_8300F208(int a, Msg_82FFA690 *m, unsigned short h);
extern void fn_82FE6608(void);
extern int lbl_832642E4;

void fn_82FFA690(int unused, Obj_82FFA690 *o, int a, int b)
{
  Msg_82FFA690 m;
  fn_82FF9FA8(o);
  o->f2c = a;
  o->f30 = b;
  m.type = 0x18;
  m.obj = (int)o;
  fn_8300F208(lbl_832642E4, &m, fn_8300F1A8());
  fn_82FE6608();
}
