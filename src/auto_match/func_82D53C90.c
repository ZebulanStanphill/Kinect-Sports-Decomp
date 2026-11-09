void fn_82D53C90(unsigned int *a, int l, int r, int p4)
{
  unsigned int pivot;
  unsigned int t;
  int i;
  int j;

  for (;;) {
    pivot = a[(l + r) >> 1];
    j = r;
    i = l;
    do {
      while (a[i] < pivot) {
        i++;
      }
      while (pivot < a[j]) {
        j--;
      }
      if (j < i) break;
      if (j != i) {
        t = a[j];
        a[j] = a[i];
        a[i] = t;
      }
      j--;
      i++;
    } while (i <= j);
    if (l < j) {
      fn_82D53C90(a, l, j, p4);
    }
    if (i >= r) break;
    l = i;
  }
}
