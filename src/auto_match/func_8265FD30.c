extern int fn_822462B0();
extern int fn_8265DDA0();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned int fn_8265FD30(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  if (*(unsigned int *)(param_1 + 0x10) < param_2) {
    fn_82663F28(param_1);
  }
  uVar1 = uStack0000002c;
  if (*(int *)(iStack00000014 + 0x10) - uStack0000001c < uStack00000024) {
    uStack00000024 = *(int *)(iStack00000014 + 0x10) - uStack0000001c;
  }
  if (uStack00000024 < uStack00000034) {
    uStack_2c = uStack00000024;
  }
  else {
    uStack_2c = uStack00000034;
  }
  lVar2 = fn_8265DDA0(iStack00000014);
  uStack_28 = fn_822462B0(lVar2 + (unsigned __int64)uStack0000001c,uVar1,uStack_2c);
  if (uStack_28 == 0) {
    if (uStack00000024 < uStack00000034) {
      uStack_24 = 0xffffffff;
    }
    else {
      uStack_24 = (unsigned int)LZCOUNT(uStack00000034 - uStack00000024) >> 5 ^ 1;
    }
    uStack_28 = uStack_24;
  }
  return uStack_28;
}

