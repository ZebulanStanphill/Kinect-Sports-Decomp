extern int fn_82D02880();


unsigned int fn_82D02F08(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar3 = *(unsigned int *)(param_1 + 0x14);
  iVar2 = fn_82D02880(uVar3);
  iVar4 = 0x1f;
  if (iVar2 < 0x20) {
    piVar5 = (int *)(param_1 + 0x94);
    do {
      iVar6 = *piVar5;
      if (iVar6 != 0) {
        do {
          uVar1 = *(unsigned int *)(iVar6 + 4) & 0xfffffffc;
          if (uVar3 < uVar1) {
            uVar3 = uVar1;
          }
          iVar2 = *(int *)(iVar6 + 0x14);
          if (*(int *)(iVar6 + 0x14) == 0) {
            iVar2 = *(int *)(iVar6 + 0x10);
          }
          iVar6 = iVar2;
        } while (iVar6 != 0);
        return uVar3;
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -1;
    } while (iVar2 <= iVar4);
  }
  return uVar3;
}

