typedef struct {
  unsigned short key;
  unsigned short value;
} Elem;

void fn_83095D20(Elem *a, int l, int r, int p4)
{
  Elem pivot;
  Elem t;
  int i;
  int j;

  for (;;) {
    pivot = a[(l + r) >> 1];
    j = r;
    i = l;
    do {
      while (a[i].key < pivot.key) {
        i++;
      }
      while (pivot.key < a[j].key) {
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
      fn_83095D20(a, l, j, p4);
    }
    if (i >= r) break;
    l = i;
  }
}
