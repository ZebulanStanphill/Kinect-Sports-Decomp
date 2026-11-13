void fn_83060438(int param_1)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 uVar7;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    piVar4 = (int *)(param_1 + 4);
    do {
      iVar2 = 0;
      *(unsigned char *)(param_1 + 0x14) = 1;
      lVar1 = (__int64)(*(int *)(param_1 + 8) - *piVar4 >> 3) + -1;
      if (0 < lVar1) {
        iVar3 = 0;
        do {
          puVar5 = (unsigned int *)(iVar3 + 8 + *piVar4);
          puVar6 = (unsigned __int64 *)(iVar3 + *piVar4);
          if (*(int *)*puVar5 < **(int **)puVar6) {
            uVar7 = *puVar6;
            *(unsigned int *)puVar6 = *puVar5;
            *(unsigned int *)((int)puVar6 + 4) = puVar5[1];
            *(unsigned __int64 *)(iVar3 + 8 + *piVar4) = uVar7;
            *(unsigned char *)(param_1 + 0x14) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 8;
        } while (iVar2 < (int)lVar1);
      }
    } while (*(char *)(param_1 + 0x14) == '\0');
  }
  return;
}

