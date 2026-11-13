#define true 1
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int fStack_110;
extern unsigned int fStack_12c;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern int fn_82CE5088();
extern int fn_82D81CC8();
extern int fn_82D93128();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_82138690;
extern unsigned int lbl_82145754;
extern unsigned int lbl_82186E6C;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_180;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


void fn_82DF0C68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,__int64 param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uStack_180;
  struct { float first; float second; } stack_pair_170;

  float fStack_168;
  unsigned char auStack_160 [16];
  unsigned char auStack_150 [16];
  unsigned char uStack_140;
  unsigned int uStack_13c;
  unsigned char **ppuStack_130;
  float fStack_12c;
  float fStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_100;
  unsigned int uStack_e0;
  unsigned int uStack_d0;

  iVar5 = fn_82F6A548();
  uStack_180 = 2;
  dVar16 = (double)lbl_82079F28;
  dVar18 = (double)lbl_82002AE0;
  dVar17 = (double)lbl_82186E6C;
  uVar8 = 0;
  lVar10 = param_4 + 0x28;
  do {
    piVar2 = (int *)lVar10;
    iVar9 = 0;
    if (0 < piVar2[1]) {
      iVar11 = 0;
      do {
        iVar12 = 0;
        iVar1 = *(int *)(*piVar2 + iVar11);
        if (0 < *(int *)(iVar1 + 0x4c)) {
          iVar13 = 0;
          do {
            uVar14 = (unsigned __int64)*(unsigned int *)(iVar13 + *(int *)(iVar1 + 0x48));
            fn_82CE5088(&stack_pair_170.first,param_2,uVar14 + 0x140);
            dVar15 = (double)stack_pair_170.first;
            if (((dVar17 <= dVar15) && (dVar15 <= (double)*(float *)(iVar5 + 0x34))) &&
               (uVar14 != param_3)) {
              dVar19 = (double)((ABS(fStack_168) + ABS(stack_pair_170.second)) / (float)(dVar15 + dVar18));
              dVar15 = (double)fn_82D93128(uVar14 + 0xe0);
              if ((double)*(float *)(iVar5 + 0x30) < dVar15) {
                dVar19 = (double)(float)(dVar19 + dVar17);
              }
              if (dVar19 <= dVar16) {
                iVar6 = 0;
                if (0 < *(int *)(iVar5 + 0x24)) {
                  puVar7 = *(unsigned int **)(iVar5 + 0x20);
                  do {
                    if (*puVar7 == uVar14) goto LAB_82df0e20;
                    iVar6 = iVar6 + 1;
                    puVar7 = puVar7 + 1;
                  } while (iVar6 < *(int *)(iVar5 + 0x24));
                }
                puVar3 = (unsigned int *)((int)param_2 + 0x30U & 0xfffffff0);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                fStack_110 = (float)dVar18;
                fStack_12c = (float)dVar18;
                ppuStack_130 = &lbl_82145754;
                uStack_d0 = 0;
                uStack_10c = 0xffffffff;
                iVar6 = (int)in_r0;
                puVar4 = (unsigned int *)((unsigned int)(auStack_160 + iVar6) & 0xfffffff0);
                *puVar4 = *puVar3;
                puVar4[1] = uVar20;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                uStack_140 = 0;
                uStack_13c = 0;
                uStack_e0 = 0;
                uStack_100 = 0xffffffff;
                puVar3 = (unsigned int *)(iVar6 + (int)(uVar14 + 0x140) & 0xfffffff0);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                puVar4 = (unsigned int *)((unsigned int)(auStack_150 + iVar6) & 0xfffffff0);
                *puVar4 = *puVar3;
                puVar4[1] = uVar20;
                puVar4[2] = uVar21;
                puVar4[3] = uVar22;
                fn_82D81CC8(param_4,auStack_160,&ppuStack_130);
                if ((uStack_d0 == 0) || ((unsigned __int64)uStack_d0 == (uVar14 + 0x10 & 0xffffffff))) {
                  uVar8 = uVar14;
                  dVar16 = dVar19;
                }
                ppuStack_130 = &lbl_82138690;
              }
            }
LAB_82df0e20:
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 4;
          } while (iVar12 < *(int *)(iVar1 + 0x4c));
        }
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar9 < piVar2[1]);
    }
    uVar14 = (unsigned __int64)uStack_180;
    lVar10 = param_4 + 0x34;
    uStack_180 = (unsigned int)(uVar14 - 1);
    if (uVar14 - 1 == 0) {
      fn_82F6A594(uVar8);
      return;
    }
  } while( true );
}
