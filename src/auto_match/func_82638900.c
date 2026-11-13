extern unsigned int lbl_821956B4;


void fn_82638900(int param_1,float param_2)

{
  *(float *)(param_1 + 0x2f28) = param_2;
  *(short *)(param_1 + 0x296a) = (short)(int)(param_2 * lbl_821956B4);
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0x20000000000000;
  return;
}

