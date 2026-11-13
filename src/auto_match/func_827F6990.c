void fn_827F6990(int param_1,int *param_2)

{
  *param_2 = ((unsigned int)*(unsigned short *)(param_1 + 0x30) + (unsigned int)*(unsigned short *)(param_1 + 0x2e) +
             (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc) * 4 +
             ((int)(*(unsigned short *)(param_1 + 0x32) + 7) >> 3) + *(int *)(param_1 + 0x84);
  return;
}

