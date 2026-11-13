extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D35448(unsigned int *param_1,__int64 param_2,int *param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  uVar1 = param_1[1];
  iVar3 = fn_82CE5410();
  uVar6 = (unsigned int)param_2;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar6) {
    lVar4 = ((unsigned __int64)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar4 <= (int)uVar6) {
      lVar4 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1,lVar4,0x30);
  }
  uVar2 = param_1[1];
  lVar4 = param_2 - (unsigned __int64)uVar2;
  uVar5 = ((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0xfffffff) * 0x10 +
          (unsigned __int64)*param_1;
  if (0 < lVar4) {
    do {
      if ((uVar5 & 0xffffffff) != 0) {
        *(unsigned int *)((int)uVar5 + 0x28) = 0;
      }
      uVar5 = uVar5 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_1[1] = uVar6;
  iVar3 = fn_82CE5410();
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar6) {
    lVar4 = ((unsigned __int64)param_1[5] & 0x3fffffff) << 1;
    if ((int)lVar4 <= (int)uVar6) {
      lVar4 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 3,lVar4,4);
  }
  param_2 = param_2 + -1;
  iVar3 = (int)param_2;
  while ((int)uVar1 <= iVar3) {
    *(int *)(param_1[4] * 4 + param_1[3]) = (int)param_2;
    param_2 = param_2 + -1;
    param_1[4] = param_1[4] + 1;
    iVar3 = (int)param_2;
  }
  if (*param_4 != 0x7fffffff) {
    *param_3 = *param_4 * 0x30 + *param_1;
  }
  return;
}

