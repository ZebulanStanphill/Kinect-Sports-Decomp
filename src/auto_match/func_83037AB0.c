typedef struct Ring_830379D8 { unsigned a; volatile unsigned b, c, d, e; int cs1[7]; int cs[7]; } Ring_830379D8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned fn_82FA52E8(void *heap);
void fn_83037AB0(Ring_830379D8 *r, unsigned p, unsigned n)
{
  unsigned old = r->b;
  RtlEnterCriticalSection(r->cs1);
  r->b = p + ((n + 3) & ~3u);
  if (p == r->c) {
    if (old != p) r->d = old;
  } else if (r->b > r->d) {
    r->d = r->b + 4;
  }
  RtlLeaveCriticalSection(r->cs1);
  RtlLeaveCriticalSection(r->cs);
}
