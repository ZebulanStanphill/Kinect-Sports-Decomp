typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA5860();
extern int fn_82CA5C50();
extern int memset();
extern int fn_830C6850();
extern int fn_830C6D68();
extern int fn_830D9228();
extern unsigned int iStack00000014;
extern unsigned int lbl_820FD978;
extern unsigned int lbl_820FD9B8;
extern unsigned int lbl_820FD9D0;
extern unsigned int lbl_820FDD78;
extern unsigned int stack0x00000000;
extern unsigned int uStack_dc;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern V16 vectorAddSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_830CBDA8(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char uVar7;
  char cVar8;
  unsigned short uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  unsigned __int64 *puVar15;
  int *piVar16;
  unsigned char *pbVar17;
  int iVar18;
  unsigned int *puVar19;
  unsigned int *puVar20;
  unsigned short uVar21;
  unsigned short uVar22;
  unsigned short uVar23;
  unsigned __int64 in_r0;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  int iVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  unsigned __int64 uVar33;
  short sVar34;
  unsigned int uVar35;
  unsigned __int64 uVar36;
  int iVar38;
  __int64 lVar37;
  unsigned __int64 uVar39;
  __int64 lVar40;
  unsigned int uVar41;
  int *piVar42;
  unsigned int *puVar43;
  int iVar45;
  unsigned __int64 uVar44;
  unsigned __int64 uVar46;
  unsigned char bVar47;
  unsigned char bVar49;
  short sVar48;
  __int64 lVar50;
  short *psVar51;
  unsigned __int64 uVar52;
  short *psVar53;
  unsigned __int64 uVar54;
  unsigned int uVar55;
  unsigned short *puVar56;
  __int64 lVar57;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs61 [16];
  unsigned int uVar58;
  unsigned int uVar59;
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  int iStack00000014;
  int *piStack00000024;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_dc;
  short asStack_c0 [8];
  short sStack_b0;
  
  uVar24 = ZEXT48(&stack0x00000000);
  puVar43 = *(unsigned int **)(param_1 + 0x110);
  iVar29 = param_2[0x57];
  uVar54 = 0;
  param_3[5] = *(int *)(param_1 + 0x56f8);
  param_3[6] = *(int *)(param_1 + 0x5704);
  param_3[7] = *(int *)(param_1 + 0x56fc);
  param_3[8] = *(int *)(param_1 + 0x5708);
  uVar21 = *(unsigned short *)(param_2 + 0xd) >> 1;
  uVar44 = (unsigned __int64)uVar21;
  uVar22 = *(unsigned short *)((int)param_2 + 0x32) >> 1;
  param_3[1] = 0;
  *param_3 = 0;
  *(unsigned short *)(param_3 + 4) = 0;
  iStack00000014 = param_1;
  piStack00000024 = param_3;
  memset(iVar29,0,(__int64)(int)(unsigned int)uVar21 * (__int64)(int)(unsigned int)uVar22 * 0x10 &
                        0xfffffff0);
  uVar46 = 0;
  uStack_e8 = 0;
  if (uVar44 != 0) {
    do {
      uStack_dc = (unsigned int)uVar22;
      *(unsigned short *)((int)param_3 + 0x12) = 0;
      if ((*(int *)(param_1 + 0x55b4) != 0) &&
         (*(int *)(param_2[0x146] + (int)((uVar46 & 0xffffffff) << 2)) != 0)) {
        **(unsigned __int64 **)(param_1 + 0x54) = *(unsigned __int64 *)(param_2 + 0x1a);
        *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
        *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
        *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
        *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
        *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
        *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
        *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
        *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
        *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
        *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
        puVar15 = *(unsigned __int64 **)(param_1 + 0x54);
        if (*(int *)((int)puVar15 + 0x1c) != 0) {
          uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
          uVar52 = 1;
          uVar39 = uVar36 + 0x10;
          if ((uVar39 & 0xffffffff) == 0) {
            do {
              if ((uVar39 & 0xffffffff) == 0) break;
              uVar33 = *puVar15;
              uVar52 = uVar52 - uVar39;
              *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
              *puVar15 = uVar33 << (uVar39 & 0x7f);
              if ((__int64)(uVar36 - uVar39) < 0) {
                fn_82C4E5E8(puVar15,uVar33 >> (0x40 - uVar39 & 0x7f) & 0xffffffff);
              }
              uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
              uVar39 = uVar36 + 0x10;
            } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
          }
          *puVar15 = *puVar15 << (uVar52 & 0x7f);
          *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
          if ((__int64)(uVar36 - uVar52) < 0) {
            fn_82C4E5E8(puVar15);
          }
        }
        fn_82C4E470(puVar15,*(unsigned int *)(puVar15 + 1) & 7);
        uVar54 = fn_82CA5860(param_1,uVar46);
        *(unsigned __int64 *)(param_2 + 0x1a) = **(unsigned __int64 **)(param_1 + 0x54);
        param_2[0x1c] = *(int *)(*(int *)(param_1 + 0x54) + 8);
        param_2[0x1d] = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
        param_2[0x1e] = *(int *)(*(int *)(param_1 + 0x54) + 0x10);
        param_2[0x1f] = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
        param_2[0x20] = *(int *)(*(int *)(param_1 + 0x54) + 0x18);
        param_2[0x21] = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
        param_2[0x22] = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
        param_2[0x23] = *(int *)(*(int *)(param_1 + 0x54) + 0x24);
        param_2[0x24] = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
        param_2[0x25] = *(int *)(*(int *)(param_1 + 0x54) + 0x2c);
        param_2[0x26] = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
        *(unsigned char *)((int)param_2 + 0x4e3) = 1;
        if ((int)uVar54 != 0) {
          return uVar54;
        }
      }
      if (*(int *)(param_1 + 0xf94) != 0) {
        **(unsigned __int64 **)(param_1 + 0x54) = *(unsigned __int64 *)(param_2 + 0x1a);
        *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
        *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
        *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
        *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
        *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
        *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
        *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
        *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
        *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
        *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
        *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
        uVar54 = fn_82CA5C50(param_1,uVar46);
        *(unsigned __int64 *)(param_2 + 0x1a) = **(unsigned __int64 **)(param_1 + 0x54);
        param_2[0x1c] = *(int *)(*(int *)(param_1 + 0x54) + 8);
        param_2[0x1d] = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
        param_2[0x1e] = *(int *)(*(int *)(param_1 + 0x54) + 0x10);
        param_2[0x1f] = *(int *)(*(int *)(param_1 + 0x54) + 0x14);
        param_2[0x20] = *(int *)(*(int *)(param_1 + 0x54) + 0x18);
        param_2[0x21] = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
        param_2[0x22] = *(int *)(*(int *)(param_1 + 0x54) + 0x20);
        param_2[0x23] = *(int *)(*(int *)(param_1 + 0x54) + 0x24);
        param_2[0x24] = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
        param_2[0x25] = *(int *)(*(int *)(param_1 + 0x54) + 0x2c);
        param_2[0x26] = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
        if ((int)uVar54 != 0) {
          return uVar54;
        }
      }
      uStack_ec = 0;
      iVar29 = (*(unsigned int *)(param_2[0x146] + (int)((uVar46 & 0xffffffff) << 2)) |
               (-(int)uVar46 >> 0x1f) + 1U) - 1;
      if (uVar22 != 0) {
        do {
          uVar44 = 0;
          dataCacheBlockTouch((unsigned __int64)*(unsigned int *)(*param_2 + 0xc) + 0x80);
          *(unsigned char *)(puVar43 + 1) = *(unsigned char *)(param_2 + 6);
          *puVar43 = *puVar43 & 0xeffcffe7 | 0x20000;
          if (*(char *)((int)param_2 + 0x1a) == '\0') {
            puVar15 = (unsigned __int64 *)*param_2;
            uVar46 = *puVar15;
            uVar41 = *(unsigned int *)(puVar15 + 1);
            *puVar15 = uVar46 << 1;
            *(int *)(puVar15 + 1) = (int)((unsigned __int64)uVar41 - 1);
            if ((__int64)((unsigned __int64)uVar41 - 1) < 0) {
              fn_82C4E5E8();
            }
            *puVar43 = (unsigned int)((uVar46 >> 0x3f) << 0x1f) | *puVar43 & 0x7fffffff;
          }
          uVar41 = *puVar43;
          *puVar43 = uVar41 & 0xfffff7ff;
          if ((uVar41 & 0x80000000) == 0x80000000) {
            bVar47 = 0;
            uVar41 = uVar41 & 0xfffef0ff;
            bVar49 = 0;
          }
          else {
            piVar16 = (int *)param_2[0x15b];
            puVar15 = (unsigned __int64 *)*param_2;
            if (piVar16 == (int *)0x0) {
              iVar38 = 0;
              *(unsigned int *)((int)puVar15 + 0x14) = 3;
            }
            else {
              iVar45 = *piVar16;
              sVar34 = *(short *)((int)((*puVar15 >>
                                         (0x40 - (unsigned __int64)*(unsigned char *)(piVar16 + 2) & 0x7f) &
                                        0xffffffff) << 1) + iVar45);
              uVar46 = (unsigned __int64)sVar34;
              if (sVar34 < 0) {
                fn_82C4E470(puVar15);
                do {
                  uVar36 = *puVar15;
                  fn_82C4E470(puVar15,1);
                  sVar34 = *(short *)((int)(((uVar46 - ((__int64)uVar36 >> 0x3f)) + 0x8000 &
                                            0xffffffff) << 1) + iVar45);
                  uVar46 = (unsigned __int64)sVar34;
                  iVar38 = (int)sVar34;
                } while (sVar34 < 0);
              }
              else {
                iVar38 = *(int *)(puVar15 + 1);
                iVar45 = (int)(uVar46 & 0xf);
                *puVar15 = *puVar15 << (uVar46 & 0xf);
                *(int *)(puVar15 + 1) = iVar38 - iVar45;
                if (iVar38 < iVar45) {
                  do {
                    pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                    if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                      bVar2 = *pbVar17;
                      bVar47 = pbVar17[1];
                      bVar49 = pbVar17[2];
                      bVar3 = pbVar17[4];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[5];
                      iVar38 = *(int *)(puVar15 + 1);
                      *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar15 + 1) = iVar38 + 0x30;
                      *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar47) * 0x100 +
                                    (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                  (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5 <<
                                 ((__int64)-iVar38 & 0x7fU)) + *puVar15;
                      goto LAB_830cc38c;
                    }
                    iVar38 = fn_82C4E3B0(puVar15);
                  } while (iVar38 == 1);
                  iVar38 = (int)sVar34 >> 4;
                }
                else {
LAB_830cc38c:
                  iVar38 = (int)sVar34 >> 4;
                }
              }
              if (iVar38 < 0) {
                return 1;
              }
              if (0xe < iVar38) {
                return 1;
              }
            }
            if ((param_2[0x15c] == 1) && (iVar38 == 8)) {
              iVar38 = 0xe;
            }
            bVar2 = (&lbl_820FD9B8)[iVar38];
            bVar47 = (char)bVar2 >> 4 & 1;
            bVar49 = (char)bVar2 >> 5 & 1;
            uVar41 = ((int)(char)((int)(bVar2 & 8) >> 3) << 8 | bVar2 & 7) << 8 |
                     *puVar43 & 0xfffef8ff;
          }
          piVar16 = piStack00000024;
          *puVar43 = uVar41;
          if ((uVar41 & 0x700) == 0x400) {
            uVar39 = 1;
            lVar50 = 0;
            *puVar43 = (*(unsigned char *)((int)param_2 + 0x21) & 1) << 0xb | *puVar43 & 0xfffdf7ff;
            puVar15 = (unsigned __int64 *)*param_2;
            uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
            uVar36 = uVar46 + 0x10;
            if ((uVar36 & 0xffffffff) == 0) {
              do {
                if ((uVar36 & 0xffffffff) == 0) break;
                uVar39 = uVar39 - uVar36;
                *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                lVar50 = (unsigned __int64)
                         (unsigned int)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) << ((unsigned int)uVar39 & 0x3f))
                         + lVar50;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((__int64)(uVar46 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                uVar36 = uVar46 + 0x10;
              } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
            }
            uVar36 = *puVar15;
            *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
            *puVar15 = uVar36 << (uVar39 & 0x7f);
            if ((__int64)(uVar46 - uVar39) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar52 = 1;
            iVar45 = 0;
            *puVar43 = (unsigned int)(((uVar36 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50 & 0xff) <<
                             0x10) & 0x10000 | *puVar43 & 0xfffeffff;
            puVar15 = (unsigned __int64 *)*param_2;
            uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
            uVar36 = uVar46 + 0x10;
            iVar38 = 0;
            if ((uVar36 & 0xffffffff) == 0) {
              do {
                iVar45 = iVar38;
                if ((uVar36 & 0xffffffff) == 0) break;
                uVar52 = uVar52 - uVar36;
                *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                iVar45 = ((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) << ((unsigned int)uVar52 & 0x3f)) +
                         iVar45;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((__int64)(uVar46 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                uVar36 = uVar46 + 0x10;
                iVar38 = iVar45;
              } while ((uVar36 & 0xffffffff) < (uVar52 & 0xffffffff));
            }
            uVar36 = *puVar15;
            *(int *)(puVar15 + 1) = (int)(uVar46 - uVar52);
            *puVar15 = uVar36 << (uVar52 & 0x7f);
            if ((__int64)(uVar46 - uVar52) < 0) {
              fn_82C4E5E8(puVar15);
            }
            if ((int)(uVar36 >> (0x40 - uVar52 & 0x7f)) + iVar45 == 0) {
              iVar38 = 0;
LAB_830cc730:
              puVar15 = (unsigned __int64 *)*param_2;
              if (*(int *)((int)puVar15 + 0x14) == 0) {
                uVar46 = *puVar15;
                uVar41 = *(unsigned int *)(puVar15 + 1);
                uVar7 = *(unsigned char *)(param_2[0x13c] + iVar38);
                *puVar15 = uVar46 << 1;
                *(int *)(puVar15 + 1) = (int)((unsigned __int64)uVar41 - 1);
                if ((__int64)((unsigned __int64)uVar41 - 1) < 0) {
                  fn_82C4E5E8();
                }
                *(unsigned char *)((int)puVar43 + 5) = uVar7;
                *puVar43 = (unsigned int)((uVar46 >> 0x3f) << 3) | *puVar43 & 0xffffffe7;
                if (*(char *)((int)param_2 + 0x1b) != '\0') {
                  if (*(unsigned char *)((int)param_2 + 0x4dd) == 0) {
                    puVar15 = (unsigned __int64 *)*param_2;
                    lVar50 = 0;
                    uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                    uVar36 = uVar46 + 0x10;
                    if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                      uVar39 = 3;
                      if ((uVar36 & 0xffffffff) < 3) {
                        do {
                          if ((uVar36 & 0xffffffff) == 0) break;
                          uVar39 = uVar39 - uVar36;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                          lVar50 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) <<
                                         ((unsigned int)uVar39 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar36 & 0x7f);
                          if ((__int64)(uVar46 - uVar36) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                          uVar36 = uVar46 + 0x10;
                        } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
                      }
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
                      lVar50 = (*puVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50;
                      *puVar15 = *puVar15 << (uVar39 & 0x7f);
                      if ((__int64)(uVar46 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      if ((int)lVar50 == 7) {
                        puVar15 = (unsigned __int64 *)*param_2;
                        uVar39 = 5;
                        lVar50 = 0;
                        uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                        uVar46 = uVar36 + 0x10;
                        if ((uVar46 & 0xffffffff) < 5) {
                          do {
                            if ((uVar46 & 0xffffffff) == 0) break;
                            uVar39 = uVar39 - uVar46;
                            *(int *)(puVar15 + 1) = (int)(uVar36 - uVar46);
                            lVar50 = (unsigned __int64)
                                     (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                           ((unsigned int)uVar39 & 0x3f)) + lVar50;
                            *puVar15 = *puVar15 << (uVar46 & 0x7f);
                            if ((__int64)(uVar36 - uVar46) < 0) {
                              fn_82C4E5E8(puVar15);
                            }
                            uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                            uVar46 = uVar36 + 0x10;
                          } while ((uVar46 & 0xffffffff) < (uVar39 & 0xffffffff));
                        }
                        *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                        uVar46 = (*puVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50;
                        *puVar15 = *puVar15 << (uVar39 & 0x7f);
                        if ((__int64)(uVar36 - uVar39) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                      }
                      else {
                        uVar46 = (unsigned __int64)*(unsigned char *)(param_2 + 0x137) + lVar50;
                      }
                      *(char *)(puVar43 + 1) = (char)((uVar46 & 0xffffffff) << 1) + -1;
                    }
                    else {
                      uVar39 = 1;
                      if ((uVar36 & 0xffffffff) == 0) {
                        do {
                          if ((uVar36 & 0xffffffff) == 0) break;
                          uVar39 = uVar39 - uVar36;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                          lVar50 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar15 >> (0x40 - uVar36 & 0x7f)) <<
                                         ((unsigned int)uVar39 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar36 & 0x7f);
                          if ((__int64)(uVar46 - uVar36) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                          uVar36 = uVar46 + 0x10;
                        } while ((uVar36 & 0xffffffff) < (uVar39 & 0xffffffff));
                      }
                      uVar36 = *puVar15;
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar39);
                      *puVar15 = uVar36 << (uVar39 & 0x7f);
                      if ((__int64)(uVar46 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      if (((uVar36 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) ==
                          0) {
                        *(char *)(puVar43 + 1) =
                             *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                             -1;
                      }
                      else {
                        *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                      }
                    }
                  }
                  else if ((*puVar43 >> 0xc & 0xf & (unsigned int)*(unsigned char *)((int)param_2 + 0x4dd)) == 0) {
                    *(char *)(puVar43 + 1) =
                         *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                  }
                  else {
                    *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                  }
                }
              }
            }
            else {
              piVar16 = (int *)param_2[0x135];
              puVar15 = (unsigned __int64 *)*param_2;
              if (piVar16 == (int *)0x0) {
                iVar38 = 0;
                *(unsigned int *)((int)puVar15 + 0x14) = 3;
              }
              else {
                iVar45 = *piVar16;
                sVar34 = *(short *)((int)((*puVar15 >>
                                           (0x40 - (unsigned __int64)*(unsigned char *)(piVar16 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar45);
                uVar46 = (unsigned __int64)sVar34;
                if (sVar34 < 0) {
                  fn_82C4E470(puVar15);
                  do {
                    uVar36 = *puVar15;
                    fn_82C4E470(puVar15,1);
                    sVar34 = *(short *)((int)(((uVar46 - ((__int64)uVar36 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar45);
                    uVar46 = (unsigned __int64)sVar34;
                    iVar38 = (int)sVar34;
                  } while (sVar34 < 0);
                }
                else {
                  iVar38 = *(int *)(puVar15 + 1);
                  iVar45 = (int)(uVar46 & 0xf);
                  *puVar15 = *puVar15 << (uVar46 & 0xf);
                  *(int *)(puVar15 + 1) = iVar38 - iVar45;
                  if (iVar38 < iVar45) {
                    do {
                      pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                      if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                        bVar2 = *pbVar17;
                        bVar47 = pbVar17[1];
                        bVar49 = pbVar17[2];
                        bVar3 = pbVar17[4];
                        bVar4 = pbVar17[3];
                        bVar5 = pbVar17[5];
                        iVar38 = *(int *)(puVar15 + 1);
                        *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                        *(int *)(puVar15 + 1) = iVar38 + 0x30;
                        *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar47) * 0x100 +
                                      (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                    (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5 <<
                                   ((__int64)-iVar38 & 0x7fU)) + *puVar15;
                        goto LAB_830cc6dc;
                      }
                      iVar38 = fn_82C4E3B0(puVar15);
                    } while (iVar38 == 1);
                    iVar38 = (int)sVar34 >> 4;
                  }
                  else {
LAB_830cc6dc:
                    iVar38 = (int)sVar34 >> 4;
                  }
                }
              }
              iVar38 = iVar38 + 1;
              if ((-1 < iVar38) && (iVar38 < 0x40)) goto LAB_830cc730;
            }
            bVar2 = *(unsigned char *)(puVar43 + 1);
            uVar41 = (unsigned int)*(unsigned char *)((int)puVar43 + 5);
            iVar38 = param_2[0x61];
            do {
              uVar9 = *(unsigned short *)((int)param_2 + 0x32);
              iVar45 = (int)uVar44;
              uVar35 = 0;
              uVar23 = uVar9 >> 1;
              uVar28 = 0;
              uVar55 = 0;
              if (iVar45 >> 2 == 0) {
                piVar42 = param_2 + 0x68;
                if (uStack_ec != 0) {
                  uVar28 = (unsigned int)((~(unsigned __int64)puVar43[-6] & 0xffffffff) >> 0x11) & 1;
                }
                uVar46 = uVar44 & 1;
                uVar28 = uVar28 + (int)uVar46;
                if (iVar29 != 0) {
                  uVar35 = (unsigned int)((~(unsigned __int64)puVar43[(unsigned int)uVar23 * -6] & 0xffffffff) >> 0x11) & 1
                  ;
                }
                iVar26 = iVar45 >> 1;
                uVar35 = uVar35 + iVar26;
                if ((uVar28 != 0) && (uVar35 != 0)) {
                  uVar36 = (__int64)(iVar26 + -1) * (__int64)(int)(unsigned int)uVar23 + uVar46;
                  uVar55 = (unsigned int)((~(unsigned __int64)
                                    *(unsigned int *)((int)puVar43 +
                                             (int)((uVar36 + (uVar36 & 0x7fffffff) * 2 & 0xffffffff)
                                                  << 3) + -0x18) & 0xffffffff) >> 0x11) & 1;
                }
                piVar16 = (int *)param_2[0x132];
                lVar50 = ((__int64)(int)(uStack_e8 * 2 + iVar26) * (__int64)(int)(unsigned int)uVar9 +
                          ((unsigned __int64)uStack_ec & 0x7fffffff) * 2 + uVar46 & 0x7ffffff) * 0x20 +
                         (unsigned __int64)(unsigned int)param_2[0x6c];
              }
              else {
                piVar42 = param_2 + 0x65;
                piVar16 = (int *)param_2[0x133];
                uVar25 = -iVar29;
                if (uStack_ec != 0) {
                  uVar28 = (unsigned int)((~(unsigned __int64)puVar43[-6] & 0xffffffff) >> 0x11) & 1;
                }
                uVar35 = 0;
                if (uVar25 != 0) {
                  uVar35 = uVar25 & ~(puVar43[(unsigned int)uVar23 * -6] >> 0x11) & 1;
                }
                if ((uVar28 != 0) && (uVar35 != 0)) {
                  uVar55 = (unsigned int)((~(unsigned __int64)puVar43[(uVar23 + 1) * -6] & 0xffffffff) >> 0x11) & 1
                  ;
                }
                lVar50 = (unsigned __int64)
                         *(unsigned int *)((int)((uVar44 + 0x69 & 0xffffffff) << 2) + (int)param_2) +
                         ((__int64)(int)(unsigned int)uVar23 * (__int64)(int)uStack_e8 +
                          (unsigned __int64)uStack_ec & 0x7ffffff) * 0x20;
                uVar9 = uVar23;
              }
              uVar25 = *puVar43;
              iVar26 = *(int *)((unsigned int)bVar2 * 0x14 + iVar38 + 0x10);
              uVar46 = 0;
              iVar32 = 0;
              uVar36 = lVar50 - 0x10;
              uVar39 = lVar50 + (unsigned __int64)uVar9 * -0x20;
              if (uVar28 == 0) {
                if (uVar35 != 0) {
LAB_830cce6c:
                  iVar32 = 1;
                  uVar46 = uVar39;
                  goto LAB_830cce74;
                }
              }
              else {
                uVar46 = uVar36;
                if (uVar35 == 0) {
                  iVar32 = 8;
                }
                else {
                  psVar51 = (short *)uVar39;
                  if (uVar55 == 0) {
                    iVar32 = 0;
                  }
                  else {
                    iVar32 = (int)psVar51[-0x10];
                  }
                  sVar34 = *psVar51;
                  sVar48 = *(short *)uVar36;
                  iVar31 = (int)sVar34;
                  iVar30 = (int)sVar48;
                  if (*(char *)((int)param_2 + 0x1b) != '\0') {
                    if (((iVar45 == 0) || (iVar45 == 4)) || (iVar45 == 5)) {
                      iVar30 = param_2[0x61];
                      iVar18 = *(int *)(&lbl_820FDD78 +
                                       (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 + iVar30 +
                                                 0x10) & 0x3f) * 4);
                      iVar32 = *(int *)((unsigned int)*(unsigned char *)(puVar43 + (unsigned int)uVar23 * -6 + -5) * 0x14 +
                                        iVar30 + 0x10) * iVar32 * iVar18 + 0x20000 >> 0x12;
                      iVar31 = *(int *)((unsigned int)*(unsigned char *)(puVar43 + (unsigned int)uVar23 * -6 + 1) * 0x14 +
                                        iVar30 + 0x10) * (int)sVar34 * iVar18 + 0x20000 >> 0x12;
                      iVar30 = *(int *)((unsigned int)*(unsigned char *)(puVar43 + -5) * 0x14 + iVar30 + 0x10) *
                               (int)sVar48 * iVar18 + 0x20000 >> 0x12;
                    }
                    else if (iVar45 == 1) {
                      iVar31 = *(int *)((unsigned int)*(unsigned char *)(puVar43 + (unsigned int)uVar23 * -6 + 1) * 0x14 +
                                        param_2[0x61] + 0x10);
                      iVar32 = iVar31 * iVar32 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                      iVar31 = iVar31 * sVar34 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                    }
                    else if (iVar45 == 2) {
                      iVar30 = *(int *)((unsigned int)*(unsigned char *)(puVar43 + -5) * 0x14 + param_2[0x61] + 0x10)
                      ;
                      iVar32 = iVar30 * iVar32 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                      iVar30 = iVar30 * sVar48 *
                               *(int *)(&lbl_820FDD78 +
                                       (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                  param_2[0x61] + 0x10) & 0x3f) * 4) + 0x20000 >>
                               0x12;
                    }
                  }
                  uVar35 = iVar32 - iVar30 >> 0x1f;
                  uVar28 = iVar32 - iVar31 >> 0x1f;
                  if ((int)((iVar32 - iVar30 ^ uVar35) - uVar35) <
                      (int)((iVar32 - iVar31 ^ uVar28) - uVar28)) goto LAB_830cce6c;
                  iVar32 = 8;
                }
LAB_830cce74:
                if (((uVar46 & 0xffffffff) != 0) && (*(char *)((int)param_2 + 0x1b) != '\0')) {
                  psVar51 = (short *)uVar46;
                  if ((uVar46 & 0xffffffff) == (uVar36 & 0xffffffff)) {
                    if ((((iVar45 == 0) || (iVar45 == 2)) || (iVar45 == 4)) || (iVar45 == 5)) {
                      bVar47 = *(unsigned char *)(puVar43 + -5);
                      lVar57 = 3;
                      lVar40 = uVar24 - 0xc6;
                      iVar31 = *(int *)(&lbl_820FDD78 + (*(unsigned char *)(puVar43 + 1) & 0x3f) * 4);
                      lVar37 = uVar46 + 6;
                      asStack_c0[0] =
                           (short)((unsigned int)(*(int *)(&lbl_820FDD78 +
                                                  (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                             param_2[0x61] + 0x10) & 0x3f) * 4) *
                                          *(int *)((unsigned int)*(unsigned char *)(puVar43 + -5) * 0x14 +
                                                   param_2[0x61] + 0x10) * (int)*psVar51 + 0x20000)
                                  >> 0x10);
                      do {
                        psVar53 = (short *)lVar37;
                        sVar34 = psVar53[-1];
                        sVar48 = *psVar53;
                        sVar10 = psVar53[1];
                        sVar11 = psVar53[2];
                        uVar35 = (unsigned int)bVar47;
                        *(short *)((int)lVar40 + 8) =
                             (short)((int)((int)psVar53[-2] * (unsigned int)bVar47 * iVar31 + 0x20000) >>
                                    0x12);
                        lVar40 = lVar40 + 10;
                        *(short *)lVar40 =
                             (short)((int)((int)sVar34 * (unsigned int)bVar47 * iVar31 + 0x20000) >> 0x12);
                        *(short *)(((int)asStack_c0 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar48 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (2 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar10 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        *(short *)((int)asStack_c0 + (4 - (int)psVar51) + (int)psVar53) =
                             (short)((int)((int)sVar11 * uVar35 * iVar31 + 0x20000) >> 0x12);
                        lVar37 = lVar37 + 10;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
LAB_830cd18c:
                      asStack_c0[0] = asStack_c0[0] >> 2;
                      sStack_b0 = asStack_c0[0];
                    }
                    else {
                      lVar37 = uVar24 - 0xc2;
                      lVar40 = uVar46 - 2;
                      lVar57 = 0x10;
                      do {
                        lVar40 = lVar40 + 2;
                        lVar37 = lVar37 + 2;
                        *(unsigned short *)lVar37 = *(unsigned short *)lVar40;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
                    }
                  }
                  else {
                    if (((iVar45 == 0) || (iVar45 == 1)) || ((iVar45 == 4 || (iVar45 == 5)))) {
                      bVar47 = *(unsigned char *)(puVar43 +
                                        (unsigned int)(*(unsigned short *)((int)param_2 + 0x32) >> 1) * -6 + 1);
                      iVar31 = *(int *)(&lbl_820FDD78 + (*(unsigned char *)(puVar43 + 1) & 0x3f) * 4);
                      lVar40 = uVar24 - 0xc6;
                      lVar57 = 3;
                      lVar37 = uVar46 + 6;
                      asStack_c0[0] =
                           (short)((unsigned int)(*(int *)(&lbl_820FDD78 +
                                                  (*(unsigned int *)((unsigned int)*(unsigned char *)(puVar43 + 1) * 0x14 +
                                                             param_2[0x61] + 0x10) & 0x3f) * 4) *
                                          *(int *)((unsigned int)*(unsigned char *)(puVar43 + (unsigned int)uVar23 * -6 + 1)
                                                   * 0x14 + param_2[0x61] + 0x10) * (int)*psVar51 +
                                         0x20000) >> 0x10);
                      do {
                        psVar53 = (short *)lVar37;
                        iVar30 = iVar31 * (unsigned int)bVar47;
                        sVar34 = psVar53[-1];
                        sVar48 = psVar53[2];
                        sVar10 = *psVar53;
                        sVar11 = psVar53[1];
                        *(short *)((int)lVar40 + 8) =
                             (short)(psVar53[-2] * iVar30 + 0x20000 >> 0x12);
                        lVar40 = lVar40 + 10;
                        *(short *)lVar40 = (short)(sVar34 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + ((int)asStack_c0 - (int)psVar51)) =
                             (short)(sVar10 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + (int)asStack_c0 + (2 - (int)psVar51)) =
                             (short)(sVar11 * iVar30 + 0x20000 >> 0x12);
                        *(short *)((int)psVar53 + (int)asStack_c0 + (4 - (int)psVar51)) =
                             (short)((int)((int)sVar48 * (unsigned int)bVar47 * iVar31 + 0x20000) >> 0x12);
                        lVar37 = lVar37 + 10;
                        lVar57 = lVar57 + -1;
                      } while (lVar57 != 0);
                      goto LAB_830cd18c;
                    }
                    lVar37 = uVar24 - 0xc2;
                    lVar40 = uVar46 - 2;
                    lVar57 = 0x10;
                    do {
                      lVar40 = lVar40 + 2;
                      lVar37 = lVar37 + 2;
                      *(unsigned short *)lVar37 = *(unsigned short *)lVar40;
                      lVar57 = lVar57 + -1;
                    } while (lVar57 != 0);
                  }
                  uVar46 = uVar24 - 0xc0;
                }
              }
              uVar35 = piStack00000024[7];
              lVar40 = (unsigned __int64)uVar35 - 0x80;
              psVar51 = (short *)lVar40;
              piStack00000024[7] = (int)psVar51;
              dataCacheBlockClearToZero(lVar40);
              dataCacheBlockTouch(lVar40);
              dataCacheBlockTouch(uVar46);
              dataCacheBlockTouch(lVar50);
              sVar34 = 0;
              puVar15 = (unsigned __int64 *)*param_2;
              if (piVar16 == (int *)0x0) {
                uVar36 = 0;
                *(unsigned int *)((int)puVar15 + 0x14) = 3;
              }
              else {
                iVar31 = *piVar16;
                sVar48 = *(short *)((int)((*puVar15 >>
                                           (0x40 - (unsigned __int64)*(unsigned char *)(piVar16 + 2) & 0x7f) &
                                          0xffffffff) << 1) + iVar31);
                uVar36 = (unsigned __int64)sVar48;
                if (sVar48 < 0) {
                  fn_82C4E470(puVar15);
                  do {
                    uVar39 = *puVar15;
                    fn_82C4E470(puVar15,1);
                    sVar48 = *(short *)((int)(((uVar36 - ((__int64)uVar39 >> 0x3f)) + 0x8000 &
                                              0xffffffff) << 1) + iVar31);
                    uVar36 = (unsigned __int64)sVar48;
                  } while (sVar48 < 0);
                }
                else {
                  iVar31 = *(int *)(puVar15 + 1);
                  iVar30 = (int)(uVar36 & 0xf);
                  *puVar15 = *puVar15 << (uVar36 & 0xf);
                  *(int *)(puVar15 + 1) = iVar31 - iVar30;
                  if (iVar31 < iVar30) {
                    do {
                      pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                      if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                        bVar47 = *pbVar17;
                        bVar49 = pbVar17[1];
                        bVar3 = pbVar17[2];
                        bVar4 = pbVar17[4];
                        bVar5 = pbVar17[3];
                        bVar6 = pbVar17[5];
                        iVar31 = *(int *)(puVar15 + 1);
                        *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                        *(int *)(puVar15 + 1) = iVar31 + 0x30;
                        *puVar15 = ((((((unsigned __int64)bVar49 + (unsigned __int64)bVar47 * 0x100) * 0x100 +
                                      (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                                    (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar6 <<
                                   ((__int64)-iVar31 & 0x7fU)) + *puVar15;
                        goto LAB_830cd2c0;
                      }
                      iVar31 = fn_82C4E3B0(puVar15);
                    } while (iVar31 == 1);
                    uVar36 = (unsigned __int64)((int)sVar48 >> 4);
                  }
                  else {
LAB_830cd2c0:
                    uVar36 = (unsigned __int64)((int)sVar48 >> 4);
                  }
                }
              }
              sVar48 = (short)uVar36;
              if ((int)(uVar36 & 0xffff) == 0x77) {
                if (iVar26 < 5) {
                  lVar37 = 3 - (__int64)(iVar26 >> 1);
                }
                else {
                  lVar37 = 0;
                }
                uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                uVar52 = lVar37 + 8;
                iVar26 = 0;
                sVar48 = 0;
                uVar39 = uVar36 + 0x10;
                if ((uVar52 & 0xffffffff) < 0x21) {
                  if ((uVar52 & 0xffffffff) == 0) {
                    sVar48 = 0;
                  }
                  else {
                    if ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff)) {
                      do {
                        sVar48 = (short)iVar26;
                        if ((uVar39 & 0xffffffff) == 0) break;
                        uVar52 = uVar52 - uVar39;
                        *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                        iVar26 = ((int)(*puVar15 >> (0x40 - uVar39 & 0x7f)) << ((unsigned int)uVar52 & 0x3f)
                                 ) + iVar26;
                        sVar48 = (short)iVar26;
                        *puVar15 = *puVar15 << (uVar39 & 0x7f);
                        if ((__int64)(uVar36 - uVar39) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                        uVar39 = uVar36 + 0x10;
                      } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
                    }
                    *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
                    sVar48 = (short)(*puVar15 >> (0x40 - uVar52 & 0x7f)) + sVar48;
                    *puVar15 = *puVar15 << (uVar52 & 0x7f);
                    if ((__int64)(uVar36 - uVar52) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                  }
                }
                else {
                  sVar48 = 0;
                }
LAB_830cd518:
                uVar36 = *puVar15;
                uVar28 = *(unsigned int *)(puVar15 + 1);
                *puVar15 = uVar36 << 1;
                *(int *)(puVar15 + 1) = (int)((unsigned __int64)uVar28 - 1);
                if ((__int64)((unsigned __int64)uVar28 - 1) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                sVar34 = (1 - (short)((uVar36 >> 0x3f) << 1)) * sVar48;
              }
              else if ((uVar36 & 0xffff) != 0) {
                if (iVar26 == 4) {
                  uVar36 = *puVar15;
                  uVar28 = *(unsigned int *)(puVar15 + 1);
                  *puVar15 = uVar36 << 1;
                  *(int *)(puVar15 + 1) = (int)((unsigned __int64)uVar28 - 1);
                  if ((__int64)((unsigned __int64)uVar28 - 1) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  sVar48 = (sVar48 * 2 - (short)((__int64)uVar36 >> 0x3f)) + -1;
                }
                else if (iVar26 == 2) {
                  uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                  uVar52 = 2;
                  iVar26 = 0;
                  sVar34 = 0;
                  uVar39 = uVar36 + 0x10;
                  if ((uVar39 & 0xffffffff) < 2) {
                    do {
                      sVar34 = (short)iVar26;
                      if ((uVar39 & 0xffffffff) == 0) break;
                      uVar52 = uVar52 - uVar39;
                      *(int *)(puVar15 + 1) = (int)(uVar36 - uVar39);
                      iVar26 = ((int)(*puVar15 >> (0x40 - uVar39 & 0x7f)) << ((unsigned int)uVar52 & 0x3f))
                               + iVar26;
                      sVar34 = (short)iVar26;
                      *puVar15 = *puVar15 << (uVar39 & 0x7f);
                      if ((__int64)(uVar36 - uVar39) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      uVar36 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                      uVar39 = uVar36 + 0x10;
                    } while ((uVar39 & 0xffffffff) < (uVar52 & 0xffffffff));
                  }
                  uVar39 = *puVar15;
                  *(int *)(puVar15 + 1) = (int)(uVar36 - uVar52);
                  *puVar15 = uVar39 << (uVar52 & 0x7f);
                  if ((__int64)(uVar36 - uVar52) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  sVar48 = sVar48 * 4 + (short)(uVar39 >> (0x40 - uVar52 & 0x7f)) + sVar34 + -3;
                }
                goto LAB_830cd518;
              }
              *psVar51 = sVar34;
              if (*(int *)(*param_2 + 0x14) != 0) {
                return 1;
              }
              if ((uVar25 >> 3 & 3) == 0) {
                iVar26 = param_2[0x13d];
                iVar32 = 0;
              }
              else {
                iVar26 = param_2[iVar32 + 0x13d];
                if (((*(char *)(param_2 + 0x139) != '\0') && (iVar32 != 0)) &&
                   (bVar1 = iVar32 == 8, iVar32 = 8, bVar1)) {
                  iVar32 = 1;
                }
              }
              if (((uVar41 & 1) != 0) &&
                 (iVar26 = fn_830D9228(param_2,*piVar42,lVar40,iVar26), iVar26 < 0)) {
                return 1;
              }
              iVar26 = (int)in_r0;
              if ((uVar46 & 0xffffffff) != 0) {
                psVar53 = (short *)uVar46;
                if (iVar32 == 1) {
                  puVar20 = (unsigned int *)(iVar26 + (int)psVar53 & 0xfffffff0);
                  uVar27 = puVar20[1];
                  uVar58 = puVar20[2];
                  uVar59 = puVar20[3];{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
                  puVar19 = (unsigned int *)(iVar26 + (int)psVar51 & 0xfffffff0);
                  *puVar19 = *puVar20;
                  puVar19[1] = uVar27;
                  puVar19[2] = uVar58;
                  puVar19[3] = uVar59;
                }
                else if (iVar32 == 8) {
                  sVar34 = *(short *)(uVar35 - 0x70);
                  sVar48 = *(short *)(uVar35 - 0x60);
                  *psVar51 = *psVar53 + *psVar51;
                  sVar10 = *(short *)(uVar35 - 0x50);
                  sVar11 = *(short *)(uVar35 - 0x40);
                  sVar12 = *(short *)(uVar35 - 0x30);
                  sVar13 = *(short *)(uVar35 - 0x20);
                  sVar14 = *(short *)(uVar35 - 0x10);
                  *(short *)(uVar35 - 0x70) = psVar53[1] + sVar34;
                  *(short *)(uVar35 - 0x60) = psVar53[2] + sVar48;
                  *(short *)(uVar35 - 0x50) = psVar53[3] + sVar10;
                  *(short *)(uVar35 - 0x40) = psVar53[4] + sVar11;
                  *(short *)(uVar35 - 0x30) = psVar53[5] + sVar12;
                  *(short *)(uVar35 - 0x20) = psVar53[6] + sVar13;
                  *(short *)(uVar35 - 0x10) = psVar53[7] + sVar14;
                }
                else {
                  *psVar51 = *psVar53 + *psVar51;
                }
              }
              psVar53 = (short *)lVar50;
              if (*(char *)(param_2 + 0x139) == '\0') {
                altv207_13(in_vs32,in_vs61);
                puVar20 = (unsigned int *)(iVar26 + (int)psVar53 & 0xfffffff0);
                *puVar20 = in_register_000103e0;
                puVar20[1] = in_register_000103e4;
                puVar20[2] = in_register_000103e8;
                puVar20[3] = in_vr62;
                psVar53[8] = *psVar51;
                psVar53[9] = *(short *)(uVar35 - 0x70);
                psVar53[10] = *(short *)(uVar35 - 0x60);
                psVar53[0xb] = *(short *)(uVar35 - 0x50);
                psVar53[0xc] = *(short *)(uVar35 - 0x40);
                psVar53[0xd] = *(short *)(uVar35 - 0x30);
                psVar53[0xe] = *(short *)(uVar35 - 0x20);
                psVar53[0xf] = *(short *)(uVar35 - 0x10);
              }
              else {
                *psVar53 = *psVar51;
                psVar53[1] = *(short *)(uVar35 - 0x70);
                psVar53[2] = *(short *)(uVar35 - 0x60);
                psVar53[3] = *(short *)(uVar35 - 0x50);
                psVar53[4] = *(short *)(uVar35 - 0x40);
                psVar53[5] = *(short *)(uVar35 - 0x30);
                psVar53[6] = *(short *)(uVar35 - 0x20);
                psVar53[7] = *(short *)(uVar35 - 0x10);
                altv207_13(in_vs32,in_vs61);
                puVar20 = (unsigned int *)((unsigned int)(psVar53 + 8) & 0xfffffff0);
                *puVar20 = in_register_000103f0;
                puVar20[1] = in_register_000103f4;
                puVar20[2] = in_register_000103f8;
                puVar20[3] = in_vr63;
              }
              uVar44 = uVar44 + 1;
              *(unsigned char *)((int)puVar43 + iVar45 + 8) = 0;
              uVar41 = (int)uVar41 >> 1;
            } while ((int)uVar44 < 6);
            uVar41 = *puVar43;
            iVar38 = param_2[0x148];
            uVar54 = 0;
            iVar45 = piStack00000024[1];
            *(unsigned int *)piStack00000024[8] =
                 (*(unsigned short *)(piStack00000024 + 4) & 0x1fffe) << 0xf |
                 (unsigned int)(*(unsigned short *)((int)piStack00000024 + 0x12) >> 1);
            piStack00000024[8] = piStack00000024[8] + 4;
            *(unsigned __int64 *)(iVar45 * 8 + iVar38) =
                 ((unsigned __int64)*(unsigned char *)(puVar43 + 1) << 8 |
                 (unsigned __int64)*(unsigned char *)((int)puVar43 + 5) | (unsigned __int64)(uVar41 >> 2) & 0xc0) << 0x30;
          }
          else {
            iVar38 = param_2[0x57];
            uVar9 = *(unsigned short *)((int)param_2 + 0x32);
            iVar45 = *piStack00000024;
            if (param_2[0x1a8] == 0) {
              puVar15 = (unsigned __int64 *)*param_2;
              lVar50 = 0;
              uVar36 = 1;
              uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
              uVar46 = uVar44 + 0x10;
              if ((uVar46 & 0xffffffff) == 0) {
                do {
                  if ((uVar46 & 0xffffffff) == 0) break;
                  uVar36 = uVar36 - uVar46;
                  *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                  lVar50 = (unsigned __int64)
                           (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) << ((unsigned int)uVar36 & 0x3f)
                                 ) + lVar50;
                  *puVar15 = *puVar15 << (uVar46 & 0x7f);
                  if ((__int64)(uVar44 - uVar46) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
              }
              uVar46 = *puVar15;
              *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
              *puVar15 = uVar46 << (uVar36 & 0x7f);
              if ((__int64)(uVar44 - uVar36) < 0) {
                fn_82C4E5E8(puVar15);
              }
              *puVar43 = (unsigned int)(((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 &
                                0xffffffff) << 5) & 0xe0 | *puVar43 & 0xffffff1f;
            }
            if ((*puVar43 & 0xe0) == 0) {
              puVar15 = (unsigned __int64 *)*param_2;
              lVar50 = 0;
              uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
              uVar46 = uVar44 + 0x10;
              if ((*puVar43 & 0x700) == 0x200) {
                uVar36 = 2;
                if ((uVar46 & 0xffffffff) < 2) {
                  do {
                    if ((uVar46 & 0xffffffff) == 0) break;
                    uVar36 = uVar36 - uVar46;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                    lVar50 = (unsigned __int64)
                             (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                   ((unsigned int)uVar36 & 0x3f)) + lVar50;
                    *puVar15 = *puVar15 << (uVar46 & 0x7f);
                    if ((__int64)(uVar44 - uVar46) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                  } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                }
                *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                uVar46 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                *puVar15 = *puVar15 << (uVar36 & 0x7f);
                if ((__int64)(uVar44 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                if ((uVar46 & 0xffffffff) < 4) {
                  if ((int)uVar46 == 0) goto LAB_830cdb18;
                  if (uVar46 == 1) {
                    *puVar43 = (2U - param_2[0x1a9] & 7) << 5 | *puVar43 & 0xffffff1f;
                  }
                  else {
                    if (uVar46 != 2) goto LAB_830cdbf4;
                    puVar15 = (unsigned __int64 *)*param_2;
                    uVar36 = 1;
                    lVar50 = 0;
                    uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                    if ((uVar46 & 0xffffffff) == 0) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((unsigned int)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((__int64)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    uVar46 = *puVar15;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    *puVar15 = uVar46 << (uVar36 & 0x7f);
                    if ((__int64)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (unsigned __int64)(unsigned int)param_2[0x1aa];
                    uVar41 = *puVar43;
                    if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0
                       ) goto LAB_830cdbe8;
                    *puVar43 = (unsigned int)((2 - uVar44 & 0xffffffff) << 5) & 0xe0 | uVar41 & 0xffffff1f;
                  }
                }
              }
              else {
                uVar36 = 1;
                if ((uVar46 & 0xffffffff) == 0) {
                  do {
                    if ((uVar46 & 0xffffffff) == 0) break;
                    uVar36 = uVar36 - uVar46;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                    lVar50 = (unsigned __int64)
                             (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                   ((unsigned int)uVar36 & 0x3f)) + lVar50;
                    *puVar15 = *puVar15 << (uVar46 & 0x7f);
                    if ((__int64)(uVar44 - uVar46) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                    uVar46 = uVar44 + 0x10;
                  } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                }
                uVar46 = *puVar15;
                *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                *puVar15 = uVar46 << (uVar36 & 0x7f);
                if ((__int64)(uVar44 - uVar36) < 0) {
                  fn_82C4E5E8(puVar15);
                }
                if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0) {
LAB_830cdb18:
                  *puVar43 = (param_2[0x1a9] & 7U) << 5 | *puVar43 & 0xffffff1f;
                }
                else {
                  puVar15 = (unsigned __int64 *)*param_2;
                  uVar36 = 1;
                  lVar50 = 0;
                  uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                  if ((uVar46 & 0xffffffff) == 0) {
                    do {
                      if ((uVar46 & 0xffffffff) == 0) break;
                      uVar36 = uVar36 - uVar46;
                      *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                      lVar50 = (unsigned __int64)
                               (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                     ((unsigned int)uVar36 & 0x3f)) + lVar50;
                      *puVar15 = *puVar15 << (uVar46 & 0x7f);
                      if ((__int64)(uVar44 - uVar46) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                      uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                      uVar46 = uVar44 + 0x10;
                    } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                  }
                  uVar46 = *puVar15;
                  *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                  *puVar15 = uVar46 << (uVar36 & 0x7f);
                  if ((__int64)(uVar44 - uVar36) < 0) {
                    fn_82C4E5E8(puVar15);
                  }
                  if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0)
                  {
                    uVar44 = (unsigned __int64)(unsigned int)param_2[0x1aa];
                    uVar41 = *puVar43;
LAB_830cdbe8:
                    *puVar43 = (unsigned int)(uVar44 << 5) & 0xe0 | uVar41 & 0xffffff1f;
                  }
                  else {
LAB_830cdbf4:
                    *puVar43 = *puVar43 & 0xffffff1f | 0x40;
                  }
                }
              }
            }
            if ((*puVar43 & 0x80000000) == 0) {
              if (bVar49 == 0) {
                iVar26 = 0;
              }
              else {
                piVar42 = (int *)param_2[0x136];
                puVar15 = (unsigned __int64 *)*param_2;
                if (piVar42 == (int *)0x0) {
                  iVar26 = 0;
                  *(unsigned int *)((int)puVar15 + 0x14) = 3;
                }
                else {
                  iVar32 = *piVar42;
                  sVar34 = *(short *)((int)((*puVar15 >>
                                             (0x40 - (unsigned __int64)*(unsigned char *)(piVar42 + 2) & 0x7f) &
                                            0xffffffff) << 1) + iVar32);
                  uVar44 = (unsigned __int64)sVar34;
                  if (sVar34 < 0) {
                    fn_82C4E470(puVar15);
                    do {
                      uVar46 = *puVar15;
                      fn_82C4E470(puVar15,1);
                      sVar34 = *(short *)((int)(((uVar44 - ((__int64)uVar46 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar32);
                      uVar44 = (unsigned __int64)sVar34;
                      iVar26 = (int)sVar34;
                    } while (sVar34 < 0);
                  }
                  else {
                    iVar26 = *(int *)(puVar15 + 1);
                    iVar32 = (int)(uVar44 & 0xf);
                    *puVar15 = *puVar15 << (uVar44 & 0xf);
                    *(int *)(puVar15 + 1) = iVar26 - iVar32;
                    if (iVar26 < iVar32) {
                      do {
                        pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                        if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                          bVar2 = *pbVar17;
                          bVar49 = pbVar17[1];
                          bVar3 = pbVar17[2];
                          bVar4 = pbVar17[3];
                          bVar5 = pbVar17[4];
                          bVar6 = pbVar17[5];
                          iVar26 = *(int *)(puVar15 + 1);
                          *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                          *(int *)(puVar15 + 1) = iVar26 + 0x30;
                          *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar49) * 0x100 +
                                        (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                      (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                                     ((__int64)-iVar26 & 0x7fU)) + *puVar15;
                          goto LAB_830cdd38;
                        }
                        iVar26 = fn_82C4E3B0(puVar15);
                      } while (iVar26 == 1);
                      iVar26 = (int)sVar34 >> 4;
                    }
                    else {
LAB_830cdd38:
                      iVar26 = (int)sVar34 >> 4;
                    }
                  }
                }
                iVar26 = iVar26 + 1;
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
              }
              uVar41 = *puVar43 >> 5 & 7;
              cVar8 = *(char *)(param_2[0x13c] + iVar26);
              *(char *)((int)puVar43 + 5) = cVar8;
              if (uVar41 != 1) {
                if ((*puVar43 & 0x700) == 0) {
                  if (uVar41 == 2) {
                    piVar42 = (int *)param_2[0x56];
                    puVar15 = (unsigned __int64 *)*param_2;
                    if (piVar42 == (int *)0x0) {
                      uVar44 = 0;
                      *(unsigned int *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (unsigned __int64)*(unsigned char *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (unsigned __int64)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((__int64)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (unsigned __int64)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                            if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar47) * 0x100
                                            + (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar3) * 0x100
                                          + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                                         ((__int64)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830cdf0c;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                        }
                        else {
LAB_830cdf0c:
                          uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    if ((uVar44 & 2) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(unsigned int *)(iVar45 * 4 + iVar38) = uVar27;
                    }
                    if ((uVar44 & 1) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(unsigned int *)((iVar45 + 1) * 4 + iVar38) = uVar27;
                    }
                  }
                  else if (bVar47 != 0) {
                    uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                    *(unsigned int *)(iVar45 * 4 + iVar38) = uVar27;
                  }
                }
                else {
                  puVar15 = (unsigned __int64 *)*param_2;
                  if (uVar41 == 2) {
                    piVar42 = (int *)param_2[0x55];
                    if (piVar42 == (int *)0x0) {
                      uVar41 = 0;
                      *(unsigned int *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (unsigned __int64)*(unsigned char *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (unsigned __int64)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((__int64)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (unsigned __int64)sVar34;
                          uVar41 = (unsigned int)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                            if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((unsigned __int64)bVar47 + (unsigned __int64)bVar2 * 0x100) * 0x100
                                            + (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar3) * 0x100
                                          + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                                         ((__int64)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830ce240;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar41 = (int)sVar34 >> 4;
                        }
                        else {
LAB_830ce240:
                          uVar41 = (int)sVar34 >> 4;
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    uVar35 = 3;
                    puVar56 = (unsigned short *)(param_2 + 9);
                    do {
                      if ((1 << (uVar35 & 0x3f) & uVar41) != 0) {
                        uVar9 = *puVar56;
                        uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                        *(unsigned int *)(((unsigned int)uVar9 + iVar45) * 4 + iVar38) = uVar27;
                      }
                      uVar35 = uVar35 - 1;
                      puVar56 = puVar56 + 1;
                    } while (-1 < (int)uVar35);
                  }
                  else {
                    piVar42 = (int *)param_2[0x56];
                    if (piVar42 == (int *)0x0) {
                      uVar44 = 0;
                      *(unsigned int *)((int)puVar15 + 0x14) = 3;
                    }
                    else {
                      iVar26 = *piVar42;
                      sVar34 = *(short *)((int)((*puVar15 >>
                                                 (0x40 - (unsigned __int64)*(unsigned char *)(piVar42 + 2) & 0x7f) &
                                                0xffffffff) << 1) + iVar26);
                      uVar44 = (unsigned __int64)sVar34;
                      if (sVar34 < 0) {
                        fn_82C4E470(puVar15);
                        do {
                          uVar46 = *puVar15;
                          fn_82C4E470(puVar15,1);
                          sVar34 = *(short *)((int)(((uVar44 - ((__int64)uVar46 >> 0x3f)) + 0x8000
                                                    & 0xffffffff) << 1) + iVar26);
                          uVar44 = (unsigned __int64)sVar34;
                        } while (sVar34 < 0);
                      }
                      else {
                        iVar26 = *(int *)(puVar15 + 1);
                        iVar32 = (int)(uVar44 & 0xf);
                        *puVar15 = *puVar15 << (uVar44 & 0xf);
                        *(int *)(puVar15 + 1) = iVar26 - iVar32;
                        if (iVar26 < iVar32) {
                          do {
                            pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                            if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                              bVar2 = *pbVar17;
                              bVar47 = pbVar17[1];
                              bVar49 = pbVar17[2];
                              bVar3 = pbVar17[3];
                              bVar4 = pbVar17[4];
                              bVar5 = pbVar17[5];
                              iVar26 = *(int *)(puVar15 + 1);
                              *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                              *(int *)(puVar15 + 1) = iVar26 + 0x30;
                              *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar47) * 0x100
                                            + (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar3) * 0x100
                                          + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                                         ((__int64)-iVar26 & 0x7fU)) + *puVar15;
                              goto LAB_830ce0ac;
                            }
                            iVar26 = fn_82C4E3B0(puVar15);
                          } while (iVar26 == 1);
                          uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                        }
                        else {
LAB_830ce0ac:
                          uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                        }
                      }
                    }
                    if (*(int *)(*param_2 + 0x14) != 0) {
                      return 1;
                    }
                    if ((uVar44 & 2) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(unsigned int *)(iVar45 * 4 + iVar38) = uVar27;
                    }
                    if ((uVar44 & 1) != 0) {
                      uVar27 = fn_830C6D68(param_2,param_2[0x54]);
                      *(unsigned int *)(((unsigned int)uVar9 + iVar45) * 4 + iVar38) = uVar27;
                    }
                  }
                }
              }
              if ((*(char *)((int)param_2 + 0x1b) != '\0') && (cVar8 != '\0')) {
                if (*(unsigned char *)((int)param_2 + 0x4dd) == 0) {
                  puVar15 = (unsigned __int64 *)*param_2;
                  lVar50 = 0;
                  uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                  uVar46 = uVar44 + 0x10;
                  if (*(char *)((int)param_2 + 0x4e2) == '\0') {
                    uVar36 = 3;
                    if ((uVar46 & 0xffffffff) < 3) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((unsigned int)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((__int64)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    lVar50 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                    *puVar15 = *puVar15 << (uVar36 & 0x7f);
                    if ((__int64)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    if ((int)lVar50 == 7) {
                      puVar15 = (unsigned __int64 *)*param_2;
                      uVar36 = 5;
                      lVar50 = 0;
                      uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                      uVar44 = uVar46 + 0x10;
                      if ((uVar44 & 0xffffffff) < 5) {
                        do {
                          if ((uVar44 & 0xffffffff) == 0) break;
                          uVar36 = uVar36 - uVar44;
                          *(int *)(puVar15 + 1) = (int)(uVar46 - uVar44);
                          lVar50 = (unsigned __int64)
                                   (unsigned int)((int)(*puVar15 >> (0x40 - uVar44 & 0x7f)) <<
                                         ((unsigned int)uVar36 & 0x3f)) + lVar50;
                          *puVar15 = *puVar15 << (uVar44 & 0x7f);
                          if ((__int64)(uVar46 - uVar44) < 0) {
                            fn_82C4E5E8(puVar15);
                          }
                          uVar46 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                          uVar44 = uVar46 + 0x10;
                        } while ((uVar44 & 0xffffffff) < (uVar36 & 0xffffffff));
                      }
                      *(int *)(puVar15 + 1) = (int)(uVar46 - uVar36);
                      uVar44 = (*puVar15 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50;
                      *puVar15 = *puVar15 << (uVar36 & 0x7f);
                      if ((__int64)(uVar46 - uVar36) < 0) {
                        fn_82C4E5E8(puVar15);
                      }
                    }
                    else {
                      uVar44 = (unsigned __int64)*(unsigned char *)(param_2 + 0x137) + lVar50;
                    }
                    *(char *)(puVar43 + 1) = (char)((uVar44 & 0xffffffff) << 1) + -1;
                  }
                  else {
                    uVar36 = 1;
                    if ((uVar46 & 0xffffffff) == 0) {
                      do {
                        if ((uVar46 & 0xffffffff) == 0) break;
                        uVar36 = uVar36 - uVar46;
                        *(int *)(puVar15 + 1) = (int)(uVar44 - uVar46);
                        lVar50 = (unsigned __int64)
                                 (unsigned int)((int)(*puVar15 >> (0x40 - uVar46 & 0x7f)) <<
                                       ((unsigned int)uVar36 & 0x3f)) + lVar50;
                        *puVar15 = *puVar15 << (uVar46 & 0x7f);
                        if ((__int64)(uVar44 - uVar46) < 0) {
                          fn_82C4E5E8(puVar15);
                        }
                        uVar44 = (unsigned __int64)*(unsigned int *)(puVar15 + 1);
                        uVar46 = uVar44 + 0x10;
                      } while ((uVar46 & 0xffffffff) < (uVar36 & 0xffffffff));
                    }
                    uVar46 = *puVar15;
                    *(int *)(puVar15 + 1) = (int)(uVar44 - uVar36);
                    *puVar15 = uVar46 << (uVar36 & 0x7f);
                    if ((__int64)(uVar44 - uVar36) < 0) {
                      fn_82C4E5E8(puVar15);
                    }
                    if (((uVar46 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar50 & 0xffffffff) == 0
                       ) {
                      *(char *)(puVar43 + 1) =
                           *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) +
                           -1;
                    }
                    else {
                      *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                    }
                  }
                }
                else if ((*puVar43 >> 0xc & 0xf & (unsigned int)*(unsigned char *)((int)param_2 + 0x4dd)) == 0) {
                  *(char *)(puVar43 + 1) =
                       *(char *)(param_2 + 0x137) * '\x02' + *(char *)((int)param_2 + 0x4e1) + -1;
                }
                else {
                  *(char *)(puVar43 + 1) = *(char *)((int)param_2 + 0x4de) * '\x02' + -1;
                }
                if (*(unsigned char *)(puVar43 + 1) == 0) {
                  return 1;
                }
                if (0x3e < *(unsigned char *)(puVar43 + 1)) {
                  return 1;
                }
              }
              if ((*(char *)((int)param_2 + 0x1d) != '\0') && (cVar8 != '\0')) {
                piVar42 = (int *)param_2[0x5a];
                puVar15 = (unsigned __int64 *)*param_2;
                if (piVar42 == (int *)0x0) {
                  uVar44 = 0;
                  *(unsigned int *)((int)puVar15 + 0x14) = 3;
                }
                else {
                  iVar38 = *piVar42;
                  sVar34 = *(short *)((int)((*puVar15 >>
                                             (0x40 - (unsigned __int64)*(unsigned char *)(piVar42 + 2) & 0x7f) &
                                            0xffffffff) << 1) + iVar38);
                  uVar44 = (unsigned __int64)sVar34;
                  if (sVar34 < 0) {
                    fn_82C4E470(puVar15);
                    do {
                      uVar46 = *puVar15;
                      fn_82C4E470(puVar15,1);
                      sVar34 = *(short *)((int)(((uVar44 - ((__int64)uVar46 >> 0x3f)) + 0x8000 &
                                                0xffffffff) << 1) + iVar38);
                      uVar44 = (unsigned __int64)sVar34;
                    } while (sVar34 < 0);
                  }
                  else {
                    iVar38 = *(int *)(puVar15 + 1);
                    iVar45 = (int)(uVar44 & 0xf);
                    *puVar15 = *puVar15 << (uVar44 & 0xf);
                    *(int *)(puVar15 + 1) = iVar38 - iVar45;
                    if (iVar38 < iVar45) {
                      do {
                        pbVar17 = *(unsigned char **)((int)puVar15 + 0xc);
                        if (pbVar17 < (unsigned char *)(*(int *)(puVar15 + 2) - 4U)) {
                          bVar2 = *pbVar17;
                          bVar47 = pbVar17[1];
                          bVar49 = pbVar17[2];
                          bVar3 = pbVar17[3];
                          bVar4 = pbVar17[4];
                          bVar5 = pbVar17[5];
                          iVar38 = *(int *)(puVar15 + 1);
                          *(unsigned char **)((int)puVar15 + 0xc) = pbVar17 + 6;
                          *(int *)(puVar15 + 1) = iVar38 + 0x30;
                          *puVar15 = ((((((unsigned __int64)bVar2 * 0x100 + (unsigned __int64)bVar47) * 0x100 +
                                        (unsigned __int64)bVar49) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                                      (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                                     ((__int64)-iVar38 & 0x7fU)) + *puVar15;
                          goto LAB_830ce6bc;
                        }
                        iVar38 = fn_82C4E3B0(puVar15);
                      } while (iVar38 == 1);
                      uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                    }
                    else {
LAB_830ce6bc:
                      uVar44 = (unsigned __int64)((int)sVar34 >> 4);
                    }
                  }
                }
                if (*(int *)(*param_2 + 0x14) != 0) {
                  return 1;
                }
                uVar41 = *puVar43;
                iVar38 = (int)((uVar44 & 0xffffffff) << 2);
                uVar35 = (unsigned int)((((~uVar44 & 0xffffffff) >> 0x1f) + (unsigned __int64)(7 < uVar44) & 1) <<
                               0x1c);
                *puVar43 = uVar35 | uVar41 & 0xefffffff;
                uVar28 = (*(unsigned int *)((int)&lbl_820FD978 + iVar38) & 7) << 0x18;
                *puVar43 = uVar28 | uVar35 | uVar41 & 0xe8ffffff;
                *puVar43 = (*(unsigned int *)((int)&lbl_820FD9D0 + iVar38) & 3) << 0x14 |
                           uVar28 | uVar35 | uVar41 & 0xe0cfffff;
              }
            }
            else {
              *(unsigned char *)((int)puVar43 + 5) = 0;
            }
            uVar54 = fn_830C6850(param_2,puVar43,piVar16);
            if ((int)uVar54 != 0) {
              return uVar54;
            }
          }
          puVar43 = puVar43 + 6;
          uStack_ec = uStack_ec + 1;
          piStack00000024[1] = piStack00000024[1] + 1;
          *piStack00000024 = *piStack00000024 + 2;
          *(short *)((int)piStack00000024 + 0x12) = *(short *)((int)piStack00000024 + 0x12) + 2;
        } while (uStack_ec < uStack_dc);
        uVar44 = (unsigned __int64)(unsigned int)uVar21;
        uVar46 = (unsigned __int64)uStack_e8;
        param_3 = piStack00000024;
        param_1 = iStack00000014;
      }
      uVar46 = uVar46 + 1;
      uStack_e8 = (unsigned int)uVar46;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      *param_3 = (unsigned int)uVar22 * 2 + *param_3;
    } while ((uVar46 & 0xffffffff) < uVar44);
  }
  *(int *)(param_1 + 0xb0b4) = param_3[8] - *(int *)(param_1 + 0x5708) >> 2;
  *(unsigned int *)param_3[8] = 0xffffffff;
  **(unsigned __int64 **)(param_1 + 0x54) = *(unsigned __int64 *)(param_2 + 0x1a);
  *(int *)(*(int *)(param_1 + 0x54) + 8) = param_2[0x1c];
  *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2[0x1d];
  *(int *)(*(int *)(param_1 + 0x54) + 0x10) = param_2[0x1e];
  *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2[0x1f];
  *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_2[0x20];
  *(int *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2[0x21];
  *(int *)(*(int *)(param_1 + 0x54) + 0x20) = param_2[0x22];
  *(int *)(*(int *)(param_1 + 0x54) + 0x24) = param_2[0x23];
  *(int *)(*(int *)(param_1 + 0x54) + 0x28) = param_2[0x24];
  *(int *)(*(int *)(param_1 + 0x54) + 0x2c) = param_2[0x25];
  *(int *)(*(int *)(param_1 + 0x54) + 0x30) = param_2[0x26];
  return uVar54;
}

