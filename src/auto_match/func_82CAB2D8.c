unsigned __int64 fn_82CAB2D8(__int64 param_1, __int64 param_2, __int64 param_3, __int64 param_4, __int64 param_5, __int64 param_6, __int64 param_7, __int64 param_8, unsigned int in_stack_00000054)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;

  
  lVar1 = param_8;
  if ((int)param_8 <= (int)param_1) {
    lVar1 = param_1;
    param_1 = param_8;
  }
  lVar2 = param_3;
  if (((int)param_1 <= (int)param_3) && (lVar2 = param_1, (int)lVar1 < (int)param_3)) {
    lVar1 = param_3;
  }
  lVar3 = param_5;
  if (((int)lVar2 <= (int)param_5) && (lVar3 = lVar2, (int)lVar1 < (int)param_5)) {
    lVar1 = param_5;
  }
  if ((int)in_stack_00000054 <= (int)lVar1 - (int)lVar3) {
    return 0;
  }
  lVar2 = param_2;
  if (((int)lVar3 <= (int)param_2) && (lVar2 = lVar3, (int)lVar1 < (int)param_2)) {
    lVar1 = param_2;
  }
  lVar3 = param_4;
  if (((int)lVar2 <= (int)param_4) && (lVar3 = lVar2, (int)lVar1 < (int)param_4)) {
    lVar1 = param_4;
  }
  lVar2 = param_6;
  if (((int)lVar3 <= (int)param_6) && (lVar2 = lVar3, (int)lVar1 < (int)param_6)) {
    lVar1 = param_6;
  }
  lVar3 = param_7;
  if (((int)lVar2 <= (int)param_7) && (lVar3 = lVar2, (int)lVar1 < (int)param_7)) {
    lVar1 = param_7;
  }
  return ((~((unsigned __int64)in_stack_00000054 ^ lVar1 - lVar3) & 0xffffffff) >> 0x1f) +
         (unsigned __int64)((unsigned __int64)in_stack_00000054 <= (unsigned __int64)(lVar1 - lVar3)) & 1;
}

