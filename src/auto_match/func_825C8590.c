extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192510;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831E4D44;


unsigned int *
fn_825C8590(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [12];
  
  param_1[2] = param_6;
  param_1[0x13] = param_2;
  uVar4 = ltcg_pool_0_0f;
  uVar3 = lbl_82192510;
  uVar2 = lbl_821922D4;
  param_1[0x14] = param_3;
  uVar5 = lbl_831E4D44;
  param_1[1] = param_5;
  uVar6 = lbl_821916FC;
  param_1[0x15] = param_4;
  param_1[3] = param_1[3] & 0x7fffffff;
  param_1[5] = uVar4;
  param_1[7] = param_1[7] & 0x7fffffff;
  param_1[9] = uVar4;
  param_1[0x11] = uVar4;
  *param_1 = 0;
  param_1[0xe] = uVar2;
  param_1[0xb] = 0;
  param_1[0x10] = uVar3;
  param_1[0xf] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar4;
  param_1[0x12] = uVar6;
  uVar6 = fn_8263C7F0(1,1,1,1,0,0x18280186,0,3);
  param_1[0x21] = uVar6;
  fn_8263BDD8(uVar6,0,0,0,&puStack_30,auStack_24,auStack_28,auStack_2c);
  *puStack_30 = 0xff0064ff;
  iVar1 = param_1[0x21];
  fn_8262FBD8(iVar1,*(unsigned int *)(iVar1 + 0x20) & 0xfffff000,*(unsigned int *)(iVar1 + 0x30) & 0xfffff000)
  ;
  return param_1;
}

