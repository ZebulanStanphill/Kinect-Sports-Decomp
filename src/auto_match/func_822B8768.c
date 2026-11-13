extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8234B020();
extern int fn_8234C258();
extern int fn_8234EED8();
extern int fn_82359C18();
extern int fn_824CA800();
extern int fn_8255F788();
extern int fn_827F3580();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;


void fn_822B8768(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  double dVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_70 [16];
  unsigned int uStack_60;
  unsigned char auStack_50 [80];
  
  dVar5 = (double)ltcg_pool_0_0f;
  fn_8255F788(dVar5,*(unsigned int *)(param_1 + 0xc));
  uStack_60 = 0;
  fn_824CA800((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 400,auStack_70);
  fn_82359C18(auStack_70);
  uVar2 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(iVar1 + 0x110) = 0;
  *(unsigned int *)(iVar1 + 0x114) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  puVar4 = *(unsigned int **)(iVar1 + 0xec);
  for (puVar3 = *(unsigned int **)(iVar1 + 0xe8); puVar3 != puVar4; puVar3 = puVar3 + 1) {
    *puVar3 = uVar2;
  }
  puVar3 = *(unsigned int **)(iVar1 + 0xfc);
  for (puVar4 = *(unsigned int **)(iVar1 + 0xf8); puVar4 != puVar3; puVar4 = puVar4 + 1) {
    *puVar4 = uVar2;
  }
  fn_827F5708(dVar5);
  fn_827F3580(dVar5,dVar5,*(unsigned int *)(param_1 + 0x2c));
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 1;
  fn_82230360(param_1 + 0x34,0xffffffff821b1d30,9);
  fn_8234EED8(param_1 + 0x28);
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(unsigned int *)(param_1 + 0x13c) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  puVar4 = (unsigned int *)(param_1 + 0xa0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  if (*(int *)(param_1 + 0x268) != 0) {
    fn_827F3580(dVar5,dVar5);
    fn_827F3580(dVar5,dVar5,*(unsigned int *)(param_1 + 0x294));
    *(unsigned int *)(param_1 + 0x270) = 0;
    *(unsigned int *)(param_1 + 0x274) = 0;
    *(unsigned int *)(param_1 + 0x29c) = 0;
    *(unsigned int *)(param_1 + 0x2a0) = 0;
    fn_82230110(auStack_50,0xffffffff821ac494);
    fn_8234C258(param_1 + 0x150,0,auStack_50);
    fn_8234C258(param_1 + 0x150,1,auStack_50);
    fn_827F5708(dVar5,*(unsigned int *)(param_1 + 0x278));
    *(unsigned int *)(param_1 + 0x280) = 0;
    fn_827F5708(dVar5,*(unsigned int *)(param_1 + 0x2a4));
    *(unsigned int *)(param_1 + 0x2ac) = 0;
    fn_82230300(auStack_50,1,0);
  }
  *(unsigned char *)(param_1 + 0x1d4) = 0;
  *(unsigned char *)(param_1 + 0x254) = 0;
  fn_8234B020(param_1 + 0x2c0);
  fn_8255F788(dVar5,*(unsigned int *)(param_1 + 0x32c));
  *(float *)(param_1 + 0x33c) = (float)dVar5;
  if (*(int *)(param_1 + 0x334) != 0) {
    fn_827F5708(dVar5);
  }
  *(float *)(param_1 + 0x348) = (float)dVar5;
  *(float *)(param_1 + 0x354) = (float)dVar5;
  *(float *)(param_1 + 0x360) = (float)dVar5;
  *(float *)(param_1 + 0x364) = (float)dVar5;
  return;
}

