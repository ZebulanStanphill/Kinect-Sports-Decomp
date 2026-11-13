void fn_82DA1028(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 0x30 +
          *(int *)(*(int *)(param_1 + 0x30) + 0x1c);
  *(unsigned char *)(iVar1 + param_2) =
       *(unsigned char *)(iVar1 + param_2) & ~(unsigned char)(3 << (param_3 << 1)) |
       (unsigned char)(0 << (param_3 << 1));
  return;
}

