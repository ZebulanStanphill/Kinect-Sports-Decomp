typedef struct { int key; float value; } Elem_82D12320;

static unsigned char elem_gt(const Elem_82D12320 *a, const Elem_82D12320 *b)
{
  return a->value - b->value > 0.0f;
}

void fn_82D12320(Elem_82D12320 *a, int lo, int hi, int cmp)
{
  int i, j;
  Elem_82D12320 pivot;
begin:
  j = hi;
  i = lo;
  pivot = a[(lo + hi) >> 1];
  do {
    while (elem_gt(&a[i], &pivot)) i++;
    while (elem_gt(&pivot, &a[j])) j--;
    if (j < i) break;
    if (j != i) {
      Elem_82D12320 t = a[j];
      a[j] = a[i];
      a[i] = t;
    }
    j--;
    i++;
  } while (i <= j);
  if (lo < j) fn_82D12320(a, lo, j, cmp);
  if (i < hi) {
    lo = i;
    goto begin;
  }
}
