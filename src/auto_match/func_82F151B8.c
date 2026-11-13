extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F44E60();


unsigned int * fn_82F151B8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int *param_4)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  fn_82F44E60(param_1,param_2,param_4);
  param_1[0x12] = param_3;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0xffffffff;
  lVar1 = ((unsigned __int64)*param_1 & 0x3fffffff) << 2;
  if (0x3fffffff < *param_1) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C940(lVar1,0x248c8000);
  param_1[0xe] = uVar2;
  lVar1 = ((unsigned __int64)*param_1 & 0x1fffffff) << 3;
  if (0x3fffffff < ((unsigned __int64)*param_1 & 0x7fffffff) << 1) {
    lVar1 = -1;
  }
  uVar3 = fn_8265C940(lVar1,0x248c8000);
  uVar2 = param_1[0xe];
  param_1[0xc] = uVar3;
  if (uVar2 != 0) {
    if (uVar3 != 0) {
      param_1[9] = 0;
      param_1[0x10] = 0;
      param_1[0xd] = 0;
      param_1[0xf] = *param_1 * 4 + uVar3;
      return param_1;
    }
    if (uVar2 != 0) {
      fn_8265C990(uVar2,0x248c8000);
      param_1[0xe] = 0;
    }
  }
  if (param_1[0xc] != 0) {
    fn_8265C990(param_1[0xc],0x248c8000);
    param_1[0xc] = 0;
  }
  *param_4 = 1;
  return param_1;
}

