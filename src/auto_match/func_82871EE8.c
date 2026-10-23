extern int fn_82834458(void *p);
extern void fn_82865170(void);
extern int fn_82866400(void);
extern void fn_82872B68(void *out, void *list, int node, int z);

static void inc(int *p) { *p = *p + 1; }

int fn_82871EE8(int param_1, int param_2)
{
  int iVar1;
  int *pi;
  char auStack_20[8];

  iVar1 = fn_82834458((void *)(param_1 + 0x24));
  pi = (int *)(iVar1 + 0xc);
  if (pi != 0) {
    *pi = param_2;
  }
  fn_82872B68(auStack_20, (void *)(param_1 + 0x24), iVar1, 0);
  fn_82865170();
  inc((int *)(fn_82866400() + 0x10));
  return 0x20110000;
}
