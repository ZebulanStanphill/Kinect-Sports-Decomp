extern void fn_82D015D8(void *);
extern void fn_82D01D18(void *, int, int, int, void *);
extern void __debugbreak(void);

typedef struct Item_82CF9428 { int pad; unsigned f4; int pad2[11]; } Item_82CF9428;
typedef struct Pool_82CF9428 {
  int pad[0x5f];
  Item_82CF9428 *ptrs[0x20];
  int pad2[0x208 / 4 - 0x5f - 0x20];
  int count;
  Item_82CF9428 *cur;
  Item_82CF9428 *limit;
} Pool_82CF9428;

Item_82CF9428 *fn_82CF9428(Pool_82CF9428 *o, int elementSize, int align, int blockSize)
{
  Item_82CF9428 *it;
  int i;

  it = o->cur;
  if (it >= o->limit) {
    __debugbreak();
  }
  o->cur = it + 1;
  if (it != 0) {
    fn_82D01D18(it, elementSize, align, blockSize, (char *)o + 0x2c);
  }
  for (i = 0; i < o->count; i++) {
    if (o->ptrs[i]->f4 == it->f4) {
      fn_82D015D8(it);
      if (it + 1 == o->cur) o->cur = o->cur - 1;
      return o->ptrs[i];
    }
  }
  o->ptrs[o->count] = it;
  o->count = o->count + 1;
  return it;
}
