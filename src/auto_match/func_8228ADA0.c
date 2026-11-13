extern int fn_8229E090();


void fn_8228ADA0(int param_1,int param_2)

{
  if (param_1 == 2) {
    *(unsigned int *)(param_2 + 0x604) = 1;
    *(unsigned int *)(param_2 + 0x11f8) = 0;
  }
  else {
    fn_8229E090(*(unsigned int *)(param_2 + 0x11f8),0,1);
    *(unsigned int *)(param_2 + 0x11f8) = 0;
  }
  return;
}

