extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_83016050(void *, int);
extern int fn_82FAB9C0(unsigned int, int);
int fn_83016110(void *param_1,int param_2,int param_3)
{
  unsigned int u;
  int r;
  RtlEnterCriticalSection(param_1);
  u = fn_83016050(param_1,param_2);
  if (u != 0) {
    r = fn_82FAB9C0(u,param_3);
    RtlLeaveCriticalSection(param_1);
    return r;
  }
  RtlLeaveCriticalSection(param_1);
  return 0;
}
