extern unsigned int *auStack_40;
extern int fn_825306A0();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263E9F0();
extern int fn_8263FB38();
extern int fn_82645110();
extern int fn_82646390();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326AF54;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_83296BB8;


void fn_82545F78(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned __int64 uVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_40 [64];
  
  puVar1 = (unsigned int *)((unsigned int)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  fn_82639EA8(lbl_8320A898,0xffffffff83296a14);
  lbl_83296BB8 = 0;
  dVar5 = (double)lbl_821CA460;
  if (lbl_8326AF54 < 2) {
    fn_8263FB38(dVar5,lbl_8320A898,0x14,0,0xffffffff8326afc0,0,0,0,0);
    fn_8263FB38(dVar5,lbl_8320A898,0,0,0xffffffff8326af58,0,0,0,0);
  }
  else {
    fn_8263E9F0();
    fn_82646390(dVar5,lbl_8320A898,0x300,0,0xffffffff8326af58,auStack_40);
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xffffff8f | 0x30;
    uVar4 = *(unsigned __int64 *)(iVar3 + 0x10);
    *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x800;
    *(unsigned __int64 *)(iVar3 + 0x10) = uVar4 | 0x20800;
    fn_8263A1B8(lbl_8320A898,0,lbl_8326B37C);
    fn_8263A508(lbl_8320A898,lbl_8326B390);
    *(unsigned int *)(lbl_8320A898 + 0x2ab0) = *(unsigned int *)(lbl_8320A898 + 0x2a9c);
    fn_82645110();
  }
  fn_825306A0(1);
  return;
}

