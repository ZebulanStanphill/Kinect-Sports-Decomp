void fn_829BF450(int param_1,int *param_2,int param_3,int *param_4,__int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  
  param_5 = param_5 + -1;
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = *(unsigned int *)(param_1 + 0x70);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    do {
      iVar4 = 0;
      piVar3 = param_2;
      if (0 < iVar1) {
        do {
          if ((unsigned __int64)uVar2 != 0) {
            puVar5 = (unsigned char *)((*param_4 + iVar4) - iVar1);
            puVar6 = (unsigned char *)(*(int *)(*piVar3 + param_3) + -1);
            uVar7 = (unsigned __int64)uVar2;
            do {
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + iVar1;
              *puVar5 = *puVar6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar1);
      }
      param_5 = param_5 + -1;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
    } while (-1 < param_5);
  }
  return;
}

