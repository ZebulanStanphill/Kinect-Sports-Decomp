typedef struct { int a; char *cur; char *end; unsigned short elemSize; unsigned short blockCount; unsigned short count; } Pool;
extern void fn_8251E450(Pool *p, unsigned short n);

void *fn_8251E4D0(Pool *p)
{
  char *r;
  if (p->cur == p->end) {
    fn_8251E450(p, p->blockCount);
  }
  p->count++;
  r = p->cur;
  p->cur = r + p->elemSize;
  return r;
}
