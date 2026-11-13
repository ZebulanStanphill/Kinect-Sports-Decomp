extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDFFC0();


unsigned __int64 fn_82F44A80(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  fn_82EDFFC0(param_1 + 1);
  if (*param_1 != 0) {
    fn_8265C990(*param_1,0x248c8000);
    *param_1 = 0;
  }
  uVar2 = param_1[1];
  if ((int)uVar2 < (int)param_1[3]) {
    if ((int)param_1[2] < (int)param_1[4]) {
      uVar3 = (__int64)(int)(param_1[4] - param_1[2]) * (__int64)(int)(param_1[3] - uVar2) + 0x40;
      lVar1 = (uVar3 & 0x7fffffff) << 1;
      if (0x7fffffff < (uVar3 & 0xffffffff)) {
        lVar1 = -1;
      }
      uVar2 = fn_8265C940(lVar1,0x248c8000);
      param_1[5] = uVar2;
      if (uVar2 == 0) {
        return 0xfffffffffffffffd;
      }
      uVar2 = uVar2 + 0x3f & 0xffffffc0;
      *param_1 = uVar2;
      return -(unsigned __int64)(uVar2 == 0) & 0xfffffffffffffffd;
    }
  }
  return 0;
}

