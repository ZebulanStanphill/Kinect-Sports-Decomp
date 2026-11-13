extern int fn_8223B688();


void fn_82674F10(unsigned __int64 param_1,unsigned int param_2,int param_3)

{
  if (param_2 != 0) {
    fn_8223B688(param_2,param_3);
    *(unsigned int *)(param_2 + 0x1c) = *(unsigned int *)(param_3 + 0x1c);
  }
  return;
}

