extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822F6FE0();
extern int fn_82365BD8();
extern int memcpy();
extern unsigned int lbl_82196582;
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE6B4;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_822F33D0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,int param_6,unsigned int param_7)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [1];
  
  iVar5 = fn_82365BD8(auStack_50,param_6);
  param_1[2] = param_2;
  param_1[5] = param_5;
  param_1[3] = param_3;
  param_1[1] = 9;
  *param_1 = &lbl_821ADF3C;
  param_1[4] = param_4;
  fn_82365BD8(param_1 + 6,iVar5);
  param_1[8] = param_7;
  if (*(int *)(iVar5 + 4) != 0) {
    fn_822315A0();
  }
  param_1[9] = 0;
  *param_1 = &lbl_821AE6B4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  memcpy(param_1 + 0x18,0xffffffff8329ead0,0x40);
  iVar5 = param_1[4];
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  uVar4 = ltcg_pool_0_0f;
  iVar1 = param_1[3];
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0x28) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  param_1[0x30] = &lbl_82196582;
  param_1[0x2c] = uVar4;
  param_1[0x2d] = uVar4;
  param_1[0x2f] = uVar4;
  param_1[0x32] = uVar4;
  piVar2 = *(int **)(*(int *)(iVar1 + 0x2c) * 4 + *(int *)(iVar5 + 0x20));
  if ((piVar2[1] - *piVar2 & 0xfffffffcU) == 0) {
    fn_822F6FE0(param_1);
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

