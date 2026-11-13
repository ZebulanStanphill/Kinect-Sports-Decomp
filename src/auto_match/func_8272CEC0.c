extern int fn_827A26C0(iVar1);


void fn_8272CEC0(int *param_1,unsigned char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[0x28] + 0x114);
  if (iVar1 != 0) {
    if (param_2 != 0) { *(unsigned short *)(iVar1 + 0x68) |= 0x100; } else { fn_827A26C0(iVar1); }
    iVar1 = (*(int (**)())(*param_1 + 0x40))(param_1);
    if ((void *)iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0xb00) = *(unsigned int *)(iVar1 + 0xb00) | 0x400;
    }
  }
  return;
}

