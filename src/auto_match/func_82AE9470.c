extern void fn_82AC88B8(unsigned int *self, unsigned int id);
extern void fn_82ACA698(unsigned int *self, unsigned int id, int flag);
static __forceinline int lt9(unsigned x) { if (x < 9) return 1; return 0; }
void fn_82AE9470(unsigned int *param_1, unsigned int param_2)
{
  unsigned int *p; unsigned int i; i = 0; p = param_1+1;
  do { if (param_2 == *p) *p = 0; i = i + 1; p = p + 1; } while (lt9(i));
  fn_82AC88B8(param_1, param_2);
  fn_82ACA698(param_1, param_2, 1);
}
