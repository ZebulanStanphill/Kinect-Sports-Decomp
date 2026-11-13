extern int fn_827F4010();
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827FA468();
extern int fn_827FA5E8();
extern unsigned int lbl_8201DD20;
extern unsigned int lbl_821AAD20;


unsigned int *
fn_827F2F90(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned short param_5,unsigned int param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  fn_827F4248(param_1,param_1 + 0x18,param_3,0,0);
  *param_1 = &lbl_8201DD20;
  *(unsigned char *)((int)param_1 + 0x51) = 0;
  *(unsigned char *)((int)param_1 + 0x52) = 0;
  *(unsigned char *)((int)param_1 + 0x53) = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  param_1[0x16] = param_4;
  *(unsigned short *)(param_1 + 0x17) = param_5;
  fn_827F4100(param_1 + 0x18,param_2);
  param_1[0x43] = param_6;
  param_1[0x41] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x3d] = lbl_821AAD20;
  param_1[0x3e] = uVar3;
  uVar1 = fn_827FA468(0xb4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_827FA5E8(uVar1,param_1,param_3);
  }
  param_1[8] = (int)uVar2;
  uVar3 = fn_827F4010(uVar2);
  param_1[0x10] = uVar3;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  param_1[0x42] = (int)uVar2;
  *(unsigned char *)((int)param_1 + 0x51) = *(unsigned char *)((int)param_1 + 0x51) | 1;
  return param_1;
}

