// Built with link-time code generation together with its "ltcg_units" (objects.json):
// its instruction order depends on LTCG having compiled fn_826867E8 first.
extern int fn_826867E8(unsigned, int *);
extern int fn_82687270(int);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

void fn_826875D0(char *param_1, int param_2)
{
  void *cs = param_1 + 0xc;
  int v = param_2;
  RtlEnterCriticalSection(cs);
  if (*(unsigned *)(param_1 + 8) != 0) {
    fn_826867E8(*(unsigned *)(param_1 + 8) + 0xc, &param_2);
    fn_82687270(v);
  }
  RtlLeaveCriticalSection(cs);
}
