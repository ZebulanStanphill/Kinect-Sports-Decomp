extern int fn_82A3FF60();
extern int fn_82A442F0();


unsigned __int64 fn_82A44488(__int64 param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar4;
  
  puVar3 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970002,0);
  if (puVar3 == (unsigned int *)0x0) {
    uVar1 = 0xffffffff8007000e;
  }
  else {
    uVar4 = (unsigned int)LZCOUNT(param_2) >> 5;
    if ((uVar4 == 1) && (param_3 == 0x20)) {
      uVar4 = 2;
    }
    *puVar3 = param_4;
    puVar3[1] = uVar4;
    lVar2 = fn_82A442F0(param_1 + 0xe4);
    uVar1 = -(unsigned __int64)(lVar2 == 0) & 0xffffffff8007000e;
  }
  return uVar1;
}

