// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
typedef struct { int first; int second; unsigned char flag; } Pair_82279398;
extern void fn_82273C88(Pair_82279398 *p);
extern void fn_82273CD8(Pair_82279398 *p, int n);
extern int fn_82526C70(char *buf, int n, const char *fmt, ...);
extern void fn_82672C20(int a, char *name, Pair_82279398 *p, int n);

void fn_82279398(int param_1, int param_2)
{
  Pair_82279398 pair;
  char buf[128];

  if (param_2 != *(int *)(param_1 + 0x25c)) {
    pair.first = 0;
    pair.second = 0;
    fn_82273CD8(&pair, 2);
    pair.flag = (param_2 != 0);
    fn_82526C70(buf, 0x80, "%s.SetDisabled", param_1 + 0x18);
    fn_82672C20(*(int *)(param_1 + 8), buf, &pair, 1);
    *(int *)(param_1 + 0x25c) = param_2;
    fn_82273C88(&pair);
  }
}
