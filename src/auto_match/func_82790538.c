extern int fn_82790490();


void fn_82790538(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  uVar1 = param_4;
  if (((int)param_4 != -1) && (uVar3 = param_4 - 1, -1 < (__int64)uVar3)) {
    lVar2 = (uVar3 & 0x7fffffff) * 2 + param_3;
    do {
      uVar1 = uVar3;
      if (*(short *)lVar2 == 0) break;
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -2;
      uVar1 = param_4;
    } while (-1 < (__int64)uVar3);
  }
  fn_82790490(param_1,param_2,param_3,uVar1);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}

