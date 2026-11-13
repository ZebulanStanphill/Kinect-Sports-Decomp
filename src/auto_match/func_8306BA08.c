extern int fn_82810280();


void fn_8306BA08(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  double dVar1;
  
  *param_2 = *(unsigned int *)(param_1 + 0x48);
  param_2[1] = *(unsigned int *)(param_1 + 0x4c);
  param_2[2] = *(unsigned int *)(param_1 + 0x50);
  param_2[3] = *(unsigned int *)(param_1 + 0x54);
  param_2[4] = *(unsigned int *)(param_1 + 0x58);
  param_2[5] = *(unsigned int *)(param_1 + 0x5c);
  param_2[6] = *(unsigned int *)(param_1 + 0x60);
  param_2[7] = *(unsigned int *)(param_1 + 100);
  param_2[8] = *(unsigned int *)(param_1 + 0x68);
  param_2[9] = *(unsigned int *)(param_1 + 0x6c);
  param_2[10] = *(unsigned int *)(param_1 + 0x70);
  param_2[0xb] = *(unsigned int *)(param_1 + 0x74);
  param_2[0xc] = *(unsigned int *)(param_1 + 0x78);
  param_2[0xd] = *(unsigned int *)(param_1 + 0x7c);
  param_2[0xe] = *(unsigned int *)(param_1 + 0x80);
  param_2[0xf] = *(unsigned int *)(param_1 + 0x84);
  param_2[0x10] = *(unsigned int *)(param_1 + 0x98);
  param_2[0x11] = *(unsigned int *)(param_1 + 0x9c);
  param_2[0x12] = *(unsigned int *)(param_1 + 0xa0);
  param_2[0x13] = *(unsigned int *)(param_1 + 0xa4);
  param_2[0x10] = -(float)param_2[0x10];
  param_2[0x11] = -(float)param_2[0x11];
  param_2[0x12] = -(float)param_2[0x12];
  param_2[0x13] = -(float)param_2[0x13];
  param_2[0x14] = *(unsigned int *)(param_1 + 0x98);
  param_2[0x15] = *(unsigned int *)(param_1 + 0x9c);
  param_2[0x16] = *(unsigned int *)(param_1 + 0xa0);
  param_2[0x17] = *(unsigned int *)(param_1 + 0xa4);
  dVar1 = (double)fn_82810280(param_2 + 0x14,param_1 + 0x30,param_3,param_4,param_2 + 4);
  param_2[0x17] = (float)dVar1;
  return;
}

