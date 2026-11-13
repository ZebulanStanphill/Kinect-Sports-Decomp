extern int fn_82D01B18();
extern int fn_82D02610();


unsigned int fn_82CF8F50(int param_1,int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  
  lVar5 = (__int64)*param_2 * (__int64)(int)param_3;
  RtlEnterCriticalSection(param_1 + 4);
  iVar6 = (int)lVar5;
  if (iVar6 < 0x221) {
    piVar1 = *(int **)(((iVar6 + 0xf >> 4) + 0x3c) * 4 + param_1);
    piVar2 = (int *)*piVar1;
    iVar6 = piVar1[10];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)piVar1[8];
      if (piVar2 < (unsigned int)piVar1[9]) {
        piVar1[10] = iVar6 + -1;
        piVar1[8] = piVar1[1] + (int)piVar2;
      }
      else {
        piVar2 = (int *)fn_82D01B18(piVar1);
      }
    }
    else {
      piVar1[10] = iVar6 + -1;
      *piVar1 = *piVar2;
    }
    trapWord(6,param_3,0);
    *(int *)(param_1 + 0x20) = (piVar1[10] - iVar6) * piVar1[1] + *(int *)(param_1 + 0x20);
    uVar3 = piVar1[1];
    *param_2 = (int)uVar3 / (int)param_3;
    trapWord(5,param_3 & ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),
             0xffff);
  }
  else {
    piVar2 = (int *)(**(int (***)())(*(int *)(param_1 + 0x2c) + 4))(param_1 + 0x2c,lVar5);
  }
  uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0x20);
  uVar3 = *(unsigned int *)(param_1 + 0x24);
  if (*(unsigned int *)(param_1 + 0x24) < uVar4) {
    uVar3 = uVar4;
  }
  *(unsigned int *)(param_1 + 0x24) = uVar3;
  if (*(unsigned int *)(param_1 + 0x8fc) <= uVar4) {
    fn_82D02610(1);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return (unsigned int)piVar2;
}

