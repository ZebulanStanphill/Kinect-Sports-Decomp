extern int fn_827F6AB8();
extern int fn_827FA1E8();


void fn_827FAF20(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 == 0) {
    param_4[1] = (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0x30 + *(int *)(param_1 + 0x84);
    param_4[2] = (unsigned int)*(unsigned short *)(param_2 + 0x32) * 0x30 + *(int *)(param_2 + 0x84);
    param_4[3] = (unsigned int)*(unsigned short *)(param_3 + 0x32) * 0x30 + *(int *)(param_3 + 0x84);
    iVar1 = fn_827F6AB8();
    param_4[4] = iVar1;
    iVar1 = fn_827F6AB8(param_2);
    param_4[5] = iVar1;
    iVar1 = fn_827F6AB8(param_3);
  }
  else {
    if (*param_4 != 1) {
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      return;
    }
    param_4[1] = ((unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc + (unsigned int)*(unsigned short *)(param_1 + 0x2e)) * 4 +
                 *(int *)(param_1 + 0x84);
    param_4[2] = ((unsigned int)*(unsigned short *)(param_2 + 0x32) * 0xc + (unsigned int)*(unsigned short *)(param_2 + 0x2e)) * 4 +
                 *(int *)(param_2 + 0x84);
    param_4[3] = ((unsigned int)*(unsigned short *)(param_3 + 0x32) * 0xc + (unsigned int)*(unsigned short *)(param_3 + 0x2e)) * 4 +
                 *(int *)(param_3 + 0x84);
    iVar1 = fn_827FA1E8();
    param_4[4] = iVar1;
    iVar1 = fn_827FA1E8(param_2);
    param_4[5] = iVar1;
    iVar1 = fn_827FA1E8(param_3);
  }
  param_4[6] = iVar1;
  return;
}

