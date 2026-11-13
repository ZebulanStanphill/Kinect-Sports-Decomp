extern int fn_8265C990();

typedef struct S {
  unsigned int count;
  unsigned int f4;
  unsigned int *arr;
  unsigned int fc;
  unsigned int *list;
  unsigned int f14;
  unsigned int f18;
  unsigned int f1c;
} S;

int fn_828FA6F8(S *param_1)
{
  unsigned int i;
  unsigned int *next;

  while (param_1->list != 0) {
    next = (unsigned int *)*param_1->list;
    fn_8265C990(param_1->list, 0x24810000);
    param_1->list = next;
  }
  param_1->f14 = 0;
  param_1->f18 = 0;
  param_1->f1c = 0;
  for (i = 0; i < param_1->count; i++) {
    param_1->arr[i] &= ~0x20;
  }
  return 0;
}
