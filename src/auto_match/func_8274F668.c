extern unsigned int *auStack_136;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82697610();
extern int fn_82697700();
extern int fn_8274EB18();
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_114;
extern unsigned int iStack_118;
extern unsigned int iStack_11c;
extern unsigned int iStack_120;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82011638;
extern unsigned int uStack_130;
extern unsigned int uStack_137;
extern unsigned int uStack_138;
extern unsigned int uStack_139;
extern unsigned int uStack_13a;
extern unsigned int uStack_13b;
extern unsigned int uStack_13c;
extern unsigned int uStack_13d;
extern unsigned int uStack_13e;
extern unsigned int uStack_13f;
extern unsigned int uStack_140;


void fn_8274F668(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  short sVar7;
  unsigned int uVar6;
  char cVar8;
  unsigned char bVar9;
  int *piVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned char uStack_140;
  unsigned char uStack_13f;
  unsigned char uStack_13e;
  unsigned char uStack_13d;
  unsigned char uStack_13c;
  unsigned char uStack_13b;
  unsigned char uStack_13a;
  unsigned char uStack_139;
  unsigned char uStack_138;
  unsigned char uStack_137;
  unsigned char auStack_136;
  unsigned __int64 uStack_130;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int aiStack_100;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];

  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar5 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar5 != 0x26)) {
    uVar3 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x3c,0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = fn_8274EB18(uVar3,*(unsigned int *)(param_1 + 0x18));
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
  *(unsigned short *)(iVar5 + 0x36) = 0x50;
  *(unsigned short *)(iVar5 + 0x34) = 0x1c2;
  *(unsigned int *)(iVar5 + 0x38) = 0;
  *(unsigned char *)(iVar5 + 0x38) = uVar1;
  *(unsigned char *)(iVar5 + 0x38) = 0xff;
  *(unsigned char *)(iVar5 + 0x31) = 0x40;
  *(unsigned char *)(iVar5 + 0x32) = 0x40;
  *(unsigned char *)(iVar5 + 0x33) = 0x10;
  *(unsigned char *)(iVar5 + 0x30) = *(unsigned char *)(iVar5 + 0x30) & 0x9f;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar6 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    sVar7 = fn_82697610(uVar4,uVar6);
    *(short *)(iVar5 + 0x36) = sVar7 * 0x14;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar6 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      sVar7 = fn_82697610(uVar4,uVar6);
      *(short *)(iVar5 + 0x34) = sVar7 * 10;
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar6 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,2);
        uVar6 = fn_82697700(uVar4,uVar6);
        uVar1 = *(unsigned char *)(iVar5 + 0x38);
        *(unsigned int *)(iVar5 + 0x38) = uVar6;
        *(unsigned char *)(iVar5 + 0x38) = uVar1;
        if (3 < *(int *)(param_1 + 0x1c)) {
          uVar6 = *(unsigned int *)(param_1 + 0x18);
          uVar4 = fn_826957D0(param_1,3);
          dVar13 = (double)fn_826972E0(uVar4,uVar6);
          uStack_130 = (__int64)((float)dVar13 * lbl_82005CCC);
          *(unsigned char *)(iVar5 + 0x38) = (unsigned char)uStack_130;
          if (4 < *(int *)(param_1 + 0x1c)) {
            uVar6 = *(unsigned int *)(param_1 + 0x18);
            uVar4 = fn_826957D0(param_1,4);
            dVar13 = (double)fn_826972E0(uVar4,uVar6);
            dVar15 = (double)lbl_82011638;
            dVar14 = (double)lbl_82002C5C;
            lVar12 = (__int64)((double)(float)dVar13 * dVar15 + dVar14);
            uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
            if (0xfe < (((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF)) {
              uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
            }
            *(char *)(iVar5 + 0x31) = (char)(((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF);
            uStack_130 = lVar12;
            if (5 < *(int *)(param_1 + 0x1c)) {
              uVar6 = *(unsigned int *)(param_1 + 0x18);
              uVar4 = fn_826957D0(param_1,5);
              dVar13 = (double)fn_826972E0(uVar4,uVar6);
              lVar12 = (__int64)((double)(float)dVar13 * dVar15 + dVar14);
              uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
              if (0xfe < (((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF)) {
                uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
              }
              *(char *)(iVar5 + 0x32) = (char)(((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF);
              uStack_130 = lVar12;
              if (6 < *(int *)(param_1 + 0x1c)) {
                uVar6 = *(unsigned int *)(param_1 + 0x18);
                uVar4 = fn_826957D0(param_1,6);
                dVar13 = (double)fn_826972E0(uVar4,uVar6);
                lVar12 = (__int64)((double)(float)dVar13 * dVar15 + dVar14);
                uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)lVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
                if (0xfe < (((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF)) {
                  uStack_130 = ((((unsigned __int64)(uStack_130)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0xff)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
                }
                *(char *)(iVar5 + 0x33) = (char)(((unsigned __int64)(uStack_130) >> 32) & 0xFFFFFFFF);
                iVar2 = *(int *)(param_1 + 0x1c);
                uStack_130 = lVar12;
                if (((7 < iVar2) && (8 < iVar2)) && (9 < iVar2)) {
                  uVar6 = *(unsigned int *)(param_1 + 0x18);
                  uVar4 = fn_826957D0(param_1,9);
                  cVar8 = fn_82695608(uVar4,uVar6);
                  if (cVar8 == '\0') {
                    bVar9 = *(unsigned char *)(iVar5 + 0x30) & 0xdf;
                  }
                  else {
                    bVar9 = *(unsigned char *)(iVar5 + 0x30) | 0x20;
                  }
                  *(unsigned char *)(iVar5 + 0x30) = bVar9;
                  if (10 < *(int *)(param_1 + 0x1c)) {
                    uVar6 = *(unsigned int *)(param_1 + 0x18);
                    uVar4 = fn_826957D0(param_1,10);
                    cVar8 = fn_82695608(uVar4,uVar6);
                    if (cVar8 == '\0') {
                      bVar9 = *(unsigned char *)(iVar5 + 0x30) & 0xbf;
                    }
                    else {
                      bVar9 = *(unsigned char *)(iVar5 + 0x30) | 0x40;
                    }
                    *(unsigned char *)(iVar5 + 0x30) = bVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uStack_139 = 0;
  auStack_f0[0] = 10;
  puVar11 = (unsigned int *)(*(int *)(param_1 + 0x18) + 0x78);
  piVar10 = (int *)(iVar5 + 0x10);
  fn_82681728(&iStack_114,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                    0xffffffff8201271c);
  (**(int (***)())(*(int *)(iVar5 + 0x10) + 0x28))(piVar10,puVar11,&iStack_114,auStack_f0,&uStack_139);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_114 + 8) - 1;
  *(int *)(iStack_114 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_114);
  }
  fn_82696330(auStack_f0);
  auStack_60[0] = 10;
  uStack_13e = 0;
  fn_82681728(&aiStack_100,(unsigned __int64)*puVar11 + 0x254,0xffffffff82013914);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&aiStack_100,auStack_60,&uStack_13e);
  lVar12 = (unsigned __int64)*(unsigned int *)(aiStack_100 + 8) - 1;
  *(int *)(aiStack_100 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(aiStack_100);
  }
  fn_82696330(auStack_60);
  auStack_c0[0] = 10;
  uStack_13a = 0;
  fn_82681728(&iStack_104,(unsigned __int64)*puVar11 + 0x254,0xffffffff821cdae4);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_104,auStack_c0,&uStack_13a);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_104 + 8) - 1;
  *(int *)(iStack_104 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_104);
  }
  fn_82696330(auStack_c0);
  auStack_80[0] = 10;
  uStack_13c = 0;
  fn_82681728(&iStack_11c,(unsigned __int64)*puVar11 + 0x254,0xffffffff821c81ec);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_11c,auStack_80,&uStack_13c);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_11c + 8) - 1;
  *(int *)(iStack_11c + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_11c);
  }
  fn_82696330(auStack_80);
  auStack_a0[0] = 10;
  uStack_137 = 0;
  fn_82681728(&iStack_10c,(unsigned __int64)*puVar11 + 0x254,0xffffffff820063e8);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_10c,auStack_a0,&uStack_137);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_10c + 8) - 1;
  *(int *)(iStack_10c + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_10c);
  }
  fn_82696330(auStack_a0);
  auStack_e0[0] = 10;
  uStack_140 = 0;
  fn_82681728(&iStack_128,(unsigned __int64)*puVar11 + 0x254,0xffffffff820063e0);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_128,auStack_e0,&uStack_140);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_128 + 8) - 1;
  *(int *)(iStack_128 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_128);
  }
  fn_82696330(auStack_e0);
  auStack_d0[0] = 10;
  uStack_13f = 0;
  fn_82681728(&iStack_124,(unsigned __int64)*puVar11 + 0x254,0xffffffff82013864);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_124,auStack_d0,&uStack_13f);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_124 + 8) - 1;
  *(int *)(iStack_124 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_124);
  }
  fn_82696330(auStack_d0);
  auStack_b0[0] = 10;
  uStack_13d = 0;
  fn_82681728(&iStack_120,(unsigned __int64)*puVar11 + 0x254,0xffffffff820138b8);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_120,auStack_b0,&uStack_13d);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_120 + 8) - 1;
  *(int *)(iStack_120 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_120);
  }
  fn_82696330(auStack_b0);
  auStack_90[0] = 10;
  uStack_13b = 0;
  fn_82681728(&iStack_118,(unsigned __int64)*puVar11 + 0x254,0xffffffff82013908);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_118,auStack_90,&uStack_13b);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_118 + 8) - 1;
  *(int *)(iStack_118 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_118);
  }
  fn_82696330(auStack_90);
  auStack_70[0] = 10;
  uStack_138 = 0;
  fn_82681728(&iStack_110,(unsigned __int64)*puVar11 + 0x254,0xffffffff82013900);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_110,auStack_70,&uStack_138);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_110 + 8) - 1;
  *(int *)(iStack_110 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_110);
  }
  fn_82696330(auStack_70);
  auStack_50[0] = 10;
  auStack_136 = 0;
  fn_82681728(&iStack_108,(unsigned __int64)*puVar11 + 0x254,0xffffffff820138b0);
  (**(int (***)())(*piVar10 + 0x28))(piVar10,puVar11,&iStack_108,auStack_50,&auStack_136);
  lVar12 = (unsigned __int64)*(unsigned int *)(iStack_108 + 8) - 1;
  *(int *)(iStack_108 + 8) = (int)lVar12;
  if (lVar12 == 0) {
    fn_826944C8(iStack_108);
  }
  fn_82696330(auStack_50);
  fn_826824B0(iVar5);
  return;
}
