extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C70F0();
extern int fn_82303AC0();
extern int fn_8234E590();
extern int fn_8251F720();
extern unsigned int lbl_821AEE3C;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82303038(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_90 [1];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [48];

  fn_82230110(auStack_90,0xffffffff821aee20);
  fn_822C70F0(param_1,auStack_90,param_2);
  fn_82230300(auStack_90,1,0);
  param_1[0x15] = param_4;
  uVar2 = ltcg_pool_0_0f;
  *param_1 = &lbl_821AEE3C;
  param_1[0x16] = uVar2;
  uVar2 = fn_8251F720(param_5,0);
  param_1[0x17] = uVar2;
  fn_8234E590(param_1 + 0x18,param_3,*(unsigned int *)(param_2 + 8),
                    *(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_4 + 0x118));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(unsigned char *)(param_1 + 0x31) = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x34) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x38) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fn_82230110(auStack_70,0xffffffff821aee2c);
  fn_82303AC0(param_1,param_1 + 0x2a,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,0xffffffff821aee34);
  fn_82303AC0(param_1,param_1 + 0x2b,auStack_50);
  fn_82230300(auStack_50,1,0);
  return param_1;
}
