void fn_8309BD88(unsigned int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
                  unsigned __int64 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  unsigned __int64 *puVar7;
  int *piVar8;
  __int64 lVar9;
  
  uVar3 = (unsigned int)param_2;
  if ((int)uVar3 < (int)param_5) {
    param_5 = param_2;
  }
  *(unsigned int *)(param_6 + 0x10) = param_4;
  iVar5 = (int)param_5;
  iVar1 = (int)uVar3 / iVar5;
  *(unsigned int *)(param_6 + 0x50) = param_1;
  *(unsigned int *)(param_6 + 0x54) = param_3;
  *(int *)(param_6 + 0x5c) = iVar1;
  trapWord(6,param_5,0);
  *(unsigned int *)(param_6 + 0x58) = 0;
  trapWord(5,param_5 & ~(((param_2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
  if (1 < iVar5) {
    piVar8 = (int *)(param_6 + 0xcc);
    lVar4 = param_5 - 1;
    iVar2 = iVar1;
    do {
      piVar6 = piVar8 + -0x19;
      puVar7 = (unsigned __int64 *)(param_6 + -8);
      lVar9 = 0xe;
      do {
        puVar7 = puVar7 + 1;
        piVar6 = piVar6 + 2;
        *(unsigned __int64 *)piVar6 = *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      piVar8[-1] = iVar2;
      lVar4 = lVar4 + -1;
      *piVar8 = iVar2 + iVar1;
      piVar8 = piVar8 + 0x1c;
      iVar2 = iVar2 + iVar1;
    } while (lVar4 != 0);
  }
  *(unsigned int *)(iVar5 * 0x70 + param_6 + -0x14) = uVar3;
  return;
}

