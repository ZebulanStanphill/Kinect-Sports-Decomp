unsigned __int64 fn_8307E570(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  
  iVar1 = param_2 * 0x60 + *(int *)(param_1 + 8);
  *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 8) & 0xfc000000 | param_3 & 0x3ffffff;
  *(unsigned int *)(iVar1 + 4) = (param_4 & 7) << 0x18 | *(unsigned int *)(iVar1 + 4) & 0xf8ffffff;
  return 0;
}

