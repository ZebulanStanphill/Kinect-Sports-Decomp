extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_830195D8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (*param_1 != 0) {
    fn_82FA5190(lbl_831BC768);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    uVar2 = 0x1f;
  }
  else {
    lVar3 = (param_3 + (param_3 & 0x7fffffff) * 2 & 0x3fffffff) << 2;
    uVar1 = fn_82FA5060(lbl_831BC768,lVar3);
    *param_1 = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0x34;
      param_1[1] = 0;
    }
    else {
      fn_82A1DDC0(uVar1,param_2,lVar3);
      uVar2 = 1;
      param_1[1] = (int)param_3;
      param_1[2] = param_4;
    }
  }
  return uVar2;
}

