extern int fn_8263AB38();
extern unsigned int iStack_60;


unsigned __int64 fn_8263AC58(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,int param_4,unsigned __int64 param_5,
                       unsigned __int64 param_6,int param_7)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  struct { int first; int second; } stack_pair_60;

  
  iVar3 = 0x20;
  iVar4 = 4;
  if ((param_6 & 0xffffffff) != 2) {
    iVar4 = 1;
  }
  fn_8263AB38(param_5,&stack_pair_60.second,&stack_pair_60.first);
  if (param_7 == 0) {
    uVar1 = ((__int64)(stack_pair_60.second * stack_pair_60.first) * (__int64)param_4 & 0xffffffffU) >> 3;
    if (uVar1 != 0) {
      trapWord(6,uVar1,0);
      if (0x1f < 0x100 / uVar1) {
        iVar3 = (int)(0x100 / uVar1);
      }
    }
  }
  stack_pair_60.first = stack_pair_60.first * ((-(unsigned int)(param_6 != 0) & 0x1f) + 1);
  *param_1 = (*param_1 + stack_pair_60.second * iVar3) - 1 & ~(stack_pair_60.second * iVar3 - 1U);
  *param_2 = (*param_2 + stack_pair_60.first) - 1 & ~(stack_pair_60.first - 1U);
  uVar2 = (*param_3 + iVar4) - 1 & ~(iVar4 - 1U);
  *param_3 = uVar2;
  iVar3 = (*param_1 * param_4 >> 3) * *param_2;
  if ((param_6 & 0xffffffff) == 2) {
    uVar1 = (__int64)(int)uVar2 * (__int64)iVar3 + 0xfffU & 0xfffff000;
  }
  else {
    uVar1 = (__int64)(int)(iVar3 + 0xfffU & 0xfffff000) * (__int64)(int)uVar2;
  }
  return uVar1;
}

