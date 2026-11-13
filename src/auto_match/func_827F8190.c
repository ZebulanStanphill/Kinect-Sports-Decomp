#define true 1
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2d8;
extern unsigned int *auStack_e0;
extern unsigned int fStack_2c8;
extern unsigned int fStack_2cc;
extern unsigned int fStack_2d0;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F7230();
extern int fn_827F98C8();
extern int fn_827F99E8();
extern int fn_827F9B68();
extern int fn_82800A48();
extern int fn_82800A60();
extern int fn_8280ACD8();
extern int fn_8280AD30();
extern int fn_8280B1E8();
extern int fn_8280B240();
extern int fn_8280CB70();
extern int fn_8280CE38();
extern int fn_8280D8B0();
extern int fn_8280E168();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;


void fn_827F8190(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar5;
  unsigned __int64 uVar2;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar8;
  unsigned short *puVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  float *pfVar13;
  unsigned __int64 uVar14;
  int iVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  unsigned char *puStack_2e0;
  float *pfStack_2dc;
  unsigned int auStack_2d8 [2];
  struct { float first; float second; } stack_pair_2d0;

  float fStack_2c8;
  unsigned char auStack_2c0 [16];
  unsigned char auStack_2b0 [16];
  unsigned char auStack_2a0 [64];
  unsigned char auStack_260 [64];
  unsigned char auStack_220 [64];
  unsigned char auStack_1e0 [64];
  unsigned char auStack_1a0 [64];
  unsigned char auStack_160 [64];
  unsigned char auStack_120 [64];
  unsigned char auStack_e0 [224];
  
  iVar5 = fn_82F6A544();
  puVar12 = *(unsigned int **)(iVar5 + 0x20);
  uVar1 = *(unsigned int *)(iVar5 + 0x24);
  puVar9 = *(unsigned short **)(iVar5 + 0x28);
  iVar6 = *(int *)(iVar5 + 0x84);
  uVar2 = fn_827F7210();
  uVar14 = 0;
  uVar10 = 0;
  if ((uVar2 & 0xffff) != 0) {
    pfVar13 = (float *)(iVar6 + 0x14);
    dVar18 = (double)lbl_8200133C;
    dVar22 = (double)lbl_82002AE0;
    do {
      iVar6 = fn_827F99E8(iVar5,uVar14);
      if (iVar6 == 0) {
        lVar11 = uVar14 * 0x40 + (unsigned __int64)*(unsigned int *)(iVar5 + 0xc);
        iVar6 = fn_82800A60(iVar5);
        if (iVar6 == 0) {
          puStack_2e0 = auStack_e0;
        }
        else {
          fn_82800A48(iVar5,uVar14,&puStack_2e0);
        }
        iVar6 = fn_827F9B68(iVar5,uVar14);
        if (((puVar12 == (unsigned int *)0x0) || (puVar9 == (unsigned short *)0x0)) ||
           ((unsigned __int64)*puVar9 == 0xffff)) {
LAB_827f826c:
          iVar15 = 0;
        }
        else {
          iVar15 = 1;
          if (*puVar9 != uVar14) goto LAB_827f826c;
        }
        fn_827F98C8(iVar5,uVar14,&pfStack_2dc);
        if (iVar6 == 0) {
          fn_8280B240((double)*pfStack_2dc,(double)pfStack_2dc[1],(double)pfStack_2dc[2],
                       puStack_2e0);
        }
        else {
          stack_pair_2d0.first = pfVar13[-1];
          stack_pair_2d0.second = *pfVar13;
          fStack_2c8 = pfVar13[1];
          dVar21 = (double)pfVar13[3];
          dVar20 = (double)pfVar13[4];
          dVar19 = (double)pfVar13[5];
          if (*(short *)(pfStack_2dc + 10) != -1) {
            iVar7 = fn_827F9B68(iVar5);
            if (iVar7 != 0) {
              dVar17 = (double)pfVar13[6];
              iVar7 = (unsigned int)*(unsigned short *)(pfStack_2dc + 10) * 0x30 + *(int *)(iVar5 + 0x84);
              dVar21 = (double)(float)(dVar21 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x20) - dVar22) * dVar17 + dVar22));
              dVar20 = (double)(float)(dVar20 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x24) - dVar22) * dVar17 + dVar22));
              dVar19 = (double)(float)(dVar19 / (double)(float)((double)(float)((double)*(float *)(
                                                  iVar7 + 0x28) - dVar22) * dVar17 + dVar22));
            }
          }
          pfVar16 = pfStack_2dc;
          fn_8280ACD8(auStack_2a0);
          while( true ) {
            if (*(short *)(pfVar16 + 10) == -1) break;
            pfVar16 = (float *)((unsigned int)*(unsigned short *)(pfVar16 + 10) * 0x34 + *(int *)(iVar5 + 8));
            fn_8280CE38(auStack_220,pfVar16 + 6);
            fn_8280CB70(auStack_220,auStack_2a0,auStack_2a0);
          }
          fn_8280AD30(auStack_2a0,&stack_pair_2d0.first,&stack_pair_2d0.first);
          fn_8280E168((double)pfVar13[-5],(double)pfVar13[-4],(double)pfVar13[-3],
                       (double)pfVar13[-2],auStack_2b0);
          fn_8280D8B0(pfStack_2dc + 6,auStack_2c0);
          fn_8280CE38(auStack_120,auStack_2c0);
          fn_8280B1E8(dVar21,dVar20,dVar19,auStack_1a0);
          fn_8280CE38(auStack_260,pfStack_2dc + 6);
          fn_8280CE38(auStack_1e0,auStack_2b0);
          fn_8280B240((double)(pfStack_2dc[3] + stack_pair_2d0.first),(double)(pfStack_2dc[4] + stack_pair_2d0.second),
                       (double)(pfStack_2dc[5] + fStack_2c8),auStack_160);
          fn_8280B240((double)(float)((double)pfStack_2dc[3] * dVar18),
                       (double)(float)((double)pfStack_2dc[4] * dVar18),
                       (double)(float)((double)pfStack_2dc[5] * dVar18),puStack_2e0);
          fn_8280CB70(auStack_120,puStack_2e0);
          fn_8280CB70(auStack_1a0,puStack_2e0);
          fn_8280CB70(auStack_260,puStack_2e0);
          fn_8280CB70(auStack_1e0,puStack_2e0);
          fn_8280CB70(auStack_160,puStack_2e0);
        }
        uVar3 = fn_827F7218(iVar5,uVar14);
        if ((uVar3 & 0xffffffff) == 0xffff) {
          fn_827F7230(iVar5,auStack_2d8);
          uVar4 = (unsigned __int64)auStack_2d8[0];
        }
        else {
          fn_827F9B68(iVar5,uVar3 & 0xffff);
          uVar4 = (uVar3 & 0x3ffffff) * 0x40 + (unsigned __int64)*(unsigned int *)(iVar5 + 0xc);
          auStack_2d8[0] = (unsigned int)uVar4;
        }
        if ((param_2 & 2) == 0) {
          if ((iVar6 == 0) || (iVar15 == 0)) {
            fn_8280CB70(uVar4,puStack_2e0,lVar11);
          }
          else {
            if ((uVar3 & 0xffffffff) == 0xffff) {
              lVar8 = 0;
            }
            else {
              lVar8 = (unsigned __int64)*(unsigned short *)(pfStack_2dc + 10) * 0x34 +
                      (unsigned __int64)*(unsigned int *)(iVar5 + 8);
            }
            (*(int (**)())*puVar12)(uVar4,puStack_2e0,lVar11,uVar1,pfStack_2dc,lVar8,uVar10 & 0xffff);
          }
          puVar12 = puVar12 + iVar15;
          puVar9 = puVar9 + iVar15;
          uVar10 = iVar15 + uVar10;
        }
      }
      pfVar13 = pfVar13 + 0xc;
      uVar14 = uVar14 + 1 & 0xffff;
    } while (uVar14 < (uVar2 & 0xffff));
  }
  fn_82F6A590();
  return;
}

