extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A68C48();
extern int fn_82A68C70();
extern int fn_82A68E28();


__int64 fn_82A511A0(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x1c,0x20970005,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A68C48(uVar1,param_4,param_5,*(unsigned int *)(param_3 + 0x3c));
  }
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = fn_82A68C70((double)*(float *)(param_3 + 0x48));
    if ((lVar3 < 0) && (iVar2 = param_1[2], iVar2 != 0)) {
      fn_82A68E28(iVar2);
      fn_82A4F4E0(iVar2);
      param_1[2] = 0;
    }
  }
  return lVar3;
}

