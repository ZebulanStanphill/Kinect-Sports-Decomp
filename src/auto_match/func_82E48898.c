extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82E47918(void *, int);
extern int fn_82E50338(void *, unsigned short *);
static __forceinline int ok(int t){ return t == 5 || t == 0xd || t == 0x13 || t == 0x15 || t == 0x1f || t == 0x48 || t == 0x1011; }

int fn_82E48898(char *self, int a, unsigned short *p)
{
 void *obj; int hr; int t;
 RtlEnterCriticalSection(self + 4);
 obj = fn_82E47918(self, a);
 t = *p;
  if (ok(t)) { if (obj == 0) hr = 0x8007000e; else hr = fn_82E50338(obj, p);} else hr = 0xc00d36bd;
 RtlLeaveCriticalSection(self + 4);
 return hr;
}
