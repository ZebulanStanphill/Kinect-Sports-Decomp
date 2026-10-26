typedef struct { unsigned int *items; unsigned short count; } List;
void fn_82D89AF8(char *p, unsigned int v)
{
  List *l = *(List **)(p + 0x214);
  int i = 0;
  int n = l->count;
  if (0 < n) {
    unsigned int *e = l->items;
    do {
      if (*e == v) goto found;
      i++;
      e++;
    } while (i < n);
  }
  i = -1;
found:
  l->items[i] = 0;
}
