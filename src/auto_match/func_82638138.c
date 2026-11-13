extern unsigned int lbl_82192F70;


void fn_82638138(int param_1,float param_2)

{
  *(short *)(param_1 + 0x296e) = (short)(__int64)(param_2 * lbl_82192F70);
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x10000000000000;
  return;
}

