extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_82FF9B18(void *);
extern void fn_82FFDF28(void *, void *, void *);
extern void fn_82FFF348(void *, void *, void *);

typedef struct { void *a; void *b; char *node; void *d; } Iter;

void fn_82FFBC38(char *self, void *key)
{
  Iter it;
  char out[16];

  RtlEnterCriticalSection(self + 0x50);
  fn_82FFDF28(&it, self + 0x90, key);
  if (it.node != 0 && fn_82FF9B18(it.node + 8) == 0) {
    fn_82FFF348(out, self + 0x90, &it);
  }
  RtlLeaveCriticalSection(self + 0x50);
}
