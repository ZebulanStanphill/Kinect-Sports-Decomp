typedef struct { void **data; int size; } Vec_827912D8;
typedef struct { unsigned short *text; unsigned int count; } Item_827912D8;
extern unsigned char fn_8278FD18(void *);

unsigned int fn_827912D8(char *self)
{
  Vec_827912D8 *vec;
  int i;
  unsigned int total;
  total = 0;
  vec = (Vec_827912D8 *)(self + 0xc); i = 0;
  for (;;) {
    Item_827912D8 *it;
    unsigned int n;
    unsigned char bad;
    if (vec == 0 || i < 0 || i >= vec->size) bad = 1; else bad = 0;
    if (bad) break;
    it = (Item_827912D8 *)vec->data[i];
    n = it->count;
    if (n != 0 && fn_8278FD18(it))
      n--;
    total += n;
    if (i < vec->size) i++;
  }
  return total;
}
