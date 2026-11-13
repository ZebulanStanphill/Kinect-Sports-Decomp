extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_83083970(int *param_1,__int64 param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  int iVar4;
  
  if ((int)param_2 < 3) {
    param_2 = 2;
  }
  iVar4 = (int)param_2;
  if (param_1[1] < iVar4) {
    iVar1 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
      lVar2 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
      if ((int)lVar2 <= iVar4) {
        lVar2 = param_2;
      }
      fn_82CE6310(*(unsigned int *)(iVar1 + 0x10),param_1,lVar2,8);
    }
    param_2 = param_2 - (unsigned __int64)(unsigned int)param_1[1];
    puVar3 = (unsigned int *)(param_1[1] * 8 + *param_1);
    if (0 < param_2) {
      do {
        if (puVar3 != (unsigned int *)0x0) {
          *puVar3 = 0x7fffffff;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    param_1[1] = iVar4;
  }
  puVar3 = (unsigned int *)*param_1;
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = 0x7fffffff;
    puVar3[1] = 0;
  }
  *(unsigned int *)*param_1 = 0x7fffffff;
  *(unsigned int *)(*param_1 + 8) = 0x7fffffff;
  return;
}

