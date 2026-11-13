extern int fn_82D94918();


unsigned char * fn_82D82418(unsigned char *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char uVar3;
  unsigned char bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_2 + 0x20);
  bVar4 = 0;
  if (iVar2 != 0) {
    uVar1 = *(unsigned int *)(iVar2 + 0x4c);
    iVar7 = 0;
    if (0 < (int)uVar1) {
      do {
        if ((iVar7 != 0) || (*(int *)(**(int **)(iVar2 + 0x48) + 0x10) != 0)) {
          fn_82D94918(param_3,*(unsigned int *)(iVar7 * 4 + *(int *)(iVar2 + 0x48)));
        }
        uVar1 = *(unsigned int *)(iVar2 + 0x4c);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar1);
    }
    bVar4 = (unsigned char)((unsigned char)(-(unsigned __int64)uVar1 >> 0x18) & ~(unsigned char)(uVar1 >> 0x18)) >> 7;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  piVar5 = *(int **)(param_2 + 0x34);
  if (piVar5 != piVar5 + iVar2) {
    do {
      iVar2 = *piVar5;
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        iVar6 = 0;
        do {
          fn_82D94918(param_3,*(unsigned int *)(iVar6 + *(int *)(iVar2 + 0x48)));
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)(iVar2 + 0x4c));
      }
      iVar2 = *(int *)(param_2 + 0x38);
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(iVar2 * 4 + *(int *)(param_2 + 0x34)));
  }
  if ((0 < iVar2) || (uVar3 = 0, bVar4 != 0)) {
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}

