extern int fn_8229E090();


void fn_8228E0D0(unsigned int param_1,int param_2)

{
  if ((param_1 < 2) && (*(unsigned int *)(param_2 + 0x178) != 0)) {
    fn_8229E090(*(int *)(param_2 + 0x178),0,1);
    *(unsigned int *)(param_2 + 0x178) = 0;
  }
  return;
}

