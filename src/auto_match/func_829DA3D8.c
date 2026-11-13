extern unsigned int *auStack_130;
extern unsigned int *auStack_240;
extern int fn_829D3930();
extern int fn_829D5110();
extern int fn_829D99D0();
extern int fn_829DA310();
extern int fn_82A2B0F8();
extern int fn_82F664B0();
extern int fn_82F69A80();


unsigned __int64 fn_829DA3D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_240 [272];
  unsigned char auStack_130 [272];
  
  iVar2 = fn_82F664B0(0xffffffff832178f8,0x104);
  if ((((iVar2 == 0) && (iVar2 = fn_82F664B0(auStack_130,0x104,param_3), iVar2 == 0)) &&
      (iVar2 = fn_82F69A80(auStack_130,0x104,0xffffffff8205770c), iVar2 == 0)) &&
     ((iVar2 = fn_82F664B0(auStack_240,0x104,param_3), iVar2 == 0 &&
      (iVar2 = fn_82F69A80(auStack_240,0x104,0xffffffff820576f0), iVar2 == 0)))) {
    uVar1 = fn_829D3930(auStack_240);
    if ((-1 < (int)uVar1) && (uVar1 = fn_829D99D0(param_1), -1 < (int)uVar1)) {
      fn_829D5110();
      uVar1 = fn_829DA310(param_2);
      if ((-1 < (int)uVar1) && ((param_1 & 0x80000000) == 0)) {
        uVar1 = fn_82A2B0F8(0xffffffff829d6a90);
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

