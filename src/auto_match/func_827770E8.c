extern int fn_82776D18();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015388;
extern unsigned int lbl_82015398;
extern unsigned int lbl_8201539C;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int * fn_827770E8(unsigned int *param_1,unsigned char param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  *param_1 = &lbl_8201539C;
  param_1[2] = 0x12;
  param_1[1] = 1;
  param_1[3] = 0x400;
  param_1[4] = 0x400;
  param_1[5] = 1;
  param_1[6] = 0x30;
  param_1[7] = 2;
  uVar1 = lbl_82002AE0;
  param_1[8] = 0x100;
  uVar3 = lbl_82015398;
  param_1[9] = 0x200;
  uVar2 = lbl_82015388;
  *(unsigned char *)(param_1 + 10) = param_2;
  param_1[0xb] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xd] = 0x200;
  param_1[0xf] = uVar2;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  stack_pair_50.first = 0x400;
  stack_pair_50.second = 0x400;
  uStack_48 = 1;
  uStack_44 = 0x30;
  uStack_40 = 2;
  uStack_3c = 0x100;
  uStack_38 = 0x200;
  fn_82776D18(param_1,&stack_pair_50.first);
  return param_1;
}

