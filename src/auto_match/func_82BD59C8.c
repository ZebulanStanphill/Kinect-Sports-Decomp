typedef struct { int v[7]; } CS;
extern void RtlEnterCriticalSection(CS *cs);
extern void RtlLeaveCriticalSection(CS *cs);
extern void *fn_82BD4D50(void *p, int a);
extern int fn_82BDA3E8(void *o);
typedef struct { char pad[0xf0]; CS cs; } S;

int fn_82BD59C8(S *p, int a)
{
  int r = 0;
  void *o;
  RtlEnterCriticalSection(&p->cs);
  o = fn_82BD4D50(p, a);
  if (o != 0)
    r = fn_82BDA3E8(o);
  RtlLeaveCriticalSection(&p->cs);
  return r;
}
