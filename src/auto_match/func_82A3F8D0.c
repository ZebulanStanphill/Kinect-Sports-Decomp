extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A3F7B8();


__int64 fn_82A3F8D0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  
  iVar1 = fn_8265C940(4,0x24970000);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    uVar2 = fn_8265C940(0xc,0x24970000);
    *(unsigned int *)*param_1 = uVar2;
    if (*(int *)*param_1 == 0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = fn_82A3F7B8(*(int *)*param_1,param_2,param_3,2);
      if (lVar3 < 0) {
        fn_8265C990(*(unsigned int *)*param_1,0x24970000);
      }
      else {
        param_1[1] = 1;
        param_1[2] = 4;
      }
      if (-1 < (int)lVar3) {
        return lVar3;
      }
    }
    fn_8265C990(*param_1,0x24970000);
    if (-1 < (int)lVar3) {
      return lVar3;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return lVar3;
}

