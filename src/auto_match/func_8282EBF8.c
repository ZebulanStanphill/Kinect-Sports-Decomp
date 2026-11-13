extern unsigned int *auStack_40;
extern int fn_8282EB50();


void fn_8282EBF8(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40;

  param_2 = param_2 - (int)param_1;
  uVar1 = param_2 >> 2;
  uVar3 = (__int64)(param_2 >> 3) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (__int64)uVar3) {
    lVar2 = (uVar3 & 0x3fffffff) * 4 + param_1;
    do {
      lVar2 = lVar2 + -4;
      auStack_40 = *(unsigned int *)lVar2;
      uVar3 = uVar3 - 1;
      fn_8282EB50(param_1,uVar3,uVar1,&auStack_40,param_3);
    } while (0 < (int)uVar3);
  }
  return;
}
