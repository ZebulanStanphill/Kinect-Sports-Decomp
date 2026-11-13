extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_82266D28();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229B1A0();
extern int fn_8229D298();
extern int fn_8229EBD8();
extern int fn_8229F2C0();
extern int fn_8229F3F0();
extern int fn_82358FD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AADF4;


unsigned int * fn_8229A560(unsigned int *param_1,unsigned int param_2)

{
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned char auStack_220 [64];
  unsigned char auStack_1e0 [64];
  unsigned char auStack_1a0 [64];
  unsigned char auStack_160 [64];
  unsigned char auStack_120 [64];
  unsigned char auStack_e0 [64];
  unsigned char auStack_a0 [64];
  unsigned char auStack_60 [96];
  
  *param_1 = &lbl_821AADF4;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_82266D28(param_1 + 1,0);
  iVar2 = fn_8265C9E0(0x138);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8229F2C0();
  }
  param_1[3] = uVar3;
  iVar2 = fn_8265C9E0(0x18);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8229EBD8();
  }
  param_1[4] = uVar3;
  iVar2 = fn_8265C9E0(0x1c);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8229D298();
  }
  param_1[5] = uVar3;
  iVar2 = fn_8265C9E0(0xc0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8229B1A0();
  }
  param_1[6] = uVar3;
  param_1[7] = param_2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82299948(uVar1,8,0);
  }
  param_1[8] = uVar3;
  iVar2 = fn_8265C9E0(0x1230);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822997C8();
  }
  param_1[9] = uVar3;
  param_1[10] = 0xffffffff;
  fn_82358FD8(param_1[7],auStack_60,0x20,0xffffffff821a8370);
  fn_82358FD8(param_1[7],auStack_e0,0x20,0xffffffff821a837c);
  fn_82358FD8(param_1[7],auStack_160,0x20,0xffffffff821a8388);
  fn_82358FD8(param_1[7],auStack_1e0,0x20,0xffffffff821a8394);
  fn_82358FD8(param_1[7],auStack_220,0x20,0xffffffff821a83a0);
  fn_82358FD8(param_1[7],auStack_a0,0x20,0xffffffff821a83ac);
  fn_82358FD8(param_1[7],auStack_1a0,0x20,0xffffffff821a83b8);
  fn_82358FD8(param_1[7],auStack_120,0x20,0xffffffff821a83c4);
  fn_8229F3F0(param_1[3],auStack_60,auStack_e0,auStack_160,auStack_1e0,auStack_220,auStack_a0,
                  auStack_1a0);
  return param_1;
}

