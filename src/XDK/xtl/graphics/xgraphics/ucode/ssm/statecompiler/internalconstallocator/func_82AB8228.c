unsigned __int64 fn_82AB8228(double param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = param_3 * 0x24 + param_2;
  uVar1 = *(unsigned int *)(iVar2 + 0x10);
  *(unsigned int *)(iVar2 + 0x10) =
       (1 << (param_4 & 0x3f) & 0xfU) << 0x14 | uVar1 & 0xfff00fff |
       (~(3 << (param_4 << 1 & 0x3e)) << 0xc & uVar1 | (0 << (param_4 << 1 & 0x3e)) << 0xc) &
       0xff000;
  *(float *)(param_4 * 8 + param_3 * 0x24 + param_2 + 0x14) = (float)param_1;
  return 0;
}

