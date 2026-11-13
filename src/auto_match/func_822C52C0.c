typedef unsigned char bool;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_822C5550();
extern int fn_82522ED8();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F3A60();
extern int fn_827F3AB0();
extern int fn_827F3B30();
extern int fn_827F3B90();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827F7210();
extern int fn_827F74C0();
extern int fn_827F94B0();
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


bool fn_822C52C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5,float *param_6)

{
  bool bVar1;
  int in_r0;
  unsigned int *puVar9;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int auStack_c0 [4];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  puVar9 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar9 = in_register_000104d0;
  puVar9[1] = in_register_000104d4;
  puVar9[2] = in_register_000104d8;
  puVar9[3] = in_vr77;
  *param_6 = ltcg_pool_0_0f;
  fn_8255F880(auStack_c0,param_2);
  puVar9 = (unsigned int *)fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_c0);
  fn_827F3C20();
  uVar2 = fn_827F7210();
  bVar1 = (param_3 & 0xffffffff) < (uVar2 & 0xffff);
  if (bVar1) {
    auStack_c0[0] = 0;
    fn_82811438(auStack_b0,auStack_c0,0x10);
    uVar3 = fn_827F3AB0(puVar9);
    uVar4 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_b0);
    fn_827F3B90(puVar9,uVar4,uVar3);
    uVar3 = fn_827F3A60(puVar9);
    uVar3 = fn_82811080(0xffffffff8320a3e0,uVar3,auStack_b0);
    fn_827F3B30(puVar9,uVar3);
    uVar2 = fn_827F3EB0(puVar9);
    uVar5 = fn_82811080(0xffffffff8320a3e0,(uVar2 & 0x3ffffff) << 6,auStack_b0);
    uVar6 = fn_827F3C20(puVar9);
    fn_827F74C0(uVar6,uVar5);
    lVar7 = fn_827F3EB0(puVar9);
    uVar6 = fn_82811080(0xffffffff8320a3e0,lVar7 * 0x34,auStack_b0);
    fn_82F68CC0(uVar6,*(unsigned int *)(*(int *)(puVar9[0x78] + 0x48) + 0x2c),lVar7 * 0x34);
    uVar8 = fn_827F3C20(puVar9);
    fn_827F94B0(uVar8,uVar6);
    fn_822C5550(param_1,puVar9,param_3);
    uVar8 = fn_827F3C20(puVar9);
    fn_827F94B0(uVar8,0);
    auStack_c0[0] = 3;
    uVar8 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar6,uVar8);
    uVar6 = fn_827F3C20(puVar9);
    fn_827F74C0(uVar6,0);
    auStack_c0[0] = 3;
    uVar6 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar5,uVar6);
    fn_827F3B30(puVar9,0);
    auStack_c0[0] = 3;
    uVar5 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar3,uVar5);
    fn_827F3B90(puVar9,0,0);
    auStack_c0[0] = 3;
    uVar3 = fn_82811438(auStack_90,auStack_c0,0x10);
    fn_82811238(0xffffffff8320a3e0,uVar4,uVar3);
  }
  (**(int (***)())*puVar9)(puVar9,0);
  fn_82522ED8(puVar9);
  return bVar1;
}

