extern int fn_82F081B8();


void fn_82ED7E00(int param_1,unsigned int param_2,unsigned int param_3,__int64 param_4,__int64 param_5
                  ,__int64 param_6,__int64 param_7)

{
  unsigned int uVar1;
  int lVar2;
  __int64 lVar3;
  unsigned int uVar4;
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e54) + param_4 * 0x114;
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar1 = *(unsigned int *)(param_1 + 0x2d0);
    lVar2 = param_3 - param_2;
    do {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          fn_82F081B8(param_1,lVar3,param_5,param_6,param_7);
          uVar1 = *(unsigned int *)(param_1 + 0x2d0);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x114;
          param_5 = param_5 + 0x60;
          param_6 = param_6 + 0x600;
          param_7 = param_7 + 0xc;
        } while (uVar4 < uVar1);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

