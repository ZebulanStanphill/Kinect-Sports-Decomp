extern int fn_82C038C8();


unsigned char fn_82C130C0(__int64 *param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned char bVar2;
  unsigned char *apbStack_20 [2];
  
  apbStack_20[0] = (unsigned char *)0x0;
  iVar1 = fn_82C038C8(param_1,(param_4 & 0xffffffff) + *param_1,0x18,apbStack_20);
  if (iVar1 == 0x18) {
    *param_2 = (((unsigned int)apbStack_20[0][3] * 0x100 + (unsigned int)apbStack_20[0][2]) * 0x100 +
               (unsigned int)apbStack_20[0][1]) * 0x100 + (unsigned int)*apbStack_20[0];
    *(unsigned short *)(param_2 + 1) = (unsigned short)apbStack_20[0][5] * 0x100 + (unsigned short)apbStack_20[0][4];
    *(unsigned short *)((int)param_2 + 6) = (unsigned short)apbStack_20[0][7] * 0x100 + (unsigned short)apbStack_20[0][6];
    *(unsigned char *)(param_2 + 2) = apbStack_20[0][8];
    *(unsigned char *)((int)param_2 + 9) = apbStack_20[0][9];
    *(unsigned char *)((int)param_2 + 10) = apbStack_20[0][10];
    *(unsigned char *)((int)param_2 + 0xb) = apbStack_20[0][0xb];
    *(unsigned char *)(param_2 + 3) = apbStack_20[0][0xc];
    *(unsigned char *)((int)param_2 + 0xd) = apbStack_20[0][0xd];
    *(unsigned char *)((int)param_2 + 0xe) = apbStack_20[0][0xe];
    *(unsigned char *)((int)param_2 + 0xf) = apbStack_20[0][0xf];
    *param_3 = (((unsigned int)apbStack_20[0][0x13] * 0x100 + (unsigned int)apbStack_20[0][0x12]) * 0x100 +
               (unsigned int)apbStack_20[0][0x11]) * 0x100 + (unsigned int)apbStack_20[0][0x10];
    bVar2 = -(*param_3 < 0x18) & 4;
    param_3[1] = (((unsigned int)apbStack_20[0][0x17] * 0x100 + (unsigned int)apbStack_20[0][0x16]) * 0x100 +
                 (unsigned int)apbStack_20[0][0x15]) * 0x100 + (unsigned int)apbStack_20[0][0x14];
  }
  else {
    bVar2 = 3;
  }
  return bVar2;
}

