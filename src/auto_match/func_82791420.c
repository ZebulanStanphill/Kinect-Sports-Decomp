typedef struct { void **data; int size; } Vec_82791420;
typedef struct { char *text; int count; } Item_82791420;
extern int fn_827912D8(void *);
extern void fn_82773958(void *, int);
extern unsigned char fn_8278FD18(void *);
extern void *memcpy(void *, const void *, unsigned);

void fn_82791420(char *self, char **out)
{
  Vec_82791420 *vec;
  int i, len;
  fn_82773958(out, fn_827912D8(self) + 1);
  vec = (Vec_82791420 *)(self + 0xc); i = 0; len = 0;
  for (;;) {
    Item_82791420 *it;
    unsigned int n;
    unsigned int count;
    char *src;
    unsigned char bad;
    if (vec == 0 || i < 0 || i >= vec->size) bad = 1; else bad = 0;
    if (bad) break;
    it = (Item_82791420 *)vec->data[i];
    count = it->count;
    src = it->text;
    n = count;
    if (count != 0 && fn_8278FD18(it))
      n = count - 1;
    memcpy(*out + len * 2, src, n * 2);
    len += n;
    if (i < vec->size) i++;
  }
  *(unsigned short *)(*out + len * 2) = 0;
}
