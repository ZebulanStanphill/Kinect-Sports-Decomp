typedef unsigned int uint;
extern int fn_8265C990();

typedef struct S {
  uint count;
  uint f4;
  uint *arr;
  uint fc;
  uint *list;
  uint f14;
  uint f18;
  uint f1c;
} S;

int fn_828FA6F8(S *param_1)
{
  uint i;
  uint *next;

  while (param_1->list != 0) {
    next = (uint *)*param_1->list;
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
