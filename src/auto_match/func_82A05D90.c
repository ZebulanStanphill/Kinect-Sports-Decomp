extern unsigned int lbl_82002C5C;


__int64 fn_82A05D90(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = 0;
  uVar2 = param_3;
  if ((int)param_3 != 0) {
    do {
      if ((*(unsigned int *)(*param_2 * 0x1f0 + param_1 + 0x4f0) & 3) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        uVar1 = uVar1 + 1;
      }
      param_2 = param_2 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = (__int64)((float)uVar1 / (float)(param_3 & 0xffffffff) + lbl_82002C5C) & 0xffffffff;
  if (uVar2 < 2) {
    return -((unsigned __int64)(uVar2 == 0) - 1);
  }
  return 2;
}

