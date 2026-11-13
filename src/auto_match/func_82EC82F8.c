extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_350;
extern unsigned int *auStack_370;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA818();
extern int fn_82EB1548();
extern int fn_82F261D8();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int iStack_36c;
extern unsigned int lbl_82005730;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000004c;
extern unsigned int uStack_358;
extern unsigned int uStack_368;


void fn_82EC82F8(unsigned __int64 param_1, int param_2, __int64 param_3, unsigned __int64 param_4, int *param_5, int param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned __int64 unused_arg_12, unsigned __int64 unused_arg_13, int in_stack_0000007c, int in_stack_00000084, int in_stack_0000008c)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned char *pbVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  unsigned char *pbVar26;
  unsigned char *pbVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  unsigned char *pbVar33;
  unsigned char *pbVar34;
  unsigned char *pbVar35;
  unsigned int uVar36;
  unsigned __int64 uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  __int64 lVar43;
  unsigned char *pbVar44;
  unsigned char *pbVar45;
  int iVar46;
  unsigned __int64 uVar47;
  unsigned __int64 uVar48;
  unsigned int uVar49;
  unsigned __int64 uVar50;
  unsigned __int64 uVar51;
  unsigned __int64 uVar52;
  unsigned __int64 uVar53;
  unsigned __int64 uVar54;
  unsigned __int64 uVar55;
  int iStack00000014;
  int iStack0000001c;
  int *piStack00000034;
  int iStack0000003c;
  unsigned int uStack0000004c;



  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  unsigned char auStack_370 [4];
  int iStack_36c;
  unsigned int uStack_368;
  __int64 lStack_360;
  unsigned int uStack_358;
  unsigned __int64 auStack_350 [1];
  unsigned char abStack_340 [832];
  
  iStack00000014 = (int)param_1;
  uStack0000004c = (unsigned int)param_8;
  iStack0000001c = param_2;
  piStack00000034 = param_5;
  iStack0000003c = param_6;
  if (in_stack_0000007c == 0) {
    lStack_360 = param_3;
    auStack_350[0] = param_1;
    fn_82EAA818();
    param_3 = lStack_360;
    param_1 = auStack_350[0];
  }
  else {
    iStack_36c = in_stack_0000008c;
    fn_82EB1548();
    param_8 = (unsigned __int64)uStack0000004c;
    param_6 = iStack0000003c;
    param_2 = iStack0000001c;
  }
  uVar2 = uStack_358;
  uVar49 = uStack_368;
  iVar40 = (int)param_1;
  uVar50 = (unsigned __int64)uStack_358;
  uVar48 = (unsigned __int64)uStack_368;
  if (*(int *)(iVar40 + 0x6d78) == 0) {
    if ((*(int *)(iVar40 + 0x6d74) != 0) && (*(int *)(iVar40 + 0x6d84) == 0)) {
      lStack_360 = ((((unsigned __int64)(lStack_360)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(uStack_358)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      fn_82F261D8(param_1,auStack_370,&lStack_360,param_7,param_8);
      iVar46 = *(int *)(iVar40 + 0x564);
      if (in_stack_00000084 == 1) {
        (**(int (***)())(iVar40 + 0x9b8))
                  ((__int64)((int)(((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) * (__int64)iVar46 +
                   (__int64)((int)uVar49 >> 2) + param_3);
      }
      else {
        (**(int (***)())(iVar40 + 0x9c0))
                  ((__int64)((int)(((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) * (__int64)iVar46 +
                   (__int64)((int)uVar49 >> 2) + param_3,iVar46,abStack_340,0x10,uVar49,
                   (((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF),in_stack_00000084,*(unsigned int *)(iVar40 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,abStack_340,0x10,0x10,0x10,param_6);
      iVar46 = *param_5;
      uVar36 = ((unsigned int)((unsigned __int64)(auStack_350[0]) >> 32));
      uVar37 = (unsigned __int64)(unsigned int)param_5[3];
      uVar51 = (unsigned __int64)(unsigned int)param_5[2];
      if (iVar46 != 0) {
        uVar41 = (unsigned __int64)*(unsigned int *)(iVar40 + 0xa30);
        uVar55 = (unsigned __int64)*(unsigned int *)(iVar40 + 0xa2c);
        uVar2 = *(unsigned int *)(iVar40 + 0xa38);
        uVar3 = *(unsigned int *)(iVar40 + 0xa34);
        uVar4 = param_5[5];
        uVar5 = param_5[4];
        iVar38 = fn_82E9B140(param_1,((uVar55 - uVar51) + uVar48 & (unsigned __int64)uVar3) - uVar55,
                               ((uVar41 - uVar37) + uVar50 & (unsigned __int64)uVar2) - uVar41,
                               ((unsigned int)((unsigned __int64)(auStack_350[0]) >> 32)),0);
        iVar39 = fn_82E9B140(param_1,((uVar55 - uVar5) + uVar48 & (unsigned __int64)uVar3) - uVar55,
                               ((uVar41 - uVar4) + uVar50 & (unsigned __int64)uVar2) - uVar41,uVar36,0);
        if (iVar39 <= iVar38) {
          uVar51 = (unsigned __int64)uVar5;
          uVar37 = (unsigned __int64)uVar4;
        }
      }
      iVar40 = fn_82E9B140(param_1,((*(unsigned int *)(iVar40 + 0xa2c) - uVar51) + uVar48 &
                                     (unsigned __int64)*(unsigned int *)(iVar40 + 0xa34)) -
                                     (unsigned __int64)*(unsigned int *)(iVar40 + 0xa2c),
                             ((*(unsigned int *)(iVar40 + 0xa30) - uVar37) + uVar50 &
                             (unsigned __int64)*(unsigned int *)(iVar40 + 0xa38)) -
                             (unsigned __int64)*(unsigned int *)(iVar40 + 0xa30),uVar36,in_stack_0000007c);
      iVar40 = iVar40 + iStack_36c;
      if (iVar46 != 0) {
        iVar40 = iVar40 + 1;
      }
      iStack_36c = *(int *)(param_6 + 0x6c) * iVar40 + uStack_368;
    }
  }
  else {
    lStack_360 = ((((unsigned __int64)(lStack_360)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(uStack_368)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    iStack_36c = 0;
    fn_82F261D8(param_1,&lStack_360,auStack_370,param_7,param_8);
    lVar43 = (__int64)((int)uVar2 >> 2) * (__int64)*(int *)(iVar40 + 0x564);
    if (in_stack_00000084 == 1) {
      (**(int (***)())(iVar40 + 0x9b8))(lVar43 + ((int)(((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) + param_3);
    }
    else {
      (**(int (***)())(iVar40 + 0x9c0))
                (lVar43 + ((int)(((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF) >> 2) + param_3,*(int *)(iVar40 + 0x564),
                 abStack_340,0x10,(((unsigned __int64)(lStack_360) >> 0) & 0xFFFFFFFF),uVar2,in_stack_00000084,
                 *(unsigned int *)(iVar40 + 0x618));
    }
    pbVar44 = (unsigned char *)auStack_350;
    pbVar45 = (unsigned char *)(param_2 + 0xe);
    lVar43 = 0x10;
    do {
      pbVar6 = pbVar44 + 0x1d;
      pbVar7 = pbVar45 + -1;
      pbVar8 = pbVar44 + 0x1c;
      pbVar9 = pbVar45 + -2;
      pbVar10 = pbVar44 + 0x19;
      pbVar11 = pbVar44 + 0x1b;
      pbVar12 = pbVar44 + 0x1a;
      pbVar13 = pbVar44 + 0x1f;
      pbVar14 = pbVar44 + 0x18;
      pbVar15 = pbVar44 + 0x17;
      pbVar16 = pbVar44 + 0x16;
      pbVar17 = pbVar44 + 0x15;
      pbVar18 = pbVar44 + 0x14;
      pbVar19 = pbVar44 + 0x13;
      pbVar20 = pbVar44 + 0x12;
      pbVar21 = pbVar44 + 0x11;
      pbVar22 = pbVar45 + ((int)abStack_340 - param_2);
      pbVar44 = pbVar44 + 0x10;
      bVar1 = *pbVar45;
      pbVar23 = pbVar45 + 1;
      pbVar24 = pbVar45 + -0xe;
      pbVar25 = pbVar45 + -0xd;
      pbVar26 = pbVar45 + -0xc;
      pbVar27 = pbVar45 + -0xb;
      pbVar28 = pbVar45 + -10;
      pbVar29 = pbVar45 + -9;
      pbVar30 = pbVar45 + -3;
      pbVar31 = pbVar45 + -4;
      pbVar32 = pbVar45 + -5;
      pbVar33 = pbVar45 + -6;
      pbVar34 = pbVar45 + -7;
      pbVar35 = pbVar45 + -8;
      pbVar45 = pbVar45 + 0x10;
      iStack_36c = ((unsigned int)*pbVar8 - (unsigned int)*pbVar9) * ((unsigned int)*pbVar8 - (unsigned int)*pbVar9) +
                   ((unsigned int)*pbVar6 - (unsigned int)*pbVar7) * ((unsigned int)*pbVar6 - (unsigned int)*pbVar7) +
                   ((unsigned int)*pbVar22 - (unsigned int)bVar1) * ((unsigned int)*pbVar22 - (unsigned int)bVar1) +
                   ((unsigned int)*pbVar13 - (unsigned int)*pbVar23) * ((unsigned int)*pbVar13 - (unsigned int)*pbVar23) +
                   ((unsigned int)*pbVar44 - (unsigned int)*pbVar24) * ((unsigned int)*pbVar44 - (unsigned int)*pbVar24) +
                   ((unsigned int)*pbVar21 - (unsigned int)*pbVar25) * ((unsigned int)*pbVar21 - (unsigned int)*pbVar25) +
                   ((unsigned int)*pbVar20 - (unsigned int)*pbVar26) * ((unsigned int)*pbVar20 - (unsigned int)*pbVar26) +
                   ((unsigned int)*pbVar19 - (unsigned int)*pbVar27) * ((unsigned int)*pbVar19 - (unsigned int)*pbVar27) +
                   ((unsigned int)*pbVar18 - (unsigned int)*pbVar28) * ((unsigned int)*pbVar18 - (unsigned int)*pbVar28) +
                   ((unsigned int)*pbVar17 - (unsigned int)*pbVar29) * ((unsigned int)*pbVar17 - (unsigned int)*pbVar29) +
                   ((unsigned int)*pbVar16 - (unsigned int)*pbVar35) * ((unsigned int)*pbVar16 - (unsigned int)*pbVar35) +
                   ((unsigned int)*pbVar15 - (unsigned int)*pbVar34) * ((unsigned int)*pbVar15 - (unsigned int)*pbVar34) +
                   ((unsigned int)*pbVar14 - (unsigned int)*pbVar33) * ((unsigned int)*pbVar14 - (unsigned int)*pbVar33) +
                   ((unsigned int)*pbVar10 - (unsigned int)*pbVar32) * ((unsigned int)*pbVar10 - (unsigned int)*pbVar32) +
                   ((unsigned int)*pbVar12 - (unsigned int)*pbVar31) * ((unsigned int)*pbVar12 - (unsigned int)*pbVar31) +
                   ((unsigned int)*pbVar11 - (unsigned int)*pbVar30) * ((unsigned int)*pbVar11 - (unsigned int)*pbVar30) +
                   iStack_36c;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    uVar50 = (unsigned __int64)uStack_368;
    uVar48 = (unsigned __int64)(unsigned int)piStack00000034[2];
    uVar51 = (unsigned __int64)uStack_358;
    if (*piStack00000034 == 0) {
      uVar55 = (unsigned __int64)(unsigned int)piStack00000034[3];
      uVar37 = uVar48;
    }
    else {
      uVar42 = (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa2c);
      uVar41 = (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa30);
      uVar55 = (unsigned __int64)(unsigned int)piStack00000034[5];
      uVar37 = (unsigned __int64)(unsigned int)piStack00000034[4];
      uVar54 = ((uVar42 - uVar48) + uVar50 & (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa34)) - uVar42;
      uVar52 = ((uVar41 - (unsigned int)piStack00000034[3]) + uVar51 &
               (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa38)) - uVar41;
      uVar53 = (unsigned __int64)((int)uVar54 >> 0x1f);
      uVar47 = (unsigned __int64)((int)uVar52 >> 0x1f);
      uVar53 = (uVar54 ^ uVar53) - uVar53;
      uVar41 = ((uVar41 - uVar55) + uVar51 & (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa38)) - uVar41;
      uVar42 = ((uVar42 - uVar37) + uVar50 & (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa34)) - uVar42;
      uVar47 = (uVar52 ^ uVar47) - uVar47;
      if (((int)uVar53 < 0x9f) && ((int)uVar47 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar47 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar53 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      uVar53 = (unsigned __int64)((int)uVar42 >> 0x1f);
      uVar47 = (unsigned __int64)((int)uVar41 >> 0x1f);
      uVar53 = (uVar42 ^ uVar53) - uVar53;
      uVar47 = (uVar41 ^ uVar47) - uVar47;
      if (((int)uVar53 < 0x9f) && ((int)uVar47 < 0x9f)) {
        iVar46 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar47 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar53 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000008c);
      }
      else {
        iVar46 = *(int *)(in_stack_0000008c + 0x14) << 1;
      }
      if (iVar40 < iVar46) {
        uVar37 = uVar48;
        uVar55 = (unsigned __int64)(unsigned int)piStack00000034[3];
      }
    }
    uVar37 = ((*(unsigned int *)(iStack00000014 + 0xa2c) - uVar37) + uVar50 &
             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa34)) -
             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa2c);
    uVar51 = ((*(unsigned int *)(iStack00000014 + 0xa30) - uVar55) + uVar51 &
             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa38)) -
             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa30);
    uVar50 = (unsigned __int64)((int)uVar37 >> 0x1f);
    uVar48 = (unsigned __int64)((int)uVar51 >> 0x1f);
    uVar50 = (uVar37 ^ uVar50) - uVar50;
    uVar48 = (uVar51 ^ uVar48) - uVar48;
    uVar49 = uStack_368;
    if (((int)uVar50 < 0x9f) && ((int)uVar48 < 0x9f)) {
      iStack_36c = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar48 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar50 & 0xffffffff) << 2)) * 4 +
                           in_stack_0000008c) +
                   (int)((double)SQRT((float)(__int64)iStack_36c) + lbl_82005730);
    }
    else {
      iStack_36c = *(int *)(in_stack_0000008c + 0x14) * 2 +
                   (int)((double)SQRT((float)(__int64)iStack_36c) + lbl_82005730);
    }
  }
  *in_stack_000000a4 = uVar49;
  *in_stack_000000ac = uStack_358;
  *in_stack_000000b4 = iStack_36c;
  return;
}

