typedef struct {
  unsigned int a;
  unsigned int b;
} S;

extern void fn_82ACAC38(unsigned int *, unsigned int *);
extern void fn_82ACBB48(unsigned int *, int);

void fn_82ACC410(S *param_1, S *param_2)
{
  unsigned int v;

  v = param_2->a;
  param_1->b = 1;
  param_1->a = v;
  fn_82ACBB48(&param_1->b, (~param_2->b & 1) == 0 ? 0x1f : (int)(*(unsigned int *)param_2->b * 0x20 - 1));
  fn_82ACAC38(&param_1->b, &param_2->b);
}
