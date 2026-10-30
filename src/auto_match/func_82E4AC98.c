typedef int (*code)();
typedef struct O82E4AC98 {
  void *vt[3];
  char pad0[0x94 - 0xc];
  void *a94;
  void *a98;
  int a9c;
  char pad1[0xb8 - 0xa0];
  void *ab8;
  int *abc;
} O82E4AC98;
extern void fn_82E499E0(void *);
extern void fn_82E4A008(void *);
extern void fn_82E4ABA8(void *);
extern void fn_82E4FE40(void *);
extern void fn_82E50EA0(void *);
extern unsigned int lbl_82153B60;
extern unsigned int lbl_82153BE8;
extern unsigned int lbl_82153BF8;

void fn_82E4AC98(O82E4AC98 *p)
{
  p->vt[0] = &lbl_82153BF8;
  p->vt[1] = &lbl_82153BE8;
  p->vt[2] = &lbl_82153B60;
  if (p->a9c != -1) {
    fn_82E499E0(p);
  }
  if (p->a94 != 0) {
    fn_82E4FE40(p->a94);
  }
  p->a94 = 0;
  if (p->a98 != 0) {
    fn_82E4FE40(p->a98);
  }
  p->a98 = 0;
  if (p->ab8 != 0) {
    fn_82E4A008(p->ab8);
  }
  if (p->ab8 != 0) {
    fn_82E4FE40(p->ab8);
  }
  p->ab8 = 0;
  if (p->abc != 0) {
    (*(code *)(*(int *)p->abc + 8))(p->abc);
    p->abc = 0;
  }
  fn_82E50EA0((char *)p + 0x58);
  fn_82E4ABA8((char *)p + 8);
}
