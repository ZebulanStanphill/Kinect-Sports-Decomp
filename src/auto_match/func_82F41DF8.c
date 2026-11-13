extern int fn_82A3F758();
extern int fn_82F64CE0();


unsigned __int64 fn_82F41DF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short *param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned short uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (param_3 == (unsigned short *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (unsigned __int64)*param_3;
  }
  if ((param_1 & 0xffffffff) == 0) {
    return 0xffffffff80070057;
  }
  lVar2 = fn_82F64CE0(param_1);
  uVar1 = lVar2 + 1U & 0xffff;
  uVar4 = (unsigned short)(lVar2 + 1U);
  if ((param_2 & 0xffffffff) == 0) {
LAB_82f41eac:
    uVar3 = uVar1;
    if (-1 < (int)uVar5) goto LAB_82f41ec0;
  }
  else {
    if (uVar3 < uVar1) {
      uVar5 = 0xffffffffc00d36b1;
      goto LAB_82f41eac;
    }
    if (uVar3 < 0x80000000) {
      uVar5 = fn_82A3F758(param_2,uVar3,param_1);
    }
    else {
      uVar5 = 0xffffffff80070057;
    }
    if (-1 < (int)uVar5) goto LAB_82f41eac;
  }
  uVar4 = (unsigned short)uVar3;
  if ((int)uVar5 != -0x3ff2c94f) {
    return uVar5;
  }
LAB_82f41ec0:
  if (param_3 != (unsigned short *)0x0) {
    *param_3 = uVar4;
  }
  return uVar5;
}

