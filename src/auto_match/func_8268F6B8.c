extern unsigned int lbl_82005EE8;
extern unsigned int lbl_8200E1B0;


unsigned int *
fn_8268F6B8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int param_4,
             unsigned char param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  param_1[1] = param_2;
  param_1[4] = param_3;
  param_1[2] = 0;
  *param_1 = &lbl_82005EE8;
  if (param_4 == 0) {
    param_4 = 1;
  }
  *(unsigned char *)(param_1 + 0x69) = param_5;
  param_1[5] = param_4;
  param_1[6] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[0x6a] = 0;
  uVar1 = (**(int (***)())*param_2)(param_2);
  uVar2 = (unsigned int)uVar1;
  param_1[2] = uVar2;
  if ((uVar1 & 0xffff0000) == 0) {
    if ((uVar1 & 0xff00) == 0) {
      uVar3 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[uVar2 & 0xff];
    }
    else {
      uVar3 = (unsigned char)(&lbl_8200E1B0)[uVar2 >> 8 & 0xff] + 8;
    }
  }
  else if ((uVar1 & 0xff000000) == 0) {
    uVar3 = (unsigned char)(&lbl_8200E1B0)[(unsigned short)(uVar1 >> 0x10) & 0xff] + 0x10;
  }
  else {
    uVar3 = (unsigned char)(&lbl_8200E1B0)[(unsigned char)(uVar1 >> 0x18)] + 0x18;
  }
  param_1[6] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0xffffffff;
  param_1[3] = uVar3 & 0xff;
  param_1[5] = (uVar2 + param_1[5]) - 1 & ~(uVar2 - 1);
  return param_1;
}

