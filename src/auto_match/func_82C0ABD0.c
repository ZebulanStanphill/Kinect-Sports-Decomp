unsigned __int64 fn_82C0ABD0(unsigned int param_1,unsigned int *param_2)

{
  if ((param_1 != 0) && (param_2 != (unsigned int *)0x0)) {
    *param_2 = (unsigned int)*(unsigned short *)(param_1 + 0x3c);
    param_2[2] = (unsigned int)*(unsigned short *)(param_1 + 0x4c);
    param_2[1] = *(unsigned int *)(param_1 + 0x40);
    param_2[3] = *(unsigned int *)(param_1 + 0x20);
    param_2[4] = *(unsigned int *)(param_1 + 0x14);
    *(unsigned __int64 *)(param_2 + 6) = *(unsigned __int64 *)(param_1 + 0x28);
    *(unsigned __int64 *)(param_2 + 8) = *(unsigned __int64 *)(param_1 + 0x30);
    param_2[10] = *(unsigned int *)(param_1 + 0x224);
    param_2[0xb] = *(unsigned int *)(param_1 + 0xdc);
    param_2[0xc] = *(int *)(param_1 + 0x44) << 3;
    *(unsigned short *)(param_2 + 0xd) = *(unsigned short *)(param_1 + 0x58);
    *(unsigned short *)((int)param_2 + 0x36) = *(unsigned short *)(param_1 + 0x5a);
    *(unsigned short *)(param_2 + 0xe) = *(unsigned short *)(param_1 + 0x5c);
    param_2[0x13] = *(unsigned int *)(param_1 + 0x60);
    param_2[0xf] = *(unsigned int *)(param_1 + 100);
    *(unsigned short *)(param_2 + 0x10) = *(unsigned short *)(param_1 + 0x68);
    *(unsigned short *)((int)param_2 + 0x42) = *(unsigned short *)(param_1 + 0x6a);
    param_2[0x11] = *(unsigned int *)(param_1 + 0x6c);
    param_2[0x12] = *(unsigned int *)(param_1 + 0x70);
    return 0;
  }
  return 2;
}

