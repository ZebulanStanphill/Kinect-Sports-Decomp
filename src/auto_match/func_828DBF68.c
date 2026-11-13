extern unsigned strlen(const char *);
extern int fn_82230360(int, char *, unsigned);
extern int fn_8224BE90(int, char *, int, int, int, int);
extern int fn_828B5FC8(int, int, int);
extern int fn_828E9D90(int);
extern int fn_828E9DA8(int);
extern unsigned fn_828E9FF8(int, int);
extern int fn_828EA180(int, int, int);
static __forceinline unsigned Rd(int w, int n)
{
  int a = fn_828E9DA8(w);
  int b = fn_828E9D90(w);
  if (a - b >= n) return fn_828E9FF8(w, n);
  return 0;
}
void fn_828DBF68(int param_1, int param_2)
{
  int iVar2, iVar3;
  char *pcVar5;
  char cVar1;
  char acStack_120[0x100];
  *(unsigned *)(param_1 + 0x94) = Rd(param_2, 4);
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 >= 0x40) fn_828EA180(param_2, param_1 + 0x98, 8);
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 1 || fn_828E9FF8(param_2, 1) == 0) *(int *)(param_1 + 0xa0) = 0;
    else *(unsigned *)(param_1 + 0xa0) = Rd(param_2, 4);
    *(unsigned *)(param_1 + 0x80) = Rd(param_2, 2);
    *(unsigned *)(param_1 + 0x84) = Rd(param_2, 0x10);
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 1 || fn_828E9FF8(param_2, 1) == 0) iVar2 = 1;
    else iVar2 = Rd(param_2, 2) + 1;
    *(int *)(param_1 + 0x88) = iVar2;
    *(unsigned *)(param_1 + 0x8c) = Rd(param_2, 2);
    *(unsigned *)(param_1 + 0x90) = Rd(param_2, 0x10);
    fn_828B5FC8(param_1 + 0xc0, *(int *)(param_1 + 0x6c), param_2);
  }
  iVar2 = fn_828E9DA8(param_2);
  iVar3 = fn_828E9D90(param_2);
  if (iVar2 - iVar3 >= 1 && fn_828E9FF8(param_2, 1) != 0) {
    fn_8224BE90(param_2, acStack_120, 0x100, 1, 0, 0);
    fn_82230360(param_1 + 0xa4, acStack_120, strlen(acStack_120));
  }
}
