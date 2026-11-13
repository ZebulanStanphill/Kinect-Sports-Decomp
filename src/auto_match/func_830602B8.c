extern int fn_82F68CC0();
extern int fn_83065B90();
extern int fn_83065BA8();


unsigned __int64 fn_830602B8(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  
  lVar3 = 0;
  iVar4 = (int)param_2;
  if (*param_1 == 0) {
    if (0 < iVar4) {
      iVar1 = fn_83065B90(param_2 * 0xc);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = iVar1;
    }
  }
  else {
    if (0 < iVar4) {
      lVar3 = fn_83065B90(param_2 * 0xc);
      if (lVar3 == 0) {
        return 0;
      }
      uVar2 = (unsigned __int64)(unsigned int)param_1[7];
      if (iVar4 < param_1[7]) {
        uVar2 = param_2;
      }
      fn_82F68CC0(lVar3,*param_1,uVar2 * 0xc);
    }
    fn_83065BA8(*param_1);
    *param_1 = (int)lVar3;
  }
  param_1[7] = iVar4;
  return 1;
}

