extern unsigned int *auStack_20;


void fn_826F6C28(int *param_1,unsigned int *param_2)

{
  unsigned int auStack_20 [4];
  
  auStack_20[0] = *param_2;
  (*(int (**)())(*param_1 + 0x98))(param_1,auStack_20);
  param_1[0x2c0] = param_1[0x2c0] | 0x20000;
  return;
}

