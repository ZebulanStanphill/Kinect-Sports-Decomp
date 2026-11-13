extern unsigned int lbl_82196280;
extern unsigned int lbl_82196284;
extern unsigned int lbl_82196288;


void fn_827F4818(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar3 = lbl_82196288;
  param_1[3] = 0;
  uVar1 = lbl_82196280;
  param_1[7] = 0;
  uVar2 = lbl_82196284;
  param_1[8] = 0;
  param_1[4] = uVar3;
  *(unsigned short *)(param_1 + 9) = 0;
  param_1[5] = uVar1;
  param_1[10] = 0;
  param_1[6] = uVar2;
  param_1[0xb] = 0;
  return;
}

