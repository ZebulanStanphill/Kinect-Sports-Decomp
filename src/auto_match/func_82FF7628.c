extern int fn_82FF6128();
extern int fn_82FF7548();
extern int fn_82FF7DB0();


__int64 fn_82FF7628(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar3;
  unsigned int *puVar6;
  
  iVar4 = fn_82FF7548(param_1,param_3,param_2);
  if (iVar4 == 0) {
    uVar2 = -(unsigned __int64)((param_5 & 0xff) != 0);
    return ((uVar2 & 0x3f) << 0x20 | uVar2 & 0x33) + 1;
  }
  puVar1 = *(unsigned int **)(iVar4 + 8);
  for (puVar6 = *(unsigned int **)(iVar4 + 4);
      (puVar6 != puVar1 && ((unsigned __int64)*puVar6 != (param_4 & 0xffffffff))); puVar6 = puVar6 + 1) {
  }
  if (puVar6 == puVar1) {
    if ((param_5 & 0xff) != 0) {
      puVar5 = (unsigned int *)fn_82FF7DB0((int *)(iVar4 + 4));
      if (puVar5 != (unsigned int *)0x0) {
        *puVar5 = (int)param_4;
      }
      goto LAB_82ff7710;
    }
  }
  else if ((param_5 & 0xff) == 0) {
    if (1 < (unsigned int)((int)puVar1 - (int)*(unsigned int **)(iVar4 + 4) >> 2)) {
      *puVar6 = puVar1[-1];
    }
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -4;
LAB_82ff7710:
    lVar3 = fn_82FF6128(iVar4,param_4,param_5);
    if ((int)lVar3 == 1) {
      return lVar3;
    }
    if (1 < (unsigned int)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2)) {
      *puVar6 = *(unsigned int *)(*(int *)(iVar4 + 8) + -4);
    }
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -4;
    return lVar3;
  }
  return 1;
}

