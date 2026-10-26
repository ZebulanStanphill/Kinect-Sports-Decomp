extern void fn_82232D38(void *p);
extern void fn_822332E8(void *p);
extern void fn_82897D88(void *p);
extern char lbl_821970C0[];
extern char lbl_8219737C[];

typedef struct { void *vt; } Sub;

void fn_82241030(void **param_1)
{
  Sub *s = (Sub *)(param_1 + 0x83);
  *param_1 = lbl_8219737C;
  s->vt = lbl_821970C0;
  fn_82897D88(s);
  fn_822332E8(param_1 + 0x39);
  fn_82232D38(param_1);
}
