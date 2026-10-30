typedef struct { unsigned bits; unsigned size; unsigned *data; } S_82963318;
unsigned fn_82963318(S_82963318 *param_1, unsigned param_2, unsigned *param_3)
{
  unsigned n = param_1->bits & 0xfffff;
  unsigned idx = n * param_2;
  if (idx + n > param_1->size) {
    if (param_3 != 0) *param_3 = 0;
    return 0;
  }
  if (param_3 == 0) return n;
  *param_3 = (unsigned)(param_1->data + idx);
  return n;
}
