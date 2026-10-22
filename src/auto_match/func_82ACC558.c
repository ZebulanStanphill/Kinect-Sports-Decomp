typedef struct {
  unsigned int a;
  unsigned int b;
  int c;
  int d;
  int e;
} S;

extern void fn_82ACC398(S *, void *);
extern int fn_82ABE9F0(void *, unsigned int, int);

void fn_82ACC558(S *param_1, void *param_2)
{
  int n;

  fn_82ACC398(param_1, param_2);
  n = (~param_1->b & 1) == 0 ? 0x1f : (int)(*(unsigned int *)param_1->b * 0x20 - 1);
  param_1->d = n;
  param_1->c = fn_82ABE9F0(param_2, n * 4, 0);
  param_1->e = 0;
}
