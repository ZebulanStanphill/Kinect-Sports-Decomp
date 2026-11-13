extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_827F6BA8();
extern int fn_82809558();
extern int fn_828102D0();
extern int fn_828105C8();
extern int fn_82810830();
extern int fn_828108B8();
extern int fn_82810A28();
extern int fn_82810B40();
extern int fn_82810B78();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DDF4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_827F6C18(int param_1,unsigned int *param_2,float *param_3)

{
  float fVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned char auStack_110 [16];
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [48];
  
  uVar2 = *(unsigned short *)(param_1 + 0x32);
  uVar8 = (unsigned __int64)uVar2;
  dVar13 = (double)lbl_8201DDF4;
  if (uVar8 == 0) {
    dVar13 = (double)lbl_821AAD20;
    fn_828105C8(dVar13,dVar13,dVar13,param_2);
    *param_3 = (float)dVar13;
  }
  else if (uVar8 == 1) {
    puVar5 = (unsigned int *)fn_827F6BA8(auStack_110,param_1,0);
    fVar1 = lbl_821AAD20;
    uVar3 = puVar5[1];
    uVar4 = puVar5[2];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    *param_3 = fVar1;
  }
  else {
    lVar10 = 0;
    if (0 < (__int64)(uVar8 - 1)) {
      do {
        puVar5 = (unsigned int *)fn_827F6BA8(auStack_110,param_1,lVar10);
        uStack_130 = *puVar5;
        uStack_12c = puVar5[1];
        lVar9 = lVar10 + 1;
        uStack_128 = puVar5[2];
        lVar6 = lVar9;
        iVar7 = (int)lVar9;
        while (iVar7 < (int)(unsigned int)uVar2) {
          puVar5 = (unsigned int *)fn_827F6BA8(&uStack_120,param_1,lVar10);
          uStack_140 = *puVar5;
          uStack_13c = puVar5[1];
          uStack_138 = puVar5[2];
          dVar11 = (double)fn_828102D0(&uStack_130,&uStack_140);
          if (dVar13 < dVar11) {
            uStack_e0 = uStack_130;
            uStack_dc = uStack_12c;
            uStack_d8 = uStack_128;
            uStack_f0 = uStack_140;
            uStack_ec = uStack_13c;
            uStack_e8 = uStack_138;
            dVar13 = dVar11;
          }
          lVar6 = lVar6 + 1;
          iVar7 = (int)lVar6;
        }
        lVar10 = lVar9;
      } while ((int)lVar9 < (int)(uVar8 - 1));
    }
    puVar5 = (unsigned int *)fn_82810830(auStack_110,&uStack_e0,&uStack_f0);
    uStack_140 = *puVar5;
    uStack_13c = puVar5[1];
    dVar11 = (double)lbl_82002C5C;
    uStack_138 = puVar5[2];
    puVar5 = (unsigned int *)fn_82810A28(dVar11,&uStack_120,&uStack_140);
    uVar3 = puVar5[1];
    uVar4 = puVar5[2];
    *param_2 = *puVar5;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    dVar13 = (double)fn_82809558(dVar13);
    fVar1 = (float)(dVar13 * dVar11);
    *param_3 = fVar1;
    lVar10 = 0;
    dVar13 = (double)(fVar1 * fVar1);
    if (uVar2 != 0) {
      do {
        puVar5 = (unsigned int *)fn_827F6BA8(auStack_c0,param_1,lVar10);
        uStack_140 = *puVar5;
        uStack_13c = puVar5[1];
        uStack_138 = puVar5[2];
        dVar12 = (double)fn_828102D0(&uStack_140,param_2);
        if (dVar13 < dVar12) {
          puVar5 = (unsigned int *)fn_828108B8(auStack_a0,&uStack_140,param_2);
          uStack_d0 = *puVar5;
          uStack_cc = puVar5[1];
          uStack_c8 = puVar5[2];
          fn_82810B78(&uStack_d0,auStack_110);
          puVar5 = (unsigned int *)fn_82810A28((double)*param_3,auStack_80,auStack_110);
          uStack_100 = *puVar5;
          uStack_fc = puVar5[1];
          uStack_f8 = puVar5[2];
          puVar5 = (unsigned int *)fn_828108B8(auStack_b0,param_2,&uStack_100);
          uStack_130 = *puVar5;
          uStack_12c = puVar5[1];
          uStack_128 = puVar5[2];
          puVar5 = (unsigned int *)fn_82810830(auStack_90,&uStack_130,&uStack_140);
          uStack_120 = *puVar5;
          uStack_11c = puVar5[1];
          uStack_118 = puVar5[2];
          puVar5 = (unsigned int *)fn_82810A28(dVar11,auStack_70,&uStack_120);
          uVar3 = puVar5[1];
          uVar4 = puVar5[2];
          *param_2 = *puVar5;
          param_2[1] = uVar3;
          param_2[2] = uVar4;
          dVar13 = (double)fn_82810B40(&uStack_130,&uStack_140);
          fVar1 = (float)(dVar13 * dVar11);
          *param_3 = fVar1;
          dVar13 = (double)(fVar1 * fVar1);
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)(unsigned int)uVar2);
    }
  }
  return;
}

