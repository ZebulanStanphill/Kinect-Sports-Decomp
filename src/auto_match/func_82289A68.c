extern int fn_8229E090();


void fn_82289A68(int param_1,int param_2)

{
  if (param_1 == 0) {
    *(unsigned int *)(param_2 + 0x604) = 1;
    if (*(unsigned int *)(param_2 + 0x11f8) != 0) {
      fn_8229E090(*(int *)(param_2 + 0x11f8),0,1);
      *(unsigned int *)(param_2 + 0x11f8) = 0;
    }
  }
  return;
}

