void fn_829BE7C0(int param_1)

{
  int iVar1;
  __int64 in_r7;
  unsigned int *in_r8;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  (**(int (***)())(*(int *)(param_1 + 0x1c8) + 4))(param_1);
  (**(int (***)())(*(int *)(param_1 + 0x1d0) + 4))
            (param_1,*(unsigned int *)(iVar1 + 0xc),((unsigned __int64)*in_r8 & 0x3fffffff) * 4 + in_r7,0);
  *in_r8 = *in_r8;
  return;
}

