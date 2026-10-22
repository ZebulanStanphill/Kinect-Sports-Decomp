typedef struct { unsigned int hi, lo; } Key;

static unsigned char key_lt(const Key *a, const Key *b)
{
  return a->hi < b->hi || (a->hi == b->hi && a->lo < b->lo);
}

void fn_82D5F318(Key *a, int lo, int hi, int cmp)
{
  int j = hi;
  int i = lo;
  Key pivot = a[(lo + hi) >> 1];
  do {
    while (key_lt(&a[i], &pivot)) i++;
    while (key_lt(&pivot, &a[j])) j--;
    if (j < i) break;
    if (j != i) {
      Key t = a[j];
      a[j] = a[i];
      a[i] = t;
    }
    j--;
    i++;
  } while (i <= j);
  if (lo < j) fn_82D5F318(a, lo, j, cmp);
  if (i < hi) fn_82D5F318(a, i, hi, cmp);
}
