typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_826BC950();
extern int fn_82743730();
extern int fn_827450A8();
extern int fn_82745128();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_78;
extern unsigned int uStack_a8;


void fn_82745428(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  char cVar5;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar6;
  unsigned char *puVar7;
  __int64 lVar8;
  double dVar9;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [48];
  unsigned char auStack_b0 [8];
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  unsigned __int64 uStack_78;
  char acStack_70 [16];
  char acStack_60 [16];
  unsigned char auStack_50 [8];
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  cVar5 = fn_82695468(param_1,0x11);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    return;
  }
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
    lVar6 = 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1,0);
  iVar4 = fn_82696958(uVar3,uVar1);
  puVar7 = auStack_100;
  lVar8 = 4;
  do {
    puVar7 = puVar7 + 0x10;
    *puVar7 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (iVar4 == 0) {
    fn_827450A8(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    uStack_78 = fn_826BC950();
    lVar8 = 3;
    auStack_80[0] = 3;
    fn_82695FA0(auStack_f0,auStack_80);
    fn_82696330(auStack_80);
    uStack_38 = fn_826BC950();
    auStack_40[0] = 3;
    fn_82695FA0(auStack_e0,auStack_40);
    fn_82696330(auStack_40);
    fn_82745128(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    puVar7 = auStack_b0;
    do {
      puVar7 = puVar7 + -0x10;
      fn_82696330(puVar7);
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    return;
  }
  puVar7 = auStack_80;
  lVar8 = 2;
  do {
    puVar7 = puVar7 + 0x10;
    *puVar7 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fn_82743730(*(unsigned int *)(param_1 + 0x18),iVar4,acStack_70);
  iVar4 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
  if (iVar4 == 0x10) {
LAB_82745678:
    fn_827450A8(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    dVar9 = (double)fn_826972E0(acStack_70,*(unsigned int *)(param_1 + 0x18));
    dStack_98 = (double)fn_826972E0(auStack_f0,*(unsigned int *)(param_1 + 0x18));
    lVar8 = 3;
    dStack_98 = dVar9 + dStack_98;
    auStack_a0[0] = 3;
    fn_82695FA0(auStack_f0,auStack_a0);
    fn_82696330(auStack_a0);
    dVar9 = (double)fn_826972E0(acStack_60,*(unsigned int *)(param_1 + 0x18));
    dStack_88 = (double)fn_826972E0(auStack_e0,*(unsigned int *)(param_1 + 0x18));
    dStack_88 = dVar9 + dStack_88;
    auStack_90[0] = 3;
    fn_82695FA0(auStack_e0,auStack_90);
    fn_82696330(auStack_90);
    fn_82745128(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    puVar7 = auStack_50;
    lVar6 = 1;
    do {
      puVar7 = puVar7 + -0x10;
      fn_82696330(puVar7);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    puVar7 = auStack_b0;
    do {
      puVar7 = puVar7 + -0x10;
      fn_82696330(puVar7);
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  else {
    if ((acStack_70[0] == '\0') || (bVar2 = false, acStack_70[0] == '\n')) {
      bVar2 = true;
    }
    if (!bVar2) {
      if ((acStack_60[0] == '\0') || (bVar2 = false, acStack_60[0] == '\n')) {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_82745678;
    }
    fn_827450A8(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    uStack_48 = fn_826BC950();
    lVar8 = 3;
    auStack_50[0] = 3;
    fn_82695FA0(auStack_f0,auStack_50);
    fn_82696330(auStack_50);
    uStack_a8 = fn_826BC950();
    auStack_b0[0] = 3;
    fn_82695FA0(auStack_e0,auStack_b0);
    fn_82696330(auStack_b0);
    fn_82745128(lVar6,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_f0);
    puVar7 = auStack_50;
    lVar6 = 1;
    do {
      puVar7 = puVar7 + -0x10;
      fn_82696330(puVar7);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    puVar7 = auStack_b0;
    do {
      puVar7 = puVar7 + -0x10;
      fn_82696330(puVar7);
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  return;
}

