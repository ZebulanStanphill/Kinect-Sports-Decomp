extern unsigned int fStack_3c;
extern int fn_825315E0();
extern int fn_82544918();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DE70();
extern int fn_82645110();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B474;
extern unsigned int lbl_83296BB8;
extern unsigned int uRam8326af54;
extern unsigned int uRam8326b428;
extern unsigned int uRam8326b470;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82545E20(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  float fStack_3c;
  
  lbl_83296BB8 = 1;
  fn_825315E0(lbl_8320A898);
  *(unsigned int *)(lbl_8320A898 + 0x2ab0) = *(unsigned int *)(lbl_8320A898 + 0x2a9c);
  fn_82645110();
  uRam8326af54 = 1;
  fn_8263A1B8(lbl_8320A898,0,lbl_8326B37C);
  fn_8263A508(lbl_8320A898,lbl_8326B390);
  dVar4 = (double)ltcg_pool_0_0f;
  if ((param_1 & 0xffffffff) != 0) {
    uVar2 = uRam8326b428 >> 8 & 0xff;
    fn_8263DE70(dVar4,lbl_8320A898,0,0,param_1,
                      uRam8326b428 >> 8 & 0xffff00 | uRam8326b428 << 0x18 | uVar2,uVar2,0,0);
  }
  uRam8326b470 = 0;
  lbl_8326B474 = 1;
  fn_82544918(1,lbl_8320A898);
  fStack_3c = (float)dVar4;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = lbl_8326B430;
  uStack_40 = lbl_821CA460;
  uStack_44 = lbl_8326B434;
  fn_82639EA8(lbl_8320A898,&uStack_50);
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xffffff8f | 0x60;
  uVar3 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar3 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar3 | 0x20800;
  return;
}

