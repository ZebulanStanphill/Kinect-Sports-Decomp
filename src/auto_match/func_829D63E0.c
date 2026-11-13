#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_100;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_829D47B0();
extern int fn_829D4800();
extern int fn_829D48F8();
extern int fn_829DB2B8();
extern int fn_829DB2D8();
extern int fn_829DB3A0();
extern int fn_829DB408();
extern int fn_829DB8B8();
extern int fn_829DB8D0();
extern int fn_829DC890();
extern int fn_829E1A80();
extern int fn_829E1B30();
extern int fn_829E2DE8();
extern int fn_82A1F2F8();
extern int fn_82A28E60();
extern int fn_82A94368();
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_ec;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_832179FC;
extern unsigned int lbl_83217B88;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_829D63E0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned char bVar5;
  char cVar6;
  int iVar4;
  int *piVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int aiStack_120;
  __int64 lStack_118;
  int aiStack_110 [4];
  unsigned int auStack_100 [2];
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  int iStack_ec;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  struct { int first; unsigned int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [96];
  
  iStack_ec = lbl_832179FC + 0x8f3f0;
  uStack_f0 = fn_82A1F2F8();
  uVar11 = 0;
  auStack_100[0] = 0;
  stack_pair_d0.first = 0;
  bVar5 = 0;
  iStack_e0 = 0;
  stack_pair_d0.second = 0;
  iStack_dc = 0;
  uStack_f8 = 0;
  uStack_c8 = 0;
  iStack_d8 = 0;
  uStack_f4 = 0;
  uStack_c4 = 0;
  iStack_d4 = 0;
  aiStack_110[0] = 0;
  fn_82A94368(*(unsigned int *)(param_3 + 0x14),0,auStack_b0);
  iVar9 = param_1 + 0x48;
  iVar3 = fn_829DC890(param_2,auStack_b0,param_3 + 0x1c,auStack_100,auStack_c0,iVar9);
  uVar1 = uStack_f4;
  iVar4 = lbl_832179FC;
  if (iVar3 < 0) {
    fn_829D4800(&uStack_f0);
    return 0;
  }
  uVar10 = (unsigned __int64)uStack_f8 - (unsigned __int64)auStack_100[0];
  fn_829D47B0(&aiStack_120,(__int64)(int)uStack_f4 * (__int64)(int)uVar10);
  iVar3 = aiStack_120;
  if (aiStack_120 == 0) goto LAB_829d64ec;
  lVar2 = fn_829DB2B8(param_4,auStack_b0,auStack_100,aiStack_120);
  if ((-1 < lVar2) &&
     (bVar5 = fn_829E1A80(iVar3,uVar10,uVar1,auStack_c0,&stack_pair_d0.first,aiStack_110,iVar9),
     *(int *)(param_1 + 0x68) == 1)) {
    aiStack_120 = 4;
    if (bVar5 == 0) {
      piVar7 = &iStack_e0;
      iStack_e0 = (int)((lbl_82002AE0 - *(float *)(iVar4 + 0x8f04c)) * 0.5f *
                       (float)(uVar10 & 0xffffffff));
      iStack_d8 = (int)uVar10 - iStack_e0;
      iStack_dc = (int)((lbl_82002AE0 - *(float *)(iVar4 + 0x8f050)) * 0.5f * (float)uVar1);
      lStack_118 = (__int64)iStack_dc;
      iStack_d4 = uVar1 - iStack_dc;
    }
    else {
      piVar7 = &stack_pair_d0.first;
    }
    lVar2 = fn_829DB2D8((double)*(float *)(iVar4 + 0x8f038),iVar3,aiStack_110[0],uVar10,uVar1,
                              piVar7);
    if ((-1 < lVar2) &&
       (lVar2 = fn_829DB3A0((double)*(float *)(iVar4 + 0x8f03c),
                                (double)*(float *)(iVar4 + 0x8f040)), -1 < lVar2)) {
      iVar4 = 0;
      if (aiStack_120 != 0) {
        cVar6 = fn_829DB8D0();
        if (cVar6 != '\0') {
          *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x50) | 0x1000;
        }
        cVar6 = fn_829DB8B8();
        if (cVar6 != '\0') {
          *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x50) | 0x800;
        }
        lVar2 = fn_829DB408();
        iVar4 = aiStack_120;
      }
      if (-1 < (int)lVar2) {
        if (bVar5 == 0) {
          *(unsigned int *)(param_1 + 0x68) = 0;
        }
        else {
          if (iVar4 == 0) {
            uVar8 = 2;
          }
          else {
            if (iVar4 != 1) {
              if (iVar4 == 3) {
                *(unsigned int *)(param_1 + 0x68) = 4;
              }
              goto LAB_829d66b8;
            }
            uVar8 = 3;
          }
          *(unsigned int *)(param_1 + 0x68) = uVar8;
        }
      }
    }
  }
LAB_829d66b8:
  if (aiStack_110[0] != 0) {
    fn_829E1B30();
  }
  if ((((-1 < (int)lVar2) && (bVar5 != 0)) && (*(int *)(param_1 + 0x68) == 2)) &&
     (iVar4 = fn_829E2DE8(iVar3,uVar10,uVar1,param_5,iVar9), -1 < iVar4)) {
    uVar11 = 1;
  }
  fn_829D48F8((unsigned __int64)auStack_100[0] << 0x20,CONCAT44(uStack_f8,uStack_f4),uVar11,
                CONCAT44(stack_pair_d0.first,stack_pair_d0.second),CONCAT44(uStack_c8,uStack_c4),
                (unsigned __int64)lbl_83217B88 + 0x10,(unsigned __int64)lbl_83217B88 + 0x3c);
  *(unsigned int *)(param_1 + 100) = (unsigned int)bVar5;
  fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,iVar3);
LAB_829d64ec:
  fn_829D4800(&uStack_f0);
  return uVar11;
}

