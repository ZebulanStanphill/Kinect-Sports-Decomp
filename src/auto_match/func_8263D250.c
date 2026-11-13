typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8263CFF8();
extern int fn_8263E248();
extern int fn_826417C8();
extern int fn_82645110();
extern int fn_82647258();
extern unsigned int lbl_82195B80;
extern unsigned int lbl_82195B88;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern V16 loadVectorForShiftLeft();
extern V16 vectorPermute();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8263D250(double param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,__int64 param_7,__int64 param_8,unsigned __int64 param_9)

{
  unsigned char bVar1;
  unsigned int uVar2;
  bool bVar3;
  double dVar4;
  unsigned __int64 in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  double dVar19;
  unsigned char in_vs32 [16];
  unsigned char auVar20 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int in_stack_0000005c;
  unsigned int auStack_b0 [2];
  unsigned __int64 auStack_a8 [21];
  
  uVar2 = *(unsigned int *)(param_2 + 0x2880);
  uVar8 = (unsigned int)param_5;
  uVar6 = (unsigned int)param_6;
  uVar9 = (unsigned int)param_7;
  uVar10 = (unsigned int)param_8;
  uVar13 = 0;
  if (param_4 != -1) {
    uVar5 = *(unsigned int *)(*(int *)((param_4 + 0xc52) * 4 + param_2) + 0x1c);
    uVar13 = (unsigned __int64)uVar5;
    if ((uVar5 & 0xf0000) == 0xa0000) {
      uVar13 = uVar13 & 0xfffffffffff0ffff | 0x20000;
    }
    if ((uVar13 & 0xf0000) == 0xc0000) {
      uVar13 = uVar13 & 0xfffffffffff0ffff | 0x30000;
    }
  }
  uVar16 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2940) & 0xfffffff0;
  if ((param_3 & 0x10) != 0) {
    uVar16 = uVar16 | 1;
  }
  uVar17 = uVar16;
  uStack0000002c = uVar8;
  uStack00000034 = uVar6;
  uStack0000003c = uVar9;
  uStack00000044 = uVar10;
  if ((param_3 & 0x20) != 0) {
    uVar17 = uVar16 | 4;
    if ((param_3 & 0x40) == 0) {
      if ((param_3 & 0x80) != 0) {
        uVar17 = ((unsigned __int64)in_stack_0000005c & 0xff) << 8 | uVar16 & 0xffffffffffff00ff | 4 | 0x20
        ;
      }
    }
    else {
      uVar17 = ((unsigned __int64)in_stack_0000005c & 0xff) << 8;
      uVar17 = (uVar17 | uVar16 & 0xffffffffffff00ff | 4) << 0x20 |
               uVar17 | uVar16 & 0xffffffffffff00df | 4;
    }
    uVar5 = *(unsigned int *)(param_2 + 0x30);
    if (*(unsigned int *)(param_2 + 0x38) < uVar5) {
      uVar5 = fn_82645110(param_2);
    }
    *(unsigned int *)(uVar5 + 4) = 0x210d;
    *(unsigned int *)(uVar5 + 8) = in_stack_0000005c & 0xff | 0xff0000;
    *(unsigned int **)(param_2 + 0x30) = (unsigned int *)(uVar5 + 8);
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  }
  fn_826417C8(param_2,0x100,uVar17);
  uVar5 = *(unsigned int *)(param_2 + 0x30);
  if (*(unsigned int *)(param_2 + 0x38) < uVar5) {
    uVar5 = fn_82645110(param_2);
  }
  *(unsigned int *)(uVar5 + 4) = 0x22080;
  *(unsigned int *)(uVar5 + 8) = 0;
  *(unsigned int *)(uVar5 + 0xc) = 0;
  puVar14 = (unsigned int *)(uVar5 + 0x10);
  *puVar14 = 0x20002000;
  if (((((param_3 & 0x30) == 0) && (uVar16 = uVar13 >> 0x10 & 0xf, uVar16 != 5)) && (uVar16 != 7))
     && (uVar16 != 0xf)) {
    uVar18 = uVar2 >> 0x10 & 3;
    if (uVar18 == 0) {
      iVar12 = 0x50;
      iVar11 = 0x10;
    }
    else {
      iVar11 = 8;
      iVar12 = 0x50;
      if (uVar18 != 1) {
        iVar12 = 0x28;
      }
    }
    if ((iVar12 <= (int)(uVar9 - uVar8)) && (iVar11 <= (int)(uVar10 - uVar6))) {{ V16 _vt0 = loadVectorForShiftLeft(in_r0,param_9); memcpy(auVar20, &_vt0, 16); }
      vectorPermute(in_vs32,in_vs45,auVar20);
      fn_8263E248(uVar16,uVar13 >> 0x14 & 0x3f,auStack_b0,auStack_a8);
      *(unsigned int *)(uVar5 + 0x14) = 0x2203;
      auStack_a8[0] = (unsigned __int64)(auStack_b0[0] >> 8);
      *(unsigned int *)(uVar5 + 0x18) = 0;
      *(unsigned int *)(uVar5 + 0x1c) = 0x2002;
      dVar4 = lbl_82195B88;
      dVar19 = (double)auStack_a8[0] - lbl_82195B80;
      *(unsigned int *)(uVar5 + 0x20) = (unsigned int)uVar13 & 0xfff;
      *(unsigned int *)(uVar5 + 0x24) = 0x210d;
      puVar14 = (unsigned int *)(uVar5 + 0x28);
      *puVar14 = auStack_b0[0] & 0xff | 0xff0000;
      uVar13 = *(unsigned __int64 *)(param_2 + 0x10);
      *(unsigned __int64 *)(param_2 + 0x10) = uVar13 | 0x100;
      param_1 = (double)(float)(dVar19 * dVar4);
      *(unsigned __int64 *)(param_2 + 0x10) = uVar13 | 0x80000000000100;
      *(unsigned __int64 *)(param_2 + 0x10) = uVar13 | 0x80000010000100;
    }
  }
  *(unsigned int **)(param_2 + 0x30) = puVar14;
  if ((((*(unsigned char *)(param_2 + 0x2abf) & 2) != 0) || ((*(unsigned char *)(param_2 + 0x2ac0) & 0x80) != 0)) ||
     ((*(unsigned char *)(param_2 + 0x2ac0) & 0x40) != 0)) {
    fn_82647258(param_2);
  }
  bVar1 = *(unsigned char *)(param_2 + 0x2abc);
  if ((bVar1 & 0x10) == 0) {
    if (((((bVar1 & 0x20) == 0) ||
         ((*(int *)(param_2 + 0x3268) != *(int *)(param_2 + 0x3148) &&
          (*(int *)(param_2 + 0x3148) != 0)))) ||
        ((*(int *)(param_2 + 0x326c) != *(int *)(param_2 + 0x314c) &&
         (*(int *)(param_2 + 0x314c) != 0)))) ||
       (((*(int *)(param_2 + 0x3270) != *(int *)(param_2 + 0x3150) &&
         (*(int *)(param_2 + 0x3150) != 0)) ||
        (((*(int *)(param_2 + 0x3274) != *(int *)(param_2 + 0x3154) &&
          (*(int *)(param_2 + 0x3154) != 0)) ||
         ((*(int *)(param_2 + 0x3278) != *(int *)(param_2 + 0x3158) &&
          (*(int *)(param_2 + 0x3158) != 0)))))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar8 = *(unsigned int *)(param_2 + 0x3254);
    if ((((*(unsigned char *)(param_2 + 0x2abf) & 0x20) != 0) && ((bVar1 & 0x40) != 0)) &&
       ((uVar8 & 0x15555555) != 0)) {
      if ((param_3 & 0x30) != 0) {
        uVar6 = *(unsigned int *)(param_2 + 0x30);
        if (*(unsigned int *)(param_2 + 0x38) < uVar6) {
          uVar6 = fn_82645110(param_2);
        }
        *(unsigned int *)(uVar6 + 4) = 0xc0006000;
        *(unsigned int *)(uVar6 + 8) = uVar8 & 0x15555555;
        uVar9 = *(int *)(param_2 + 0x3424) << 0x12;
        *(unsigned int **)(param_2 + 0x30) = (unsigned int *)(uVar6 + 8);
        fn_8263CFF8(param_1,param_2,param_5 - *(unsigned int *)(param_2 + 0x3370),
                          param_6 - *(unsigned int *)(param_2 + 0x3374),
                          param_7 - (unsigned __int64)*(unsigned int *)(param_2 + 0x3370),
                          param_8 - (unsigned __int64)*(unsigned int *)(param_2 + 0x3374),param_9,
                          uVar9 | uVar2 & 0x3ffff,
                          *(unsigned int *)(param_2 + 0x3428) & 0x3fff | uVar9 | uVar2 & 0x3c000);
      }
      uVar8 = uVar8 & 0xeaaaaaaa;
    }
    uVar6 = 0;
    if (*(int *)(param_2 + 0x327c) != 0) {
      uVar9 = 0;
      puVar15 = (unsigned int *)(param_2 + 0x3374);
      puVar14 = (unsigned int *)(param_2 + 0x3284);
      while( true ) {
        if ((int)param_5 <= (int)puVar14[-1]) {
          param_5 = (unsigned __int64)puVar14[-1];
        }
        if ((int)param_6 <= (int)*puVar14) {
          param_6 = (unsigned __int64)*puVar14;
        }
        uVar10 = uStack0000003c;
        if ((int)puVar14[1] <= (int)uStack0000003c) {
          uVar10 = puVar14[1];
        }
        uVar5 = puVar14[2];
        if ((int)uStack00000044 < (int)puVar14[2]) {
          uVar5 = uStack00000044;
        }
        if ((((int)param_5 < (int)uVar10) && ((int)param_6 < (int)uVar5)) &&
           (uVar18 = 3 << (uVar9 & 0x3f) & uVar8, uVar18 != 0)) {
          uVar7 = *(unsigned int *)(param_2 + 0x30);
          if (*(unsigned int *)(param_2 + 0x38) < uVar7) {
            uVar7 = fn_82645110(param_2);
          }
          *(unsigned int *)(uVar7 + 4) = 0xc0006000;
          *(unsigned int *)(uVar7 + 8) = uVar18;
          *(unsigned int **)(param_2 + 0x30) = (unsigned int *)(uVar7 + 8);
          uVar13 = (unsigned __int64)*puVar15;
          fn_8263CFF8(param_1,param_2,param_5 - puVar15[-1],param_6 - uVar13,
                            (unsigned __int64)uVar10 - (unsigned __int64)puVar15[-1],uVar5 - uVar13,param_9,uVar13
                            ,uVar2);
        }
        uVar6 = uVar6 + 1;
        puVar14 = puVar14 + 4;
        uVar9 = uVar9 + 2;
        puVar15 = puVar15 + 2;
        if (*(unsigned int *)(param_2 + 0x327c) <= uVar6) break;
        param_6 = (unsigned __int64)uStack00000034;
        param_5 = (unsigned __int64)uStack0000002c;
      }
    }
  }
  else {
    fn_8263CFF8(param_1,param_2,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

