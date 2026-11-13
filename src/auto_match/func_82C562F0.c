extern void *fn_82C53960(unsigned, unsigned);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
typedef struct Heap_82C562F0 { void *cs; } Heap_82C562F0;
void *fn_82C562F0(Heap_82C562F0 *h, unsigned size)
{
  void *r;
  unsigned n;
  if (size >= 0xfffffffb)
    return 0;
  RtlEnterCriticalSection(h->cs);
  n = (size + 3) & 0xfffffffc;
  if (n < 0xffffffff) {
    void *p = fn_82C53960(n, 0);
    if (p != 0) {
      r = p;
      RtlEnterCriticalSection(h->cs);
      RtlLeaveCriticalSection(h->cs);
    } else {
      r = 0;
    }
  }
  RtlLeaveCriticalSection(h->cs);
  return r;
}
