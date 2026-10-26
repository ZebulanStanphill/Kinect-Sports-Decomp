extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82BD62B8(void *p);

typedef struct { int pad[0x14]; void *items[0x28]; char cs[0x1c]; } Self;

unsigned char fn_82BD5968(Self *s, int i)
{
  unsigned char r = 0;

  RtlEnterCriticalSection(s->cs);
  if (s->items[i] != 0) {
    r = 0x70000000 == fn_82BD62B8(s->items[i]);
  }
  RtlLeaveCriticalSection(s->cs);
  return r;
}
