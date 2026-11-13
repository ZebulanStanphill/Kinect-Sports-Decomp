extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_827501D0();
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_e8;
extern unsigned int uStack_e9;
extern unsigned int uStack_ea;
extern unsigned int uStack_eb;
extern unsigned int uStack_ec;
extern unsigned int uStack_ed;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;


void fn_82750B98(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  char cVar7;
  unsigned char bVar8;
  int *piVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  unsigned char uStack_f0;
  unsigned char uStack_ef;
  unsigned char uStack_ee;
  unsigned char uStack_ed;
  unsigned char uStack_ec;
  unsigned char uStack_eb;
  unsigned char uStack_ea;
  unsigned char uStack_e9;
  unsigned __int64 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar5 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x27)) {
    uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x3c,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_827501D0(uVar3,*(unsigned int *)(param_1 + 0x18));
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      *(unsigned int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar5);
  uVar1 = *(unsigned char *)(iVar5 + 0x38);
  *(unsigned short *)(iVar5 + 0x34) = 0;
  *(unsigned short *)(iVar5 + 0x36) = 0;
  *(unsigned int *)(iVar5 + 0x38) = 0xff0000;
  *(unsigned char *)(iVar5 + 0x38) = uVar1;
  *(unsigned char *)(iVar5 + 0x38) = 0xff;
  *(unsigned char *)(iVar5 + 0x31) = 0x60;
  *(unsigned char *)(iVar5 + 0x32) = 0x60;
  *(unsigned char *)(iVar5 + 0x33) = 0x20;
  *(unsigned char *)(iVar5 + 0x30) = *(unsigned char *)(iVar5 + 0x30) & 0x9f;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar6 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    uVar6 = fn_82697700(uVar4,uVar6);
    uVar1 = *(unsigned char *)(iVar5 + 0x38);
    *(unsigned int *)(iVar5 + 0x38) = uVar6;
    *(unsigned char *)(iVar5 + 0x38) = uVar1;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar6 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      dVar12 = (double)fn_826972E0(uVar4,uVar6);
      uStack_e8 = (__int64)((float)dVar12 * lbl_82005CCC);
      *(unsigned char *)(iVar5 + 0x38) = (unsigned char)uStack_e8;
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar6 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,2);
        dVar12 = (double)fn_826972E0(uVar4,uVar6);
        dVar14 = (double)lbl_82011638;
        dVar13 = (double)lbl_82002C5C;
        lVar11 = (__int64)((double)(float)dVar12 * dVar14 + dVar13);
        uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar11)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        if (0xfe < (((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
          uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        }
        *(char *)(iVar5 + 0x31) = (char)(((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF);
        uStack_e8 = lVar11;
        if (3 < *(int *)(param_1 + 0x1c)) {
          uVar6 = *(unsigned int *)(param_1 + 0x18);
          uVar4 = fn_826957D0(param_1,3);
          dVar12 = (double)fn_826972E0(uVar4,uVar6);
          lVar11 = (__int64)((double)(float)dVar12 * dVar14 + dVar13);
          uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar11)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
          if (0xfe < (((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
            uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
          }
          *(char *)(iVar5 + 0x32) = (char)(((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF);
          uStack_e8 = lVar11;
          if (4 < *(int *)(param_1 + 0x1c)) {
            uVar6 = *(unsigned int *)(param_1 + 0x18);
            uVar4 = fn_826957D0(param_1,4);
            dVar12 = (double)fn_826972E0(uVar4,uVar6);
            lVar11 = (__int64)((double)(float)dVar12 * dVar14 + dVar13);
            uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar11)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
            if (0xfe < (((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF)) {
              uStack_e8 = ((((unsigned __int64)(uStack_e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
            }
            *(char *)(iVar5 + 0x33) = (char)(((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF);
            iVar2 = *(int *)(param_1 + 0x1c);
            uStack_e8 = lVar11;
            if (((5 < iVar2) && (6 < iVar2)) && (7 < iVar2)) {
              uVar6 = *(unsigned int *)(param_1 + 0x18);
              uVar4 = fn_826957D0(param_1,7);
              cVar7 = fn_82695608(uVar4,uVar6);
              if (cVar7 == '\0') {
                bVar8 = *(unsigned char *)(iVar5 + 0x30) & 0xdf;
              }
              else {
                bVar8 = *(unsigned char *)(iVar5 + 0x30) | 0x20;
              }
              *(unsigned char *)(iVar5 + 0x30) = bVar8;
            }
          }
        }
      }
    }
  }
  uStack_ee = 0;
  auStack_c0[0] = 10;
  puVar10 = (unsigned int *)(*(int *)(param_1 + 0x18) + 0x78);
  piVar9 = (int *)(iVar5 + 0x10);
  fn_82681728(&iStack_d0,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                    0xffffffff821cdae4);
  (**(int (***)())(*(int *)(iVar5 + 0x10) + 0x28))(piVar9,puVar10,&iStack_d0,auStack_c0,&uStack_ee);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_d0 + 8) - 1;
  *(int *)(iStack_d0 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d0);
  }
  fn_82696330(auStack_c0);
  auStack_a0[0] = 10;
  uStack_ef = 0;
  fn_82681728(&iStack_c4,(unsigned __int64)*puVar10 + 0x254,0xffffffff821c81ec);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_c4,auStack_a0,&uStack_ef);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_c4 + 8) - 1;
  *(int *)(iStack_c4 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_c4);
  }
  fn_82696330(auStack_a0);
  auStack_60[0] = 10;
  uStack_ea = 0;
  fn_82681728(&iStack_d8,(unsigned __int64)*puVar10 + 0x254,0xffffffff820063e8);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_d8,auStack_60,&uStack_ea);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_d8 + 8) - 1;
  *(int *)(iStack_d8 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d8);
  }
  fn_82696330(auStack_60);
  auStack_80[0] = 10;
  uStack_ec = 0;
  fn_82681728(&iStack_c8,(unsigned __int64)*puVar10 + 0x254,0xffffffff820063e0);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_c8,auStack_80,&uStack_ec);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_c8 + 8) - 1;
  *(int *)(iStack_c8 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_c8);
  }
  fn_82696330(auStack_80);
  auStack_b0[0] = 10;
  uStack_f0 = 0;
  fn_82681728(&iStack_e0,(unsigned __int64)*puVar10 + 0x254,0xffffffff82013864);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_e0,auStack_b0,&uStack_f0);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_e0 + 8) - 1;
  *(int *)(iStack_e0 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_e0);
  }
  fn_82696330(auStack_b0);
  auStack_90[0] = 10;
  uStack_ed = 0;
  fn_82681728(&iStack_dc,(unsigned __int64)*puVar10 + 0x254,0xffffffff820138b8);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_dc,auStack_90,&uStack_ed);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_dc + 8) - 1;
  *(int *)(iStack_dc + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_dc);
  }
  fn_82696330(auStack_90);
  auStack_70[0] = 10;
  uStack_eb = 0;
  fn_82681728(&iStack_d4,(unsigned __int64)*puVar10 + 0x254,0xffffffff82013900);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_d4,auStack_70,&uStack_eb);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_d4 + 8) - 1;
  *(int *)(iStack_d4 + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_d4);
  }
  fn_82696330(auStack_70);
  auStack_50[0] = 10;
  uStack_e9 = 0;
  fn_82681728(&iStack_cc,(unsigned __int64)*puVar10 + 0x254,0xffffffff820138b0);
  (**(int (***)())(*piVar9 + 0x28))(piVar9,puVar10,&iStack_cc,auStack_50,&uStack_e9);
  lVar11 = (unsigned __int64)*(unsigned int *)(iStack_cc + 8) - 1;
  *(int *)(iStack_cc + 8) = (int)lVar11;
  if (lVar11 == 0) {
    fn_826944C8(iStack_cc);
  }
  fn_82696330(auStack_50);
  fn_826824B0(iVar5);
  return;
}

