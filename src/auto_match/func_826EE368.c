typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826CD200();
extern int fn_826EBEB0();
extern int fn_826EC160();
extern int fn_826EC3A0();
extern int fn_826EC578();
extern int fn_826EDDC8();
extern int fn_826EE050();
extern int fn_826EE0D0();
extern int fn_826EEFE8();
extern int fn_8277B4A0();
extern int fn_8277B608();
extern int fn_8277B648();
extern int fn_8277B9F0();
extern int fn_8277DD60();
extern int fn_8277E570();
extern int fn_82781F48();
extern int fn_82782A98();
extern int fn_82782B28();
extern int fn_82782CC8();
extern int fn_827830C0();
extern int fn_82783728();
extern unsigned int iStack_ac;
extern float lbl_8200533C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


void fn_826EE368(int param_1,int param_2,char *param_3,unsigned __int64 param_4,int param_5,int param_6)

{
  int *piVar1;
  int (**pcVar2)();
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  char *pcVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned int *puVar21;
  unsigned __int64 uVar22;
  int aiStack_c0 [4];
  struct { unsigned int first; int second; } stack_pair_b0;

  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  
  uStack_a4 = 0;
  uStack_a8 = 0;
  stack_pair_b0.second = 0;
  stack_pair_b0.first = 0;
  iVar14 = 0;
  uVar15 = 0;
  if (param_5 == 0) {
    uVar12 = fn_8267B890(lbl_831E7E64,0x3b4,0);
    if ((uVar12 & 0xffffffff) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_826EEFE8(uVar12,lbl_831E7E64);
    }
  }
  else {
    iVar6 = *(int *)(*(int *)(param_5 + 0x18) + 0x10);
    if (iVar6 != 0) {
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
    }
  }
  iVar16 = iVar6 + 0xc4;
  uStack_a0 = 0xffffffff;
  fn_8277DD60(iVar16);
  *(unsigned int *)(iVar6 + 0xc4) = (unsigned int)LZCOUNT((unsigned int)*(unsigned char *)(param_2 + 0x44)) >> 5;
  *(unsigned char *)(iVar6 + 200) = 1;
  *(unsigned char *)(iVar6 + 0xc9) = *(unsigned char *)(param_1 + 0x18);
  *(unsigned char *)(iVar6 + 0xca) = *(unsigned char *)(param_1 + 0x18);
  *(unsigned char *)(iVar6 + 0xcb) = *(unsigned char *)(param_1 + 0x18);
  fn_82782A98(iVar16,param_2,1);
  *(int *)(iVar6 + 0x3ac) = *(int *)(iVar6 + 0x3ac) + 1;
  if (*(unsigned int *)(iVar6 + 0x1c8) < 0xffff) {
    fn_8277E570(iVar16);
    bVar5 = false;
    uVar11 = *(unsigned int *)(param_6 + 0x20) >> 4 & 1;
    if (((*(unsigned int *)(param_6 + 0x14) & 0x10) == 0) ||
       (bVar4 = true, (*(unsigned int *)(param_6 + 0x1c) & 0x100) == 0)) {
      bVar4 = false;
    }
    if ((bVar4) && (*(char *)(param_1 + 0x14) == '\0')) {
      bVar5 = true;
      if ((*(char *)(param_1 + 0x17) == '\0') ||
         (((*(unsigned int *)(param_6 + 0x1c) >> 0xc & 1) == 0 || (uVar11 != 0)))) {
        if (((*(unsigned int *)(param_6 + 0x1c) >> 9 & 1) == 0) &&
           (uVar12 = 0, pcVar10 = param_3, (param_4 & 0xffffffff) != 0)) {
          do {
            if (*pcVar10 != '\0') goto LAB_826ee518;
            uVar12 = uVar12 + 1;
            pcVar10 = pcVar10 + 0x28;
          } while ((uVar12 & 0xffffffff) < (param_4 & 0xffffffff));
        }
      }
      else {
LAB_826ee518:
        bVar5 = false;
      }
    }
    bVar4 = false;
    if (bVar5) {
      puVar18 = (unsigned int *)(iVar6 + 0x398);
      bVar4 = false;
      fn_8277B608(puVar18);
      iVar19 = iVar6 + 0x308;
      fn_82782B28((double)(*(float *)(param_1 + 4) * lbl_8200533C),iVar19,iVar16,param_3,
                        param_4);
      puVar17 = (unsigned int *)(param_1 + 0x34);
      iVar8 = *(int *)(param_1 + 0x34);
      iVar7 = fn_82782CC8(iVar19);
      if ((unsigned int)(iVar7 + iVar8) < 0xffff) {
        iVar8 = **(int **)(param_1 + 0x40);
        if ((iVar8 == 0) && (iVar8 = 3, uVar11 != 0)) {
          if (*(char *)(param_1 + 0x17) == '\0') {
            uVar12 = 0;
            if ((param_4 & 0xffffffff) != 0) {
              do {
                if (*param_3 != '\0') goto LAB_826ee5d8;
                uVar12 = uVar12 + 1;
                param_3 = param_3 + 0x28;
              } while ((uVar12 & 0xffffffff) < (param_4 & 0xffffffff));
            }
          }
          else {
LAB_826ee5d8:
            iVar8 = 4;
            *(unsigned char *)(param_1 + 0x17) = 1;
          }
        }
        fn_8277B9F0(puVar18,iVar8);
        if ((*(char *)(iVar6 + 0x390) == '\0') || (**(int **)(iVar6 + 0x3a4) == 3)) {
          uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
          puVar21 = (unsigned int *)(param_1 + 0x1c);
          uVar22 = uVar12 + 1;
          fn_826EE050(puVar21,puVar21,uVar22);
          if (uVar12 < (uVar22 & 0xffffffff)) {
            fn_826EC578(uVar12 * 0x28 + (unsigned __int64)*puVar21,uVar22 - uVar12);
          }
          uVar12 = 1;
          fn_827830C0((double)*(float *)(param_1 + 0xc),iVar19,puVar18,
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x20) * 0x28 + (unsigned __int64)*puVar21 +
                            -0x28);
        }
        else {
          uVar12 = fn_82783728((double)*(float *)(param_1 + 0xc),iVar19,puVar18,param_1 + 0x1c
                                    );
        }
        puVar21 = (unsigned int *)(param_1 + 0x1c);
        if (param_5 != 0) {
          iVar8 = 0;
          uVar22 = uVar12;
          uVar20 = uVar12 & 0xffffffff;
          while (uVar20 != 0) {
            iVar7 = *(int *)(param_5 + 4);
            if (iVar7 != 0) {
              *(unsigned int *)(iVar7 + 0xc) =
                   *(unsigned int *)((*(int *)(param_1 + 0x20) - iVar8) * 0x28 + *puVar21 + -0x10) / 3 +
                   *(int *)(iVar7 + 0xc);
            }
            iVar8 = iVar8 + 1;
            uVar22 = uVar22 - 1;
            uVar20 = uVar22;
          }
        }
        uVar11 = *puVar18;
        uVar13 = *puVar17;
        if (uVar11 + uVar13 < 0xffff) {
          stack_pair_b0.first = (unsigned int)uVar12;
          uStack_a8 = uVar13;
          uStack_a4 = uVar11;
          if (**(int **)(param_1 + 0x40) == 0) {
            fn_8277B9F0(puVar17,**(unsigned int **)(iVar6 + 0x3a4));
          }
          fn_8277B648(puVar17,puVar18);
          bVar4 = true;
          uVar15 = uVar12;
        }
        else {
          uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
          uVar12 = *(unsigned int *)(param_1 + 0x20) - uVar12;
          fn_826EE050(puVar21,puVar21,uVar12);
          if (uVar22 < (uVar12 & 0xffffffff)) {
            fn_826EC578(uVar22 * 0x28 + (unsigned __int64)*puVar21,uVar12 - uVar22);
          }
        }
      }
      else {
        *(unsigned char *)(param_1 + 0x16) = 1;
      }
    }
    if (bVar4) {
      *(unsigned char *)(param_1 + 0x15) = 1;
    }
    if (*(char *)(param_1 + 0x15) == '\0') {
      puVar17 = (unsigned int *)(param_1 + 0x34);
      uVar11 = *(unsigned int *)(iVar6 + 0x1c8);
      uStack_a8 = *(unsigned int *)(param_1 + 0x34);
      uVar12 = (unsigned __int64)uStack_a8;
      uStack_a4 = uVar11;
      if (**(int **)(param_1 + 0x40) == 0) {
        fn_8277B9F0(puVar17,1);
      }
      uVar22 = uVar11 + uVar12;
      fn_8277B4A0(puVar17,uVar22);
      if ((unsigned __int64)*puVar17 != (uVar22 & 0xffffffff)) goto LAB_826eeaf8;
      uVar22 = 0;
      if (uVar11 != 0) {
        do {
          lVar9 = uVar12 + uVar22;
          piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 8);
          pcVar2 = *(int (***)())(*piVar1 + 4);
          pfVar3 = (float *)(*(int *)(((unsigned int)uVar22 >> 8 & 0xfffffc) + *(int *)(iVar6 + 0x1d4)) +
                            ((unsigned int)((uVar22 & 0xffffffff) << 3) & 0x1ff8));
          (*pcVar2)((double)(*(float *)(param_1 + 0xc) * *pfVar3),
                    (double)(pfVar3[1] * *(float *)(param_1 + 0xc)),piVar1,
                    (__int64)(int)lVar9 * (__int64)*(int *)(*(int *)(param_1 + 0x40) + 4) +
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x3c),lVar9,pcVar2,0);
          uVar22 = uVar22 + 1;
        } while ((uVar22 & 0xffffffff) < (unsigned __int64)uVar11);
      }
      uVar12 = 0;
      if (*(int *)(iVar6 + 0x218) != 0) {
        puVar17 = (unsigned int *)(param_1 + 0x1c);
        do {
          lVar9 = (unsigned __int64)
                  *(unsigned int *)(*(int *)(((unsigned int)((uVar12 & 0xffffffff) >> 4) & 0xffffffc) +
                                    *(int *)(iVar6 + 0x224)) + ((unsigned int)uVar12 & 0x3f) * 0x18 + 0x10)
                  - 1;
          fn_82781F48(iVar16,uVar12);
          if (((uVar12 & 0xffffffff) == 0) ||
             (*(int *)(*(int *)(param_1 + 0x20) * 0x28 + *puVar17 + -0x24) != (int)lVar9)) {
            uVar20 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
            uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + 1;
            fn_826EE050(puVar17,puVar17,uVar22);
            if (uVar20 < (uVar22 & 0xffffffff)) {
              fn_826EC578(uVar20 * 0x28 + (unsigned __int64)*puVar17,uVar22 - uVar20);
            }
            uVar15 = uVar15 + 1;
          }
          fn_826EC160((unsigned __int64)*(unsigned int *)(param_1 + 0x20) * 0x28 + (unsigned __int64)*puVar17 + -0x28,
                        lVar9,iVar16);
          if ((param_5 != 0) && (iVar8 = *(int *)(param_5 + 4), iVar8 != 0)) {
            *(int *)(iVar8 + 0xc) = *(int *)(iVar6 + 0x248) + *(int *)(iVar8 + 0xc);
          }
          uVar12 = uVar12 + 1;
        } while ((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar6 + 0x218));
        stack_pair_b0.first = (unsigned int)uVar15;
      }
    }
    aiStack_c0[0] = 0;
    aiStack_c0[1] = 0;
    aiStack_c0[2] = 0;
    fn_826CD200(aiStack_c0,*(unsigned int *)(param_2 + 0x18));
    iVar16 = aiStack_c0[0];
    uVar11 = 0;
    iVar8 = stack_pair_b0.second;
    if (*(int *)(param_2 + 0x18) != 0) {
      do {
        *(unsigned char *)(aiStack_c0[0] + uVar11) = 0;
        uVar11 = uVar11 + 1;
        uVar13 = *(unsigned int *)(param_2 + 0x18);
      } while (uVar11 < uVar13);
      if (uVar13 != 0) {
        iVar7 = aiStack_c0[0] + -1;
        uVar15 = 0;
        do {
          uVar12 = uVar15 + 1;
          if (((*(char *)((int)uVar12 + iVar7) == '\0') &&
              (iVar8 = *(int *)(((unsigned int)((uVar15 & 0xffffffff) >> 4) & 0xffffffc) +
                               *(int *)(param_2 + 0x24)) + ((unsigned int)uVar15 & 0x3f) * 0x18,
              -1 < *(int *)(iVar8 + 0x14))) && (1 < *(unsigned int *)(iVar8 + 4))) {
            uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
            puVar17 = (unsigned int *)(param_1 + 0x28);
            uVar20 = uVar22 + 1;
            fn_826EE0D0(puVar17,puVar17,uVar20);
            if (uVar22 < (uVar20 & 0xffffffff)) {
              fn_826EDDC8(uVar22 * 0x58 + (unsigned __int64)*puVar17,uVar20 - uVar22);
            }
            iVar14 = iVar14 + 1;
            *(unsigned char *)(*(int *)(param_1 + 0x2c) * 0x58 + *puVar17 + -0x2c) =
                 *(unsigned char *)(param_1 + 0x14);
            fn_826EC3A0((double)*(float *)(param_1 + 0xc),
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x58 + (unsigned __int64)*puVar17 + -0x58,
                          param_2,uVar15);
            uVar13 = *(unsigned int *)(param_2 + 0x18);
            uVar15 = uVar12;
            if ((uVar12 & 0xffffffff) < (unsigned __int64)uVar13) {
              do {
                iVar19 = *(int *)(((unsigned int)((uVar15 & 0xffffffff) >> 4) & 0xffffffc) +
                                 *(int *)(param_2 + 0x24)) + ((unsigned int)uVar15 & 0x3f) * 0x18;
                if (((*(int *)(iVar19 + 0x14) == *(int *)(iVar8 + 0x14)) &&
                    (*(unsigned char *)(iVar16 + (unsigned int)uVar15) = 1, -1 < *(int *)(iVar19 + 0x14))) &&
                   (1 < *(unsigned int *)(iVar19 + 4))) {
                  fn_826EC3A0((double)*(float *)(param_1 + 0xc),
                                (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x58 + (unsigned __int64)*puVar17 +
                                -0x58,param_2,uVar15);
                }
                uVar13 = *(unsigned int *)(param_2 + 0x18);
                uVar15 = uVar15 + 1;
              } while ((uVar15 & 0xffffffff) < (unsigned __int64)uVar13);
            }
          }
          uVar15 = uVar12;
          iVar8 = iVar14;
        } while ((uVar12 & 0xffffffff) < (unsigned __int64)uVar13);
      }
    }
    stack_pair_b0.second = iVar8;
    fn_826EBEB0(param_1 + 0x50,&stack_pair_b0.first);
    fn_8267BE38(iVar16);
  }
LAB_826eeaf8:
  fn_8267C498(iVar6);
  return;
}

