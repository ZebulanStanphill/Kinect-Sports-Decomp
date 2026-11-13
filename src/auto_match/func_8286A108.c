extern int fn_82877520();
extern int fn_82A1E658();
extern int iRam00000004;


void fn_8286A108(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x424);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    iVar3 = iVar1;
    if (iVar2 == *(int *)(param_1 + 0x424)) {
      *(int *)(param_1 + 0x424) = iVar1;
      iVar3 = iRam00000004;
    }
    iRam00000004 = iVar3;
    fn_82A1E658(*(unsigned int *)(iVar2 + 0x1c));
    fn_82877520(iVar2);
    iVar2 = iVar1;
  }
  return;
}

