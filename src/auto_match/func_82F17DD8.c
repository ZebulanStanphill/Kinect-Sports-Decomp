extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDFFC0();


unsigned __int64 fn_82F17DD8(unsigned int *param_1,int *param_2,int *param_3,unsigned __int64 param_4,int param_5
                       )

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  
  fn_82EDFFC0(param_3,param_4);
  if (*param_2 != 0) {
    fn_8265C990(*param_2,0x248c8000);
    *param_2 = 0;
  }
  if (*param_3 < param_3[2]) {
    if (param_3[1] < param_3[3]) {
      iVar2 = param_3[2] - *param_3;
      lVar3 = (__int64)iVar2 * (__int64)param_5;
      uVar1 = fn_8265C940((__int64)(param_3[3] - param_3[1]) * (__int64)iVar2 +
                                (lVar3 + 0x10U & 0x7fffffff) * 2,0x248c8000);
      *param_2 = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        return 0xfffffffffffffffd;
      }
      uVar1 = uVar1 + lVar3 + 0x1f & 0xffffffe0;
      *param_1 = (int)uVar1;
      return -(unsigned __int64)(uVar1 == 0) & 0xfffffffffffffffd;
    }
  }
  return 0xffffffffffffff9c;
}

