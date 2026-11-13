extern unsigned int lbl_8200DBF8;


void fn_826F86D0(unsigned int *param_1)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DBF8;
  *(unsigned char *)((int)param_1 + 0xb) = 0x80;
  *(unsigned char *)(param_1 + 2) = 0;
  *(unsigned char *)((int)param_1 + 9) = 0;
  *(unsigned char *)((int)param_1 + 10) = 0x10;
  *(unsigned char *)(param_1 + 3) = 0x40;
  *(unsigned char *)((int)param_1 + 0xd) = 0x40;
  *(unsigned char *)((int)param_1 + 0xe) = 0x10;
  *(unsigned char *)((int)param_1 + 0xf) = 0xff;
  *(unsigned short *)(param_1 + 4) = 0x1c2;
  *(unsigned short *)((int)param_1 + 0x12) = 0x50;
  *(unsigned short *)(param_1 + 5) = 0x39;
  *(unsigned short *)((int)param_1 + 0x16) = 0x39;
  param_1[6] = 0;
  return;
}

