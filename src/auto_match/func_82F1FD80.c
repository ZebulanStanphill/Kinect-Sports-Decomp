#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern int fn_82ED9160();
extern int fn_82F008A0();
extern int fn_82F06BE8();
extern int fn_82F07488();
extern int fn_82F1EF70();
extern int fn_82F26110();
extern int fn_82F261D8();
extern int fn_82F26D38();
extern int fn_82F26EF8();
extern int fn_82F26F98();
extern int fn_82F27CF0();
extern int fn_82F691F0();
extern unsigned int iStack_2c4;
extern unsigned int iStack_2c8;
extern unsigned int iStack_2d8;
extern unsigned int iStack_2ec;
extern unsigned int iStack_2f4;
extern unsigned int iStack_2f8;
extern unsigned int iStack_2fc;
extern unsigned int iStack_300;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82162A70;
extern unsigned int lbl_82162A78;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000004c;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2e0;
extern unsigned int uStack_2e4;
extern unsigned int uStack_2e8;
extern unsigned int uStack_2f0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F1FD80(int param_1,unsigned __int64 param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int in_r10;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar8;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned int uVar17;
  __int64 lVar16;
  unsigned __int64 uVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar20;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000008c;
  unsigned int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  unsigned int in_stack_000000b4;
  unsigned int in_stack_000000bc;
  unsigned int in_stack_000000c4;
  unsigned int in_stack_000000cc;
  int in_stack_000000fc;
  int in_stack_00000104;
  int in_stack_0000010c;
  int in_stack_00000114;
  int *in_stack_0000013c;
  unsigned int *in_stack_00000144;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  unsigned int uStack_2f0;
  int iStack_2ec;
  unsigned int uStack_2e8;
  unsigned int uStack_2e4;
  unsigned __int64 uStack_2e0;
  int iStack_2d8;
  unsigned __int64 uStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  __int64 lStack_2c0;
  unsigned int uStack_2b8;
  unsigned __int64 uStack_2b0;
  unsigned char auStack_2a0 [64];
  unsigned char auStack_260 [64];
  unsigned char auStack_220 [128];
  unsigned char auStack_1a0 [336];
  
  uStack0000001c = (unsigned int)param_2;
  *in_stack_00000144 = 0;
  *in_stack_0000013c = 0;
  puVar19 = (unsigned int *)(*(int *)(param_1 + 0x1e54) + in_stack_0000008c * 0x114);
  if (*(int *)(param_1 + 0x89c) == 3) {
    uStack_2e8 = 0;
  }
  else {
    uStack_2e8 = *(unsigned int *)(param_1 + 0x904);
  }
  if ((*(int *)(param_1 + 0x854) * *(int *)(param_1 + 0x850) & 0xffffff80U) == 0) {
    uVar8 = 4;
    uVar4 = 3;
  }
  else {
    uVar8 = 3;
    uVar4 = 4;
  }
  *(unsigned int *)(param_1 + 0x85c) = uVar8;
  *(unsigned int *)(param_1 + 0x860) = uVar4;
  if (*(int *)(param_1 + 0x7614) != 0) {
    fVar1 = lbl_82002AE0;
    if (*(int *)(param_1 + 0x628) != 0) {
      fVar1 = lbl_82162A78;
    }
    lStack_2c0 = (__int64)*(int *)(param_1 + 0x588);
    *(int *)(param_1 + 0x1ae4) =
         (int)((SQRT((double)lStack_2c0) * (double)(__int64)(0x87 - *(int *)(param_1 + 0x58c)) *
                (double)fVar1 * lbl_82162A70) / (double)(__int64)*(int *)(param_1 + 0x58c) +
              lbl_82005730);
  }
  iVar3 = uStack0000001c * *(int *)(param_1 + 0x2d0);
  if ((param_2 & 0xffffffff) < (unsigned __int64)param_3) {
    uVar11 = (unsigned __int64)in_stack_000000a4;
    uVar18 = param_2;
    uStack00000024 = param_3;
    uStack0000004c = in_r10;
    iStack_2c8 = iVar3;
    do {
      uVar20 = 0;
      lVar12 = 0;
      lStack_2c0 = CONCAT44((unsigned int)LZCOUNT((int)param_2 - (int)uVar18) >> 5,(((unsigned __int64)(lStack_2c0) >> 32) & 0xFFFFFFFF));
      if (*(int *)(param_1 + 0x2d0) != 0) {
        uStack_2b8 = in_stack_00000074 - in_stack_0000006c;
        iStack_2c4 = (param_4 >> 1) + 0x10;
        iVar10 = iVar3 << 1;
        uStack_2e4 = in_stack_0000006c;
        iStack_2d8 = param_4;
        do {
          uVar4 = uStack0000004c;
          iVar3 = (int)uVar20;
          uStack_2f0 = *(int *)(param_1 + 0x31c) * (int)uVar18 + iVar3;
          iStack_2ec = iStack_2c4;
          lVar6 = (__int64)(iStack_2d8 + 0x20) * (__int64)*(int *)(param_1 + 0x564);
          lVar2 = ((unsigned __int64)(unsigned int)((*(int *)(param_1 + 0x31c) + 1 >> 1) * (int)uVar18 + iVar3) &
                  0x1fffffff) * 8;
          uVar17 = (unsigned int)LZCOUNT((*(int *)(param_1 + 0x2d0) + -1) - iVar3);
          uStack_2e0 = CONCAT44(uVar17,(((unsigned __int64)(uStack_2e0) >> 32) & 0xFFFFFFFF));
          lVar7 = (__int64)iStack_2c4 * (__int64)*(int *)(param_1 + 0x568) +
                  (__int64)((int)lVar12 >> 1) + 0x10;
          lVar16 = lVar6 + lVar12 + (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 0x20;
          lVar15 = lVar6 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1e7c) + lVar12 + 0x20;
          lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar7;
          lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar7;
          lVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e80) + lVar7;
          lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e84) + lVar7;
          uStack_2d0 = uVar11;
          fn_82ED9160(param_1,uStack0000004c,in_stack_00000054,in_stack_0000005c,
                        ((unsigned __int64)uStack_2f0 & 0xfffffff) * 0x10 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc),
                        lVar2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1ac0),
                        lVar2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x1ac4),uVar17 >> 5);
          uVar11 = uStack_2d0;
          puVar5 = puVar19 + 0x26;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          puVar5 = puVar19 + 0x2c;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          puVar5 = puVar19 + 0x32;
          lVar2 = 6;
          do {
            puVar5 = puVar5 + 1;
            *puVar5 = 0;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
          if ((*(int *)(param_1 + 0x1c20) != 0) && ((uVar18 & 0xffffffff) == 0)) {
            fn_82F06BE8(param_1,uVar4,in_stack_00000054,in_stack_0000005c);
          }
          lVar2 = (__int64)((int)puVar19[0x17] >> 0x1c);
          if ((lVar2 - 1U & 0xffffffff) < 5) {
            if (((int)(lVar2 - 1U) == 0) || (lVar2 == 2)) {
              iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
              iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2fc,&iStack_300,uVar20,uVar18);
              }
              uVar4 = uStack_2e8;
              fn_82F27CF0(param_1,lVar16,*(unsigned int *)(param_1 + 0x564),auStack_1a0,0x10,
                                iStack_2fc,iStack_300,uStack_2e8);
              iStack_2f4 = (int)*(short *)(*(int *)(param_1 + 0x9a0) + iVar10);
              iStack_2f8 = (int)*(short *)(*(int *)(param_1 + 0x9a4) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2f4,&iStack_2f8,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar15,*(unsigned int *)(param_1 + 0x564),auStack_2a0,0x10,
                                iStack_2f4,iStack_2f8,uVar4);
              (**(int (***)())(param_1 + 0xb1c))
                        (auStack_1a0,0x10,auStack_2a0,0x10,auStack_1a0,0x10,0x10,0x10);
              if (*(int *)(param_1 + 8) != 0) {
                iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
                iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              }
              fn_82F26EF8(param_1,&iStack_2fc,&iStack_300);
              fn_82F26EF8(param_1,&iStack_2f4,&iStack_2f8);
              if (*(int *)(param_1 + 8) != 0) {
                fn_82F26D38(param_1,uVar20,uVar18,&iStack_2fc,&iStack_300);
              }
              fn_82F26F98(param_1,lVar6,*(unsigned int *)(param_1 + 0x568),auStack_2a0,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar14,*(unsigned int *)(param_1 + 0x568),auStack_260,8,
                                iStack_2f4,iStack_2f8,0);
              (**(int (***)())(param_1 + 0xb1c))(auStack_2a0,8,auStack_260,8,auStack_2a0,8,8,8);
              fn_82F26F98(param_1,lVar13,*(unsigned int *)(param_1 + 0x568),auStack_220,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar7,*(unsigned int *)(param_1 + 0x568),auStack_260,8,
                                iStack_2f4,iStack_2f8,0);
              (**(int (***)())(param_1 + 0xb1c))(auStack_220,8,auStack_260,8,auStack_220,8,8,8);
              (**(int (***)())(param_1 + 0x200c))(1,1,in_stack_000000ac,auStack_2a0,8,8,1,1);
              (**(int (***)())(param_1 + 0x200c))(1,1,in_stack_000000b4,auStack_220,8,8,1,1);
              (**(int (***)())(param_1 + 0x200c))(1,1,uVar11,auStack_1a0,0x10,0x10,1,1);
            }
            else if (lVar2 == 3) {
              iStack_2f4 = (int)*(short *)(*(int *)(param_1 + 0x9a0) + iVar10);
              iStack_2f8 = (int)*(short *)(*(int *)(param_1 + 0x9a4) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2f4,&iStack_2f8,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar15,*(unsigned int *)(param_1 + 0x564),uVar11,0x10,
                                iStack_2f4,iStack_2f8,uStack_2e8);
              fn_82F26EF8(param_1,&iStack_2f4,&iStack_2f8);
              fn_82F26F98(param_1,lVar14,*(unsigned int *)(param_1 + 0x568),in_stack_000000ac,8,
                                iStack_2f4,iStack_2f8,0);
              fn_82F26F98(param_1,lVar7,*(unsigned int *)(param_1 + 0x568),in_stack_000000b4,8,
                                iStack_2f4,iStack_2f8,0);
            }
            else {
              if (lVar2 != 4) {
                *in_stack_0000013c = *in_stack_0000013c + 1;
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(uVar11,0x80,0x100);
              }
              iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
              iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              if (*(int *)(param_1 + 4) == 8) {
                fn_82F261D8();
              }
              else {
                fn_82F26110(param_1,&iStack_2fc,&iStack_300,uVar20,uVar18);
              }
              fn_82F27CF0(param_1,lVar16,*(unsigned int *)(param_1 + 0x564),uVar11,0x10,
                                iStack_2fc,iStack_300,uStack_2e8);
              if (*(int *)(param_1 + 8) != 0) {
                iStack_2fc = (int)*(short *)(*(int *)(param_1 + 0x998) + iVar10);
                iStack_300 = (int)*(short *)(*(int *)(param_1 + 0x99c) + iVar10);
              }
              fn_82F26EF8(param_1,&iStack_2fc,&iStack_300);
              if (*(int *)(param_1 + 8) != 0) {
                fn_82F26D38(param_1,uVar20,uVar18,&iStack_2fc,&iStack_300);
              }
              fn_82F26F98(param_1,lVar6,*(unsigned int *)(param_1 + 0x568),in_stack_000000ac,8,
                                iStack_2fc,iStack_300,0);
              fn_82F26F98(param_1,lVar13,*(unsigned int *)(param_1 + 0x568),in_stack_000000b4,8,
                                iStack_2fc,iStack_300,0);
            }
          }
          *puVar19 = *puVar19 & 0x7fffffff;
          puVar19[0x15] = 0;
          (**(int (***)())(param_1 + 0x1fb0))
                    (param_1,uStack0000004c,in_stack_00000054,in_stack_0000005c,uVar11,
                     in_stack_000000ac,in_stack_000000b4,in_stack_000000bc);
          fn_82F008A0(param_1,uVar20,uVar18,in_stack_000000bc,0,0);
          lVar2 = (unsigned __int64)in_stack_00000064 + 8 + lVar12;
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,lVar2 + -8,uVar11,*(unsigned int *)(param_1 + 0x564),0x10);
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,lVar2,uVar11 + 8,*(unsigned int *)(param_1 + 0x564),0x10);
          lVar2 = lVar2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x4a90);
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,lVar2,uVar11 + 0x80,*(unsigned int *)(param_1 + 0x564),0x10);
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,lVar2 + 8,uVar11 + 0x88,*(unsigned int *)(param_1 + 0x564),0x10);
          uVar17 = uStack_2e4;
          uVar9 = (unsigned __int64)uStack_2e4;
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,uVar9,in_stack_000000ac,*(unsigned int *)(param_1 + 0x568),8);
          (**(int (***)())(param_1 + 0x2004))
                    (param_1,uStack_2b8 + uVar9,in_stack_000000b4,*(unsigned int *)(param_1 + 0x568),8
                    );
          fn_82F07488(param_1,puVar19,uVar20,uVar18);
          uStack_2f0 = in_stack_00000114;
          iStack_2ec = in_stack_0000010c;
          uStack_2e4 = in_stack_00000104;
          uStack_2d0 = CONCAT44(in_stack_000000fc,(((unsigned __int64)(uStack_2d0) >> 32) & 0xFFFFFFFF));
          uStack_2e0 = uVar18;
          uStack_2b0 = uVar20;
          fn_82F1EF70(param_1,puVar19,uVar20,uVar18,(((unsigned __int64)(lStack_2c0) >> 0) & 0xFFFFFFFF),in_stack_000000bc,
                            in_stack_000000c4,in_stack_000000cc);
          iVar3 = iStack_2c8 + 1;
          puVar19 = puVar19 + 0x45;
          iVar10 = iVar10 + 2;
          if (*(int *)(param_1 + 0x648) != 0) {
            in_stack_00000104 = in_stack_00000104 + 0xc;
            in_stack_000000fc = in_stack_000000fc + 0x300;
            in_stack_0000010c = in_stack_0000010c + 0x300;
            in_stack_00000114 = in_stack_00000114 + 0xc;
          }
          uVar20 = uStack_2b0 + 1;
          uStack_2e4 = uVar17 + 8;
          lVar12 = lVar12 + 0x10;
          uVar18 = uStack_2e0;
          iStack_2c8 = iVar3;
        } while ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0));
        param_2 = (unsigned __int64)uStack0000001c;
        param_3 = uStack00000024;
        param_4 = iStack_2d8;
      }
      uVar18 = uVar18 + 1;
      param_4 = param_4 + 0x10;
      in_stack_0000006c = *(int *)(param_1 + 0x580) + in_stack_0000006c;
      in_stack_00000074 = *(int *)(param_1 + 0x580) + in_stack_00000074;
      in_stack_00000064 = *(int *)(param_1 + 0x57c) + in_stack_00000064;
    } while ((uVar18 & 0xffffffff) < (unsigned __int64)param_3);
  }
  return;
}

