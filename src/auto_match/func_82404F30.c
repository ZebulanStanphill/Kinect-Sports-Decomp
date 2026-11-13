extern int fn_822315A0();
extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_822997C8();
extern int fn_8265C9E0();
extern int memcpy();
extern unsigned int lbl_821B7D68;
extern unsigned int lbl_821B7D8C;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82404F30(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int *param_6,unsigned int param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  param_1[3] = param_5;
  param_1[5] = param_4;
  param_1[2] = param_2;
  param_1[4] = param_3;
  *param_1 = &lbl_821B7D68;
  param_1[1] = 7;
  param_1[6] = 8;
  uVar2 = ltcg_pool_0_0f;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = *param_6;
  param_1[0xf] = *(unsigned int *)(param_8 + 0x148);
  uVar1 = *(unsigned int *)(param_8 + 0x148);
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  memcpy(param_1 + 0x13,param_6,0x54);
  param_1[0x28] = param_7;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  puVar3 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_821B7D8C;
    puVar3[1] = 1;
    puVar3[2] = 1;
    puVar3[3] = 0;
  }
  if (param_1[0x2a] != 0) {
    fn_822315A0();
  }
  param_1[0x2a] = puVar3;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  puVar3 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_821B7D8C;
    puVar3[1] = 1;
    puVar3[2] = 1;
    puVar3[3] = 0;
  }
  if (param_1[0x2c] != 0) {
    fn_822315A0();
  }
  param_1[0x2c] = puVar3;
  param_1[0x2b] = 0;
  fn_8227D7E8(param_1 + 0x30);
  fn_822997C8(param_1 + 0x44);
  fn_8227D908(param_1 + 0x30,4);
  return param_1;
}

