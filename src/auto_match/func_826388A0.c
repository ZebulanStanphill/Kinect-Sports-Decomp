extern unsigned int lbl_82192F70;


void fn_826388A0(int param_1,float param_2)

{
  unsigned short uVar1;
  
  *(float *)(param_1 + 0x2f24) = param_2;
  uVar1 = (unsigned short)(int)(param_2 * lbl_82192F70);
  *(unsigned short *)(param_1 + 0x2966) = uVar1;
  *(unsigned short *)(param_1 + 0x2964) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x40000000000000;
  return;
}

