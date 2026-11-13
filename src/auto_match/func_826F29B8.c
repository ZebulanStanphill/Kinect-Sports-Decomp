extern unsigned int lbl_8200DADC;


void fn_826F29B8(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  *param_1 = &lbl_8200DADC;
  *(unsigned char *)((int)param_1 + 5) = 0;
  iVar1 = ((int)param_1 + 0xf7U & 0xfffffffc) + 4;
  *(unsigned short *)((int)param_1 + 6) = 0;
  *(unsigned char *)(param_1 + 1) = 0x25;
  param_1[3] = 0;
  *(unsigned short *)(param_1 + 2) = 0xffff;
  param_1[5] = 0;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x3d] = 0;
  param_1[0xbe] = iVar1;
  param_1[0xbf] = (int)param_1 + (0x2f8 - iVar1);
  return;
}

