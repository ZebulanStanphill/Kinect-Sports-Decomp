typedef unsigned char undefined1;
typedef unsigned int undefined4;

extern void fn_82780630(int param_1);
extern void fn_827827B0(int param_1);
extern float lbl_82015514[2];

void fn_82782A98(int param_1)
{
  float a;
  float b;

  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  a = lbl_82015514[0];
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(float *)(param_1 + 0xe8) = a;
  *(undefined4 *)(param_1 + 0x60) = 0;
  b = lbl_82015514[1];
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(float *)(param_1 + 0xe0) = b;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0xe4) = b;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(float *)(param_1 + 0xec) = a;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  fn_82780630(param_1);
  fn_827827B0(param_1);
}
