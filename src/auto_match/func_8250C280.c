extern int fn_827F6AB8();
extern int fn_827FA1E8();


void fn_8250C280(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_4 == 0) {
    uVar1 = *(unsigned short *)(param_2 + 0x32);
    uVar2 = *(unsigned short *)(param_3 + 0x32);
    iVar6 = *(int *)(param_2 + 0x84);
    iVar5 = *(int *)(param_3 + 0x84);
    param_4[1] = (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0x30 + *(int *)(param_1 + 0x84);
    param_4[2] = (unsigned int)uVar1 * 0x30 + iVar6;
    param_4[3] = (unsigned int)uVar2 * 0x30 + iVar5;
    iVar6 = fn_827F6AB8();
    param_4[4] = iVar6;
    iVar6 = fn_827F6AB8(param_2);
    param_4[5] = iVar6;
    iVar6 = fn_827F6AB8(param_3);
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
    uVar1 = *(unsigned short *)(param_2 + 0x32);
    uVar2 = *(unsigned short *)(param_3 + 0x32);
    uVar3 = *(unsigned short *)(param_2 + 0x2e);
    uVar4 = *(unsigned short *)(param_3 + 0x2e);
    iVar6 = *(int *)(param_2 + 0x84);
    iVar5 = *(int *)(param_3 + 0x84);
    param_4[1] = ((unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc + (unsigned int)*(unsigned short *)(param_1 + 0x2e)) * 4 +
                 *(int *)(param_1 + 0x84);
    param_4[2] = ((unsigned int)uVar1 * 0xc + (unsigned int)uVar3) * 4 + iVar6;
    param_4[3] = ((unsigned int)uVar2 * 0xc + (unsigned int)uVar4) * 4 + iVar5;
    iVar6 = fn_827FA1E8();
    param_4[4] = iVar6;
    iVar6 = fn_827FA1E8(param_2);
    param_4[5] = iVar6;
    iVar6 = fn_827FA1E8(param_3);
  }
  param_4[6] = iVar6;
  return;
}

