extern int NtCreateEvent(void *h, void *attr, int type, unsigned char state);
extern void RtlInitializeCriticalSection(void *cs);

typedef struct {
  unsigned int a, b, c;
  unsigned int cs[7];
  void *ev;
  unsigned int p2;
  unsigned int z30, z34, z38, z3c;
  int m40;
} S;

int fn_82A37608(S *s, unsigned int param_2, unsigned int param_3)
{
  int hr;

  hr = NtCreateEvent(&s->ev, 0, 1, 0);
  if (hr < 0) return hr;
  s->a = param_3;
  s->b = param_3;
  s->z30 = 0;
  s->c = param_3;
  s->p2 = param_2;
  s->z34 = 0;
  s->z38 = 0;
  s->z3c = 0;
  s->m40 = -1;
  RtlInitializeCriticalSection(s->cs);
  return hr;
}
