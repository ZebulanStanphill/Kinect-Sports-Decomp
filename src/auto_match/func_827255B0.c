extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82720748();


void fn_827255B0(int param_1)
{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int *p;
  int v;
  int aiStack_20[2];

  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1, 0);
  fn_82696D38(aiStack_20, uVar3, uVar1, -1, 0);
  iVar2 = *(int *)(param_1 + 0x18);
  fn_82720748(iVar2, *(unsigned int *)(param_1 + 8), aiStack_20,
              *(unsigned int *)(param_1 + 0x1c) - 1,
              ((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc)) >> 4)
              + (int)((*(unsigned int *)(iVar2 + 0x1c) & 0x7ffffff) * 0x20) - 0x21);
  p = (int *)aiStack_20[0];
  v = p[2] - 1;
  p[2] = v;
  if (v == 0) {
    fn_826944C8(p);
  }
  return;
}
