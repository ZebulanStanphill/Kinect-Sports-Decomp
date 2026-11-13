extern int memcpy();
extern int fn_82FE0080();
extern int fn_82FE0190();
extern int fn_82FE02A0();
extern int fn_82FE0890();
extern int fn_82FE0960();


typedef struct { float f[20]; } Blk;
void fn_82FE1028(int param_1)

{
  *(Blk *)(param_1 + 0xe4) = *(Blk *)(*(int *)(param_1 + 0xe0) + 4);
  *(unsigned char *)(param_1 + 0xd3) = 0;
  if ((*(float *)(param_1 + 0xe4) != *(float *)(param_1 + 0x1a4)) ||
     (*(float *)(param_1 + 0xe8) != *(float *)(param_1 + 0x1a8))) {
    fn_82FE0960(param_1);
    *(unsigned char *)(param_1 + 0xd3) = 1;
  }
  if (*(float *)(param_1 + 0xec) != *(float *)(param_1 + 0x1ac)) {
    fn_82FE0890(param_1);
  }
  if (((*(float *)(param_1 + 0xf4) != *(float *)(param_1 + 0x1b4)) ||
      (*(float *)(param_1 + 0xf8) != *(float *)(param_1 + 0x1b8))) ||
     (*(float *)(param_1 + 0xfc) != *(float *)(param_1 + 0x1bc))) {
    fn_82FE0080(param_1);
  }
  if (((*(float *)(param_1 + 0x100) != *(float *)(param_1 + 0x1c0)) ||
      (*(float *)(param_1 + 0x104) != *(float *)(param_1 + 0x1c4))) ||
     (*(float *)(param_1 + 0x108) != *(float *)(param_1 + 0x1c8))) {
    fn_82FE0190(param_1);
  }
  if (((*(float *)(param_1 + 0x10c) != *(float *)(param_1 + 0x1cc)) ||
      (*(float *)(param_1 + 0x110) != *(float *)(param_1 + 0x1d0))) ||
     (*(float *)(param_1 + 0x114) != *(float *)(param_1 + 0x1d4))) {
    fn_82FE02A0(param_1);
  }
  if (*(char *)(param_1 + 0xd1) != '\0') {
    *(float *)(param_1 + 0x128) = 0.0f;
  }
  return;
}

