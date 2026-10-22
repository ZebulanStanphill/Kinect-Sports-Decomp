extern void fn_82232D38(void *);
extern void fn_822332E8(void *);
extern void fn_82897D88(void *);
extern char lbl_821970C0[];
extern char lbl_82197534[];
extern char lbl_821980AC[];

static void dtorA(void **p) { *p = lbl_821970C0; fn_82897D88(p); }
static void dtorB(void **p) { *p = lbl_82197534; fn_82897D88(p); }

void fn_82255148(void **param_1)
{
  *param_1 = lbl_821980AC;
  dtorA(param_1 + 0xcd);
  dtorA(param_1 + 0xb7);
  dtorB(param_1 + 0x9d);
  dtorB(param_1 + 0x83);
  fn_822332E8(param_1 + 0x39);
  fn_82232D38(param_1);
}
