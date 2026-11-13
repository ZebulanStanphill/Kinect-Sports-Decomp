extern int fn_8267B7E0();
extern int fn_826F6DD0();


void fn_826F6E48(int param_1,int param_2)

{
  fn_826F6DD0();
  fn_8267B7E0(param_2,0x20000);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x2c);
  return;
}

