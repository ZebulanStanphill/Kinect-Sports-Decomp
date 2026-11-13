extern int fn_822924C0();


int fn_82878410(int param_1,int param_2)

{
  fn_822924C0(param_1 + 4,param_2 + 4);
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_2 + 0x28);
  *(float *)(param_1 + 0x2c) = *(float *)(param_2 + 0x2c);
  return param_1;
}

