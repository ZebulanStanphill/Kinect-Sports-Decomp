extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D34E10(unsigned int *param_1,unsigned __int64 param_2,int *param_3,unsigned short *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  uVar1 = param_1[1];
  param_2 = param_2 & 0xffff;
  iVar3 = fn_82CE5410();
  uVar6 = (unsigned int)param_2;
  if ((param_1[2] & 0x3fffffff) < uVar6) {
    uVar5 = ((unsigned __int64)param_1[2] & 0x3fffffff) << 1;
    if ((unsigned int)uVar5 <= uVar6) {
      uVar5 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1,uVar5,0x14);
  }
  uVar2 = param_1[1];
  lVar4 = param_2 - uVar2;
  uVar5 = ((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
          (unsigned __int64)*param_1;
  if (0 < lVar4) {
    do {
      if ((uVar5 & 0xffffffff) != 0) {
        *(unsigned short *)((int)uVar5 + 0x10) = 0;
      }
      uVar5 = uVar5 + 0x14;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_1[1] = uVar6;
  iVar3 = fn_82CE5410();
  if ((param_1[5] & 0x3fffffff) < uVar6) {
    uVar5 = ((unsigned __int64)param_1[5] & 0x3fffffff) << 1;
    if ((unsigned int)uVar5 <= uVar6) {
      uVar5 = param_2;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 3,uVar5,2);
  }
  iVar3 = (int)(param_2 - 1);
  lVar4 = param_2 - 1;
  while ((int)uVar1 <= iVar3) {
    *(short *)(param_1[4] * 2 + param_1[3]) = (short)lVar4;
    param_1[4] = param_1[4] + 1;
    iVar3 = (int)(lVar4 + -1);
    lVar4 = lVar4 + -1;
  }
  if (*param_4 != 0x7fff) {
    *param_3 = (unsigned int)*param_4 * 0x14 + *param_1;
  }
  return;
}

