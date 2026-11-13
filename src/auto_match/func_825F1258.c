extern int fn_825F0D40();
extern int fn_82BE4FB0();
extern int fn_82BE5000();


void fn_825F1258(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  if (1 < (unsigned int)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2)) {
    fn_82BE4FB0(*(unsigned int *)(*(int *)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x1c)));
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar2 = *(int *)(param_1 + 0x20) - iVar1 >> 2;
    iVar3 = (*(unsigned int *)(param_1 + 0x3c) + 1) -
            (int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + 1 & 0xffffffff) / (unsigned __int64)uVar2) *
            uVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    fn_82BE5000(*(unsigned int *)(iVar3 * 4 + iVar1));
    fn_825F0D40(param_1,*(unsigned int *)(param_1 + 0x3c));
  }
  return;
}

