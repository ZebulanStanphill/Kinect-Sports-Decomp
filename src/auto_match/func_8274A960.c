typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_e0;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_8268B330();
extern int fn_8268BEA8();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826A70B0();
extern int fn_826A7398();
extern int fn_82749D00();
extern int fn_82749D70();
extern int fn_82749DE0();
extern int fn_8274A8E0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_8274A960(int *param_1,int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned int auStack_e0 [4];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int *puStack_ac;
  unsigned int *puStack_a8;
  unsigned int uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int aiStack_98 [2];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  
  puVar9 = (unsigned int *)(param_2 + 0x78);
  fn_8268AFB0(&uStack_d0,lbl_831E7E64);
  lVar2 = fn_826A7398(param_2);
  piVar3 = (int *)fn_8274A8E0(lVar2 + 8);
  uStack_b8 = 0;
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 4))(piVar3,&uStack_b8);
  }
  fn_8268B1F0(&uStack_d0,0xffffffff820130c4,0xffffffffffffffff);
  if ((piVar3 == (int *)0x0) || ((uStack_b8 & 1) != 0)) {
    uVar7 = 0xffffffff820130b4;
  }
  else {
    uVar7 = 0xffffffff820130bc;
  }
  fn_8268B1F0(&uStack_d0,uVar7,0xffffffffffffffff);
  if ((piVar3 == (int *)0x0) || ((uStack_b8 & 4) != 0)) {
    uVar7 = 0xffffffff820130a4;
  }
  else {
    uVar7 = 0xffffffff820130ac;
  }
  fn_8268B1F0(&uStack_d0,uVar7,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201309c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013094,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201308c,0xffffffffffffffff);
  iVar4 = fn_826A7398(param_2);
  iVar4 = (**(int (***)())(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x1b);
  if (iVar4 == 0) {
    uVar7 = 0xffffffff82013084;
  }
  else {
    fn_8267C4F0();
    uVar7 = 0xffffffff82013088;
  }
  fn_8268B1F0(&uStack_d0,uVar7,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201307c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013074,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201306c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013064,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201305c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013054,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201304c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013048,0xffffffffffffffff);
  fn_8268B330(auStack_e0);
  puVar5 = (unsigned int *)fn_82749DE0(aiStack_98,puVar9);
  fn_8268C510(&uStack_b4,*(unsigned int *)*puVar5);
  lVar2 = (unsigned __int64)*(unsigned int *)(aiStack_98[0] + 8) - 1;
  *(int *)(aiStack_98[0] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(aiStack_98[0]);
  }
  fn_826A70B0((unsigned int *)(uStack_b4 & 0xfffffffc) + 2,*(unsigned int *)(uStack_b4 & 0xfffffffc) & 0x7fffffff,
               auStack_e0);
  fn_8268B1F0(&uStack_d0,(unsigned int *)(auStack_e0[0] & 0xfffffffc) + 2,
                    *(unsigned int *)(auStack_e0[0] & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013044,0xffffffffffffffff);
  fn_8268BEA8(auStack_e0);
  puVar5 = (unsigned int *)fn_82749D00(&iStack_a0,puVar9);
  fn_8268C510(&uStack_b0,*(unsigned int *)*puVar5);
  lVar2 = (unsigned __int64)*(unsigned int *)(iStack_a0 + 8) - 1;
  *(int *)(iStack_a0 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_a0);
  }
  fn_826A70B0((unsigned int *)(uStack_b0 & 0xfffffffc) + 2,*(unsigned int *)(uStack_b0 & 0xfffffffc) & 0x7fffffff,
               auStack_e0);
  fn_8268B1F0(&uStack_d0,(unsigned int *)(auStack_e0[0] & 0xfffffffc) + 2,
                    *(unsigned int *)(auStack_e0[0] & 0xfffffffc) & 0x7fffffff);
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_7c = 1;
  uStack_64 = lbl_82002AE0;
  uStack_80 = 1;
  uStack_68 = lbl_82002AE0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  piVar3 = (int *)fn_826A7398(param_2);
  (**(int (***)())(*piVar3 + 0x68))(piVar3,&uStack_90);
  fn_8268B1F0(&uStack_d0,0xffffffff82013040,0xffffffffffffffff);
  auStack_40[0] = 4;
  uStack_38 = uStack_90;
  fn_82696D38(&puStack_ac,auStack_40,param_2,0xffffffffffffffff,0);
  fn_8268B1F0(&uStack_d0,*puStack_ac,0xffffffffffffffff);
  uVar1 = puStack_ac[2];
  puStack_ac[2] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    fn_826944C8(puStack_ac);
  }
  fn_82696330(auStack_40);
  fn_8268B1F0(&uStack_d0,0xffffffff821ce358,0xffffffffffffffff);
  auStack_50[0] = 4;
  uStack_48 = uStack_8c;
  fn_82696D38(&puStack_a8,auStack_50,param_2,0xffffffffffffffff,0);
  fn_8268B1F0(&uStack_d0,*puStack_a8,0xffffffffffffffff);
  uVar1 = puStack_a8[2];
  puStack_a8[2] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned __int64)uVar1 - 1 == 0) {
    fn_826944C8(puStack_a8);
  }
  fn_82696330(auStack_50);
  fn_8268B1F0(&uStack_d0,0xffffffff82013038,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201302c,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013024,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff8201301c,0xffffffffffffffff);
  fn_8268BEA8(auStack_e0);
  puVar5 = (unsigned int *)fn_82749D70(&iStack_9c,puVar9);
  fn_8268C510(&uStack_a4,*(unsigned int *)*puVar5);
  lVar2 = (unsigned __int64)*(unsigned int *)(iStack_9c + 8) - 1;
  bVar10 = (lVar2 == 0) << 1;
  *(int *)(iStack_9c + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_9c);
  }
  fn_826A70B0((unsigned int *)(uStack_a4 & 0xfffffffc) + 2,*(unsigned int *)(uStack_a4 & 0xfffffffc) & 0x7fffffff,
               auStack_e0);
  fn_8268B1F0(&uStack_d0,(unsigned int *)(auStack_e0[0] & 0xfffffffc) + 2,
                    *(unsigned int *)(auStack_e0[0] & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013014,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82013004,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82012ffc,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82012ff4,0xffffffffffffffff);
  fn_8268B1F0(&uStack_d0,0xffffffff82012fec,0xffffffffffffffff);
  uVar8 = (unsigned __int64)uStack_d0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff82196582;
  }
  iVar6 = fn_82694610((unsigned __int64)*puVar9 + 0x254,uVar8,uStack_cc);
  iVar4 = *(int *)(iVar6 + 8);
  *param_1 = iVar6;
  *(int *)(iVar6 + 8) = iVar4 + 1;
  lVar2 = ((unsigned __int64)uStack_a4 & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar2;
    uVar8 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar2);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  bVar10 = (uVar8 == 1) << 1;
  if (uVar8 == 1) {
    fn_8267BE38();
  }
  lVar2 = ((unsigned __int64)uStack_b0 & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar2;
    uVar8 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar2);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  bVar10 = (uVar8 == 1) << 1;
  if (uVar8 == 1) {
    fn_8267BE38();
  }
  lVar2 = ((unsigned __int64)uStack_b4 & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar2;
    uVar8 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar2);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  bVar10 = (uVar8 == 1) << 1;
  if (uVar8 == 1) {
    fn_8267BE38();
  }
  lVar2 = ((unsigned __int64)auStack_e0[0] & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar2;
    uVar8 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar8 - 1,0,lVar2);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (uVar8 == 1) {
    fn_8267BE38();
  }
  fn_8268AFD8(&uStack_d0);
  return param_1;
}

