void fn_83004F10(int *param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x134))(param_1,param_4);
  if (iVar1 != 0) {
    *(unsigned char *)(iVar1 + 0x3d) = *(unsigned char *)(iVar1 + 0x3d) & ~(unsigned char)param_3 | (unsigned char)param_2;
  }
  (*(int (**)())(*param_1 + 0x14))(param_1);
  if (param_4 == 0) {
    (*(int (**)())(*param_1 + 0xe4))(param_1,param_2,param_3);
  }
  (*(int (**)())(*param_1 + 0x54))(param_1,param_2,param_3,param_4,0);
  return;
}

