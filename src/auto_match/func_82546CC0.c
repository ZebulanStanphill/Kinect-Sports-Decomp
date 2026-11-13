extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_8226D318();
extern int fn_82543D00();
extern int fn_82544300();
extern int fn_82544E80();
extern int fn_82544F40();
extern int fn_82545810();
extern int fn_82547198();
extern int fn_825474D0();
extern int fn_8262FBD8();
extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263BE98();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern int fn_8263DE70();
extern int fn_8263FB38();
extern int fn_826458F8();
extern int fn_82647308();
extern int iRam8326b378;
extern int iRam8326b380;
extern int iRam8326b384;
extern int iRam8326b388;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B370;
extern unsigned int lbl_8326B374;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B38C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_8326B394;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B484;
extern unsigned int uRam00000000;
extern unsigned int uRam8326b418;
extern unsigned int uRam8326b41c;
extern unsigned int uRam8326b4b0;
extern unsigned int uRam8326b4b4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82546CC0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int auStack_e0 [2];
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char auStack_c0 [192];
  
  fn_82547198(param_1,auStack_c0);
  if (lbl_8320A898 == 0) {
    fn_82647308(0,1,0,0,auStack_c0,0xffffffff8320a898);
    auStack_e0[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_d4 = 0x400000;
    uStack_cc = 0x80;
    fn_826458F8(lbl_8320A898,auStack_e0);
  }
  else {
    fn_82544F40();
    fn_8263A1B8(lbl_8320A898,0,0);
    iVar2 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x314c) = 0;
    uVar1 = *(unsigned int *)(iVar2 + 0x2f08);
    *(unsigned int *)(iVar2 + 0x2f08) = uVar1;
    *(unsigned int *)(iVar2 + 0x28dc) =
         (-(unsigned int)(*(int *)(iVar2 + 0x314c) != 0) & uVar1 & 0xf) << 4 |
         *(unsigned int *)(iVar2 + 0x28dc) & 0xffffff0f;
    *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x2000000000;
    iVar2 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x3150) = 0;
    uVar1 = *(unsigned int *)(iVar2 + 0x2f0c);
    *(unsigned int *)(iVar2 + 0x2f0c) = uVar1;
    *(unsigned int *)(iVar2 + 0x28dc) =
         (-(unsigned int)(*(int *)(iVar2 + 0x3150) != 0) & uVar1 & 0xf) << 8 |
         *(unsigned int *)(iVar2 + 0x28dc) & 0xfffff0ff;
    *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x2000000000;
    iVar2 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x3154) = 0;
    uVar1 = *(unsigned int *)(iVar2 + 0x2f10);
    *(unsigned int *)(iVar2 + 0x2f10) = uVar1;
    *(unsigned int *)(iVar2 + 0x28dc) =
         (-(unsigned int)(*(int *)(iVar2 + 0x3154) != 0) & uVar1 & 0xf) << 0xc |
         *(unsigned int *)(iVar2 + 0x28dc) & 0xffff0fff;
    *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x2000000000;
    fn_8263A508(lbl_8320A898,0);
  }
  if (lbl_8326B370 != 0) {
    if (iRam8326b388 == 0) {
      iRam8326b388 = lbl_8326B370;
    }
    else {
      fn_82545810(0xffffffff8326b370);
    }
    uRam8326b4b0 = 1;
    uRam8326b4b4 = 3;
  }
  if (lbl_8326B37C != 0) {
    fn_8262FEC8();
    lbl_8326B37C = 0;
  }
  if (lbl_8326B374 != 0) {
    fn_8262FEC8();
    lbl_8326B374 = 0;
  }
  if (iRam8326b378 != 0) {
    fn_8262FEC8();
    iRam8326b378 = 0;
  }
  if (iRam8326b380 != 0) {
    fn_8262FEC8();
    iRam8326b380 = 0;
  }
  if (iRam8326b384 != 0) {
    fn_8262FEC8();
    iRam8326b384 = 0;
  }
  if (lbl_8326B38C != 0) {
    fn_8262FEC8();
    lbl_8326B38C = 0;
  }
  if (lbl_8326B390 != 0) {
    fn_8262FEC8();
    lbl_8326B390 = 0;
  }
  uRam8326b418 = *(unsigned int *)(param_1 + 4);
  uRam8326b41c = *(unsigned int *)(param_1 + 8);
  lbl_8326B370 = fn_8263C7F0(0x500,0x2d0,1,1,1,0x28280106,0,3);
  uVar4 = uRam8326b41c;
  uVar3 = uRam8326b418;
  auStack_e0[0] = fn_8226D318(uRam8326b418,uRam8326b41c,0x1a220197,0);
  uStack_d8 = 0;
  uStack_d4 = 0;
  lbl_8326B374 = fn_8263C910(uVar3,uVar4,0x18280186,0,auStack_e0);
  uVar4 = lbl_8326B434;
  uVar3 = lbl_8326B430;
  auStack_e0[0] = fn_8226D318(lbl_8326B430,lbl_8326B434,0x1a220197,0);
  uStack_d8 = 0;
  lbl_8326B37C = fn_8263C910(uVar3,uVar4,0x18280186,0,auStack_e0);
  auStack_e0[0] = fn_8226D318(0x500,0x2d0,0x1a220197,0);
  uStack_d8 = 0;
  iRam8326b380 = fn_8263C910(0x500,0x2d0,0x18280186,0,auStack_e0);
  fn_8263A1B8(lbl_8320A898,0);
  fn_8263DE70((double)lbl_821CA460,lbl_8320A898,0,0,0xf,0);
  fn_8263FB38((double)ltcg_pool_0_0f,lbl_8320A898,0,0,lbl_8326B370,0,0,0,0);
  auStack_e0[0] = 0;
  iRam8326b384 = fn_8263C910(0x500,0x2d0,0x1a220197,0,auStack_e0);
  auStack_e0[0] = 0;
  lbl_8326B38C = fn_8263C910(uRam8326b418,uRam8326b41c,0x1a220197,0,auStack_e0);
  auStack_e0[0] = 0;
  lbl_8326B390 = fn_8263C910(lbl_8326B430,lbl_8326B434,0x1a220197,0,auStack_e0);
  if (lbl_8326B484 < 0x17) {
    fn_825474D0(lbl_8326B484);
  }
  fn_82544E80(lbl_8320A898);
  fn_82544300();
  fn_82543D00();
  lbl_8326B394 = fn_8263C7F0(1,1,1,1,0,0x18280186,0,3);
  fn_8263BE98(lbl_8326B394,0,0,auStack_e0,0,0);
  uRam00000000 = 0;
  fn_8262FBD8(lbl_8326B394,*(unsigned int *)(lbl_8326B394 + 0x20) & 0xfffff000,
                    *(unsigned int *)(lbl_8326B394 + 0x30) & 0xfffff000);
  return;
}

