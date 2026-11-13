extern unsigned int *auStack_30;
extern int fn_82545810();
extern int fn_82547650();
extern int fn_82631920();
extern int fn_82631C78();
extern int fn_82639EA8();
extern int fn_8263E9F0();
extern int fn_82647C20();
extern int fn_82648160();
extern int fn_82A1E7D8();
extern unsigned int lbl_8217D960;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B370;
extern unsigned int lbl_8326B388;
extern unsigned int lbl_8326B474;
extern unsigned int lbl_8326B48C;
extern unsigned int lbl_8326B4B0;
extern unsigned int lbl_8326B4B4;
extern unsigned int lbl_8326F750;
extern unsigned int lbl_83296BB8;


void fn_825467B8(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [48];
  
  fn_82639EA8(lbl_8320A898,0xffffffff83296a14);
  lbl_83296BB8 = 0;
  fn_82647C20(lbl_8320A898,0);
  iVar3 = lbl_8326B370;
  iVar5 = lbl_8320A898;
  if (lbl_8326B48C == 0) {
    puVar1 = (unsigned int *)((unsigned int)(&lbl_8217D960 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    fn_8263E9F0((double)lbl_821CA460,iVar5,0x100,0,0,0,iVar3,0,0);
  }
  iVar5 = lbl_8320A898;
  lbl_8326B474 = 0;
  *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xffffff8f | 0x30;
  uVar4 = *(unsigned __int64 *)(iVar5 + 0x10);
  *(unsigned __int64 *)(iVar5 + 0x10) = uVar4 | 0x800;
  *(unsigned __int64 *)(iVar5 + 0x10) = uVar4 | 0x20800;
  fn_82631C78(lbl_8320A898,0,0,0);
  fn_82A1E7D8(lbl_8326F750);
  fn_82547650();
  fn_82631920(lbl_8320A898,0);
  if ((lbl_8326B388 == 0) || (iVar5 = lbl_8326B388, lbl_8326B4B0 < 1)) {
    iVar5 = lbl_8326B370;
  }
  fn_82648160(lbl_8320A898,iVar5,0);
  if (lbl_8326B388 != 0) {
    if (lbl_8326B4B4 < 1) {
      fn_82545810(0xffffffff8326b388);
    }
    lbl_8326B4B4 = lbl_8326B4B4 + -1;
    lbl_8326B4B0 = lbl_8326B4B0 + -1;
  }
  return;
}

