extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_8e;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_827514C8();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82011638;
extern unsigned int uStack_80;
extern unsigned int uStack_8f;
extern unsigned int uStack_90;


void fn_82751AD0(int param_1)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char uStack_90;
  unsigned char uStack_8f;
  unsigned char auStack_8e [1];
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  unsigned __int64 uStack_80;
  unsigned char auStack_70;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar4 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar4 != 0x28)) {
    uVar2 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x3c,0);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_827514C8(uVar2,*(unsigned int *)(param_1 + 0x18));
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar4);
  *(unsigned char *)(iVar4 + 0x31) = 0x40;
  *(unsigned char *)(iVar4 + 0x38) = 0xff;
  *(unsigned char *)(iVar4 + 0x32) = 0x40;
  *(unsigned char *)(iVar4 + 0x33) = 0x10;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar1);
    dVar10 = (double)lbl_82011638;
    dVar9 = (double)lbl_82002C5C;
    lVar7 = (__int64)((double)(float)dVar8 * dVar10 + dVar9);
    uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar7)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if (0xfe < (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF)) {
      uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    }
    *(char *)(iVar4 + 0x31) = (char)(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
    uStack_80 = lVar7;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      dVar8 = (double)fn_826972E0(uVar3,uVar1);
      lVar7 = (__int64)((double)(float)dVar8 * dVar10 + dVar9);
      uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar7)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      if (0xfe < (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF)) {
        uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      }
      *(char *)(iVar4 + 0x32) = (char)(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
      uStack_80 = lVar7;
    }
  }
  uStack_90 = 0;
  auStack_70 = 10;
  puVar6 = (unsigned int *)(*(int *)(param_1 + 0x18) + 0x78);
  piVar5 = (int *)(iVar4 + 0x10);
  fn_82681728(&iStack_8c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                    0xffffffff820063e8);
  (**(int (***)())(*(int *)(iVar4 + 0x10) + 0x28))(piVar5,puVar6,&iStack_8c,&auStack_70,&uStack_90);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_8c + 8) - 1;
  *(int *)(iStack_8c + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_8c);
  }
  fn_82696330(&auStack_70);
  auStack_60[0] = 10;
  uStack_8f = 0;
  fn_82681728(&iStack_88,(unsigned __int64)*puVar6 + 0x254,0xffffffff820063e0);
  (**(int (***)())(*piVar5 + 0x28))(piVar5,puVar6,&iStack_88,auStack_60,&uStack_8f);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_88 + 8) - 1;
  *(int *)(iStack_88 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_88);
  }
  fn_82696330(auStack_60);
  auStack_50[0] = 10;
  auStack_8e[0] = 0;
  fn_82681728(&iStack_84,(unsigned __int64)*puVar6 + 0x254,0xffffffff820138b0);
  (**(int (***)())(*piVar5 + 0x28))(piVar5,puVar6,&iStack_84,auStack_50,auStack_8e);
  lVar7 = (unsigned __int64)*(unsigned int *)(iStack_84 + 8) - 1;
  *(int *)(iStack_84 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(iStack_84);
  }
  fn_82696330(auStack_50);
  fn_826824B0(iVar4);
  return;
}

