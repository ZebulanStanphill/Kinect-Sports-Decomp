void fn_829BF4F8(int param_1,int *param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned char uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  
  uVar2 = *(unsigned int *)(param_1 + 0x70);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    piVar4 = (int *)(param_4 + -4);
    do {
      iVar5 = 0;
      piVar4 = piVar4 + 1;
      iVar3 = *(int *)(*param_2 + param_3);
      param_3 = param_3 + 4;
      if ((unsigned __int64)uVar2 != 0) {
        puVar6 = (unsigned char *)(*piVar4 + -3);
        uVar7 = (unsigned __int64)uVar2;
        do {
          uVar1 = *(unsigned char *)(iVar5 + iVar3);
          iVar5 = iVar5 + 1;
          puVar6[5] = uVar1;
          puVar6[4] = uVar1;
          puVar6 = puVar6 + 3;
          *puVar6 = uVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

