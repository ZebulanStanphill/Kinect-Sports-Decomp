void fn_8284DAE0(int param_1,char *param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned int uVar7;
  int iVar8;
  
  iVar4 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x48) + 0x3c);
  if (0 < iVar8) {
    iVar3 = 0;
    do {
      pcVar6 = (char *)(*(int *)(*(int *)(param_1 + 0x48) + 0x40) + iVar3);
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar8 = iVar4 * 0x3c + *(int *)(*(int *)(param_1 + 0x48) + 0x40);
        uVar7 = *(unsigned int *)(*(int *)(iVar8 + 0x34) * 8 + *(int *)(iVar8 + 0x30));
        goto LAB_8284db4c;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x3c;
    } while (iVar4 < iVar8);
  }
  uVar7 = 0;
LAB_8284db4c:
  *param_3 = uVar7;
  return;
}

