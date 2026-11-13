void fn_82DAA750(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  if (param_3 + 4 != (unsigned int *)0x0) {
    uVar1 = param_2[0x1a];
    *(unsigned char *)(param_3 + 4) = 4;
    *(unsigned char *)((int)param_3 + 0x11) = 0;
    *(unsigned char *)((int)param_3 + 0x12) = 1;
    *(unsigned short *)(param_3 + 5) = 0x30;
    *(unsigned short *)((int)param_3 + 0x16) = 0xffff;
    *(unsigned short *)(param_3 + 8) = *(unsigned short *)(param_1 + 0x10);
    param_3[9] = *(unsigned int *)(param_1 + 0x14);
    param_3[10] = *(unsigned int *)(param_1 + 0x18);
    param_3[0xb] = *(unsigned int *)(param_1 + 0x1c);
    param_3[0xd] = param_2[0x13];
    *(unsigned char *)(param_3 + 0xe) = *(unsigned char *)(param_2 + 0x16);
    param_3[0xc] = uVar1;
  }
  *param_2 = param_2[0x1b];
  *param_3 = 0;
  *(unsigned char *)((int)param_3 + 0x12) = 1;
  return;
}

