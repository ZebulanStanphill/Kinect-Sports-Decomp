extern int fn_828EC900();


void fn_828EE090(int param_1,unsigned char param_2,unsigned char param_3)

{
  *(unsigned char *)(param_1 + 0x228) = param_2;
  *(unsigned char *)(param_1 + 0x229) = param_3;
  *(unsigned char *)(param_1 + 0x1e2) = 0;
  *(unsigned char *)(param_1 + 0x1e1) = 1;
  *(unsigned int *)(param_1 + 0x1e4) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x224) = 0;
  *(unsigned char *)(param_1 + 0x148) = 0;
  *(unsigned char *)(param_1 + 0x149) = 0;
  *(unsigned char *)(param_1 + 0x14a) = 0;
  *(unsigned char *)(param_1 + 0x14c) = 0;
  *(unsigned char *)(param_1 + 0x14b) = 0;
  *(unsigned char *)(param_1 + 0x14d) = 0;
  *(unsigned char *)(param_1 + 0x14e) = 0;
  *(unsigned char *)(param_1 + 0x14f) = 0;
  *(unsigned int *)(param_1 + 0x150) = 0x10;
  *(unsigned int *)(param_1 + 0x154) = 0;
  fn_828EC900();
  return;
}
