typedef struct S S;
struct S {
  unsigned int a;
  unsigned int b;
  void (*cb)(unsigned int, S *);
};

int fn_82B77EE0(S *param_1)
{
  param_1->cb(param_1->a, param_1);
  return 0;
}
