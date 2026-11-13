extern int fn_8227CB30();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229CDE0();
extern int fn_822A0E10();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int lbl_821ABD7C;
extern unsigned int lbl_821ABD80;


unsigned int *
fn_822A08D0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned int param_5,int param_6,unsigned int param_7)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char **ppuStack_50;
  unsigned int *puStack_4c;
  unsigned char ***pppuStack_40;
  
  fn_8229A7B8();
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  *param_1 = &lbl_821ABD7C;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,0,0);
  }
  param_1[0xe] = uVar2;
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822997C8();
  }
  param_1[0xf] = uVar2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,4,0);
  }
  param_1[0x10] = uVar2;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x34] = 0;
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8229CDE0(uVar1,param_4,(param_6 != 0) + '\x03');
  }
  param_1[0x35] = uVar2;
  pppuStack_40 = &ppuStack_50;
  *(unsigned short *)(param_1 + 0x14) = 0;
  ppuStack_50 = &lbl_821ABD80;
  puStack_4c = param_1;
  fn_8227CB30((unsigned __int64)(unsigned int)param_1[3] + 0x120,&ppuStack_50);
  fn_82359C18(&ppuStack_50);
  fn_822A0E10(param_1,1);
  return param_1;
}

