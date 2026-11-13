extern unsigned int lbl_821550CC;
extern unsigned int lbl_821631DC;
extern unsigned int lbl_821631F0;


unsigned int * fn_82F48950(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  param_1[1] = &lbl_821550CC;
  param_1[5] = param_2;
  param_1[3] = 0;
  param_1[2] = 1;
  *param_1 = &lbl_821631F0;
  param_1[1] = &lbl_821631DC;
  param_1[4] = 0;
  *(unsigned short *)(param_1 + 6) = 0;
  param_1[7] = 0;
  uVar1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xd] = param_1 + 0xd;
  param_1[0xc] = 0;
  param_1[0x11] = param_1 + 0x10;
  param_1[0x10] = param_1 + 0x10;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  if ((int *)param_1[5] == (int *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    (**(int (***)())(*(int *)param_1[5] + 4))();
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = uVar1;
  }
  return param_1;
}

