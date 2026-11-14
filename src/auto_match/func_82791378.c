typedef struct { void **data; int size; } Vec_82791378;
typedef struct { unsigned short *text; unsigned int count; } Item_82791378;
extern void fn_8268B330(void *self);
extern void fn_8268B508(void *self, const unsigned short *text, unsigned int count);
extern unsigned char fn_8278FD18(void *);

void *fn_82791378(void *self, char *list)
{
  Vec_82791378 *vec;
  int i;
  fn_8268B330(self);
  vec = (Vec_82791378 *)(list + 0xc); i = 0;
  for (;;) {
    Item_82791378 *it;
    unsigned int n;
    unsigned int count;
    const unsigned short *src;
    unsigned char bad;
    if (vec == 0 || i < 0 || i >= vec->size) bad = 1; else bad = 0;
    if (bad) break;
    it = (Item_82791378 *)vec->data[i];
    n = it->count;
    src = it->text;
    if (n != 0 && fn_8278FD18(it))
      n--;
    fn_8268B508(self, src, n);
    if (i < vec->size) i++;
  }
  return self;
}
