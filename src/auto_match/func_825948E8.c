extern int fn_82529A38(int a, void *b, void *c);
extern void fn_82558150(void *a);
extern int fn_82587AC0(void *a);

int fn_825948E8(void *param_1)
{
  struct { char a[0x4b]; char b[0x55]; } s;
  fn_82558150(s.a);
  fn_82529A38(fn_82587AC0(s.b), s.a, param_1);
  return 1;
}
