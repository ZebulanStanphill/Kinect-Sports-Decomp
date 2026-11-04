extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
typedef struct Ring_830379D8 { unsigned a; volatile unsigned b, c, d, e; char pad[0x1c]; int cs[6]; } Ring_830379D8;
unsigned fn_830379D8(Ring_830379D8 *r, int n)
{
  unsigned sz = (n + 4U) & 0xfffffffc;
  unsigned a;
  RtlEnterCriticalSection(r->cs);
  a = r->a;
  if (a > r->b) {
    if ((int)sz > (int)(a - r->b)) {
fail:
      RtlLeaveCriticalSection(r->cs);
      return 0;
    }
  } else if ((int)sz > (int)(r->e - r->b)) {
    if ((a == r->b || a != r->d) && (int)sz <= (int)(a - r->c)) {
      return r->c;
    }
    goto fail;
  }
  return r->b;
}
