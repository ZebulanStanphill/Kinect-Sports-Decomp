void fn_8291E860(int param_1,int param_2)

{
  *(unsigned short *)(param_1 + 3) = *(unsigned short *)(param_2 + 3) << 8 | *(unsigned short *)(param_2 + 3) >> 8;
  *(unsigned short *)(param_1 + 5) = *(unsigned short *)(param_2 + 5) << 8 | *(unsigned short *)(param_2 + 5) >> 8;
  *(unsigned short *)(param_1 + 8) = *(unsigned short *)(param_2 + 8) << 8 | *(unsigned short *)(param_2 + 8) >> 8;
  *(unsigned short *)(param_1 + 10) = *(unsigned short *)(param_2 + 10) << 8 | *(unsigned short *)(param_2 + 10) >> 8;
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc) << 8 | *(unsigned short *)(param_2 + 0xc) >> 8;
  *(unsigned short *)(param_1 + 0xe) = *(unsigned short *)(param_2 + 0xe) << 8 | *(unsigned short *)(param_2 + 0xe) >> 8;
  return;
}

