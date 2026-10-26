typedef struct { int pad[9]; char cs[0x1c]; void *heap; int pad2; unsigned int used; int pad3; } Pool;
extern Pool *lbl_83264210;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_82FA6408(void *p);
extern void fn_82FA6668(void *heap, void *p);

int fn_82FA5190(int idx, void *p)
{
  Pool *pool;
  unsigned int n;

  if (p != 0) {
    pool = &lbl_83264210[idx];
    RtlEnterCriticalSection(pool->cs);
    n = fn_82FA6408(p) + 8;
    pool->used -= n;
    fn_82FA6668(pool->heap, p);
    RtlLeaveCriticalSection(pool->cs);
  }
  return 1;
}
