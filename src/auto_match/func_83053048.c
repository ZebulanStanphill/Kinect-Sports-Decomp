void fn_83053048(int param_1,unsigned __int64 param_2,int *param_3,unsigned char param_4,unsigned char *param_5)

{
  if (param_4 != '\0') {
    if ((*(unsigned int *)(param_1 + 0x30) & 0x10000000) == 0) {
      (*(int (**)())(*param_3 + 0x18))(param_3,param_2,param_1 + 0x10,param_5);
    }
    else {
      *param_5 = 0;
    }
  }
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x30) | 0x10000000;
  return;
}

