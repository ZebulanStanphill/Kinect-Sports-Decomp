extern int fn_82C3C340();


unsigned __int64 fn_82E38DE8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (-(unsigned __int64)(*param_3 < 32000) & 0xfffffffe) + 5;
  uVar1 = fn_82C3C340(param_1,*param_3,param_5,param_6);
  if ((uVar1 & 0xffffffff) != 0) {
    if (param_4 == 0) {
      uVar2 = (__int64)(int)(unsigned int)*(unsigned char *)((int)param_3 + 7) * (__int64)(int)uVar1;
      trapWord(6,uVar2,0);
      if ((param_1 & 0xffffffff) / (uVar2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
        uVar1 = (__int64)(int)uVar1 * (__int64)(int)uVar3;
        trapWord(6,uVar1,0);
        return (param_1 & 0xffffffff) / (uVar1 & 0xffffffff);
      }
    }
    uVar1 = (unsigned __int64)*(unsigned char *)((int)param_3 + 7);
  }
  return uVar1;
}

