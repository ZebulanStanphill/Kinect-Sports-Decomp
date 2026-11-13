extern int fn_8229E090();
extern int fn_8247D1F0();


void fn_8247D180(int param_1,int param_2)

{
  if (*(unsigned int *)(param_2 + 0x74) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x74),0,0);
    *(unsigned int *)(param_2 + 0x74) = 0;
  }
  if (param_1 == 0) {
    fn_8247D1F0(param_2,*(unsigned int *)(param_2 + 0x7c));
    *(unsigned int *)(param_2 + 0x78) = 1;
  }
  return;
}

