extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B6788();
extern int fn_822C5B18();
extern int fn_822C8C08();
extern int fn_822FB198();
extern int fn_823000E0();
extern int fn_82368CD8();
extern unsigned int iStack_a0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_82314B78(int param_1)

{
  int iVar2;
  unsigned char *puVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  double dVar5;
  float afStack_b0 [2];
  int aiStack_a8 [2];
  int iStack_a0;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [24];
  
  uVar4 = 0;
  dVar5 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x38) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 2;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  afStack_b0[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  *(float *)(param_1 + 0x44) = (afStack_b0[0] - lbl_821CA460) * lbl_821922D0;
  fn_82368CD8(*(unsigned int *)(param_1 + 0x10),auStack_80,auStack_90,afStack_b0,aiStack_a8);
  *(unsigned int *)(param_1 + 0x18) = 1;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x28);
  if (aiStack_a8[0] == iVar2) {
    *(unsigned int *)(param_1 + 0x18) = uVar4;
  }
  else if (iStack_a0 == iVar2) {
    *(unsigned int *)(param_1 + 0x18) = 2;
  }
  iVar2 = fn_822B6788();
  if (iVar2 == 0) {
    fn_82230110(auStack_60,0xffffffff821af674);
    fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_60);
    puVar3 = auStack_60;
  }
  else {
    fn_82230110(auStack_40,0xffffffff821af684);
    fn_822FB198(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_40);
    puVar3 = auStack_40;
  }
  fn_82230300(puVar3,1,0);
  fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  *(float *)(*(int *)(param_1 + 0xc) + 500) = (float)dVar5;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e8);
  *(unsigned int *)(iVar2 + 0x578) = 0x7fe;
  uVar1 = fn_822C5B18(auStack_80,(unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 0x978);
  fn_823000E0(iVar2,uVar1);
  return;
}

