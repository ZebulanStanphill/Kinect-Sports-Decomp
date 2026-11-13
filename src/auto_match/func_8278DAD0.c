extern int fn_8268BEA8();
extern int fn_8278D038();
extern int fn_8278D2E0();
extern int fn_8278D368();


void fn_8278DAD0(int param_1)

{
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xff000000;
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) | 1;
  fn_8278D038(param_1,"Times New Roman",0xffffffffffffffff);
  *(unsigned short *)(param_1 + 0x26) = 0xf0;
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) | 8;
  fn_8278D2E0(param_1,0);
  fn_8278D368(param_1,0);
  *(unsigned short *)(param_1 + 0x24) = 0;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 0xf3;
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0xff000000;
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) & 0xfb3d | 0xc0;
  fn_8268BEA8(param_1 + 0x10);
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0x2a) & 0xfeff;
  return;
}

