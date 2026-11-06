typedef struct Item_82F72B00 { unsigned a; int b; } Item_82F72B00;
extern char lbl_832635A0[];
extern Item_82F72B00 *fn_82F72318(char *pool, int size, int z);

int *fn_82F72B00(int *l, Item_82F72B00 *src)
{
  Item_82F72B00 *n;
  Item_82F72B00 *mem;
  if (*l != 9 && src->a != 0) {
    mem = fn_82F72318(lbl_832635A0, 8, 0);
    if (mem != 0) {
      mem->a = src->a;
      mem->b = src->b;
      n = mem;
    } else {
      n = 0;
    }
    if (n != 0) {
      int c = *l + 1;
      *l = c;
      l[c + 1] = (int)n;
    }
  }
  return l;
}
