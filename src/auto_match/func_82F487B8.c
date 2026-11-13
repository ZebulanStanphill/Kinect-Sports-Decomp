extern int fn_82E579E0();


unsigned __int64 fn_82F487B8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x28) = param_2;
  if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    fn_82E579E0(param_1 + 0x30);
  }
  return 0;
}

