extern int XMemSet();
extern int fn_82FA5060();
extern int fn_830224F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


unsigned __int64 fn_83023AB0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  fn_830224F0(param_1 + 0x80,param_2,0x400);
  *(unsigned int *)(param_1 + 0x1c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x30) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x2c) = *(unsigned char *)(param_1 + 0x2c) & 0x3f;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  uVar1 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  uVar2 = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned char *)(param_1 + 0x40) = *(unsigned char *)(param_1 + 0x40) & 0x3f;
  *(unsigned int *)(param_1 + 0x44) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned char *)(param_1 + 0x54) = *(unsigned char *)(param_1 + 0x54) & 0x3f;
  *(unsigned int *)(param_1 + 0x58) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned char *)(param_1 + 0x68) = *(unsigned char *)(param_1 + 0x68) & 0x3f;
  iVar4 = 0;
  *(unsigned char *)(param_1 + 0x6c) = *(unsigned char *)(param_1 + 0x6c) & 0x3f;
  *(unsigned int *)(param_1 + 8) = uVar1;
  *(unsigned int *)(param_1 + 4) = uVar1;
  *(unsigned int *)(param_1 + 0xc) = uVar1;
  *(unsigned int *)(param_1 + 0x10) = uVar1;
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  *(unsigned int *)(param_1 + 0x70) = 2;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned short *)(param_1 + 0x10e) = 0;
  *(unsigned short *)(param_1 + 0x10c) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0x2b;
  *(unsigned int *)(param_1 + 0x108) = 0x11;
  for (; (param_2 & 0xffffffff) != 0; param_2 = param_2 - 1 & param_2) {
    iVar4 = iVar4 + 1;
  }
  *(int *)(param_1 + 0x150) = iVar4 << 0xc;
  uVar3 = fn_82FA5060(lbl_831BC770);
  if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    XMemSet(uVar3,0,*(unsigned int *)(param_1 + 0x150));
  }
  return 0x34;
}

