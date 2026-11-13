extern int fn_8286CE28();


unsigned __int64 fn_8286CEC0(int param_1)

{
  *(unsigned char *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 8);
  fn_8286CE28();
  return 1;
}

