extern int fn_8265C940();
extern int fn_82F151B8();


int fn_82F15418(int param_1,unsigned int param_2,int *param_3)

{
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  puVar6 = (unsigned int *)(param_1 + 0x28);
  *(unsigned int *)(param_1 + 0xc) = 0xb;
  *(unsigned int *)(param_1 + 8) = 0;
  iVar3 = 0;
  puVar5 = (unsigned int *)(param_1 + 0x24);
  do {
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
  } while (iVar3 < *(int *)(param_1 + 0xc));
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  if (-1 < (int)param_2) {
    *(unsigned int *)(param_1 + 4) = param_2;
    *(unsigned int *)(param_1 + 0x58) = 0;
    lVar1 = ((unsigned __int64)param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < param_2) {
      lVar1 = -1;
    }
    iVar3 = fn_8265C940(lVar1,0x248c8000);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 == 0) {
      *param_3 = 1;
      return param_1;
    }
  }
  if ((*param_3 == 0) && (lVar1 = 0, 0 < *(int *)(param_1 + 0xc))) {
    do {
      uVar2 = fn_8265C940(0x4c,0x248c8000);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_82F151B8(uVar2,lVar1,param_1,param_3);
      }
      *puVar6 = uVar4;
      if (*param_3 != 0) {
        return param_1;
      }
      lVar1 = lVar1 + 1;
      puVar6 = puVar6 + 1;
    } while ((int)lVar1 < *(int *)(param_1 + 0xc));
  }
  return param_1;
}

