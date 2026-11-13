extern int fn_82A6E1C0();
extern int fn_82A6E290();
extern int fn_82A6E360();
extern int fn_82C2C918();
extern int fn_82C2CA28();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;


unsigned __int64 fn_82A69FD8(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar10;
  unsigned int uVar9;
  double dVar11;
  double dVar12;
  
  if (*(int *)(param_1 + 0xb0) == 1) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        sVar4 = (short)iVar5 + 1;
        iVar5 = (int)sVar4;
        psVar3 = (short *)(iVar6 + *(int *)(param_1 + 0x248));
        iVar6 = iVar5 << 1;
        iVar8 = *psVar3 * 0x6f0 + *(int *)(param_1 + 0x140);
        uVar1 = *(unsigned short *)
                 (*(short *)(iVar8 + 0x72) * 2 + *(int *)(*(int *)(iVar8 + 0x1a8) + 8));
        *(unsigned short *)(iVar8 + 0x7c) = uVar1;
        *(unsigned short *)(iVar8 + 0x76) = uVar1;
      } while (sVar4 < *(short *)(param_1 + 0x244));
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0xb0) == 0) {
    if (0 < *(short *)(param_1 + 0x244)) {
      iVar5 = 0;
      iVar6 = 0;
      dVar11 = (double)lbl_82002C5C;
      dVar12 = (double)lbl_82005344;
      do {
        iVar8 = *(short *)(iVar6 + *(int *)(param_1 + 0x248)) * 0x6f0 + *(int *)(param_1 + 0x140);
        psVar3 = *(short **)(iVar8 + 0x1a8);
        iVar6 = *(short *)(iVar8 + 0x72) * 2;
        sVar4 = *(short *)(iVar6 + *(int *)(psVar3 + 4));
        *(short *)(iVar8 + 0x7c) = sVar4;
        *(unsigned short *)(iVar8 + 0x7a) = *(unsigned short *)(iVar6 + *(int *)(psVar3 + 4) + -2);
        *(unsigned short *)(iVar8 + 0x7e) = *(unsigned short *)(iVar6 + *(int *)(psVar3 + 4) + 2);
        if (*psVar3 < 2) {
          sVar10 = 0;
          uVar2 = **(unsigned int **)(param_1 + 0x154);
          *(unsigned int *)(param_1 + 0x134) = *(unsigned int *)(param_1 + 0x158);
          *(unsigned int *)(param_1 + 0x130) = uVar2;
          *(unsigned int *)(param_1 + 0x138) = **(unsigned int **)(param_1 + 0x160);
        }
        else {
          uVar9 = 0;
          sVar10 = 0;
          if (1 < (unsigned int)(*(int *)(param_1 + 0x100) / (int)sVar4)) {
            do {
              uVar9 = uVar9 + 1;
              sVar10 = (short)uVar9;
            } while (1 < (unsigned int)(*(int *)(param_1 + 0x100) / (int)sVar4) >> (uVar9 & 0x3f));
          }
          if (*(int *)(param_1 + 0xf4) <= (int)sVar10) {
            return 0xffffffff80040002;
          }
          if (0 < sVar10) {
            sVar7 = 0;
            do {
              sVar7 = sVar7 + 1;
            } while (sVar7 < sVar10);
          }
          *(unsigned int *)(param_1 + 0x130) = *(unsigned int *)(*(int *)(param_1 + 0x154) + sVar10 * 4)
          ;
          *(int *)(param_1 + 0x134) = sVar10 * 0x74 + *(int *)(param_1 + 0x158);
          *(unsigned int *)(param_1 + 0x138) = *(unsigned int *)(*(int *)(param_1 + 0x160) + sVar10 * 4)
          ;
        }
        *(int *)(param_1 + 0x10c) =
             (*(int *)(param_1 + 0x114) * (int)sVar4) / *(int *)(param_1 + 0x100);
        *(int *)(param_1 + 0x108) =
             (*(int *)(param_1 + 0x110) * (int)sVar4) / *(int *)(param_1 + 0x100);
        *(short *)(iVar8 + 0x76) = sVar4;
        *(int *)(iVar8 + 0x24) = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108);
        if (*(int *)(param_1 + 0x28) == 1) {
          iVar6 = (int)((double)((float)((double)(*(float *)(param_1 + 0x18c) *
                                                 (float)(__int64)(int)sVar4) * dVar12) /
                                (float)(__int64)*(int *)(param_1 + 0x50)) + dVar11);
          *(int *)(param_1 + 0x194) = iVar6;
          if (*(short *)(iVar8 + 0x76) < iVar6) {
            *(int *)(param_1 + 0x194) = (int)*(short *)(iVar8 + 0x76);
          }
          *(unsigned int *)(param_1 + 400) = *(unsigned int *)(sVar10 * 4 + *(int *)(param_1 + 0x19c));
        }
        fn_82C2C918(param_1,iVar8);
        if (iVar5 == 0) {
          fn_82C2CA28(param_1,*(unsigned short *)(iVar8 + 0x78));
        }
        fn_82A6E1C0(param_1,1,*(unsigned short *)(iVar8 + 0x7a),*(unsigned short *)(iVar8 + 0x7c),
                     iVar8 + 0x80,iVar8 + 0x82);
        fn_82A6E290(param_1,1,*(unsigned short *)(iVar8 + 0x7c),*(unsigned short *)(iVar8 + 0x7e),
                     *(unsigned int *)(iVar8 + 0x8c),iVar8 + 0x84,iVar8 + 0x86);
        iVar5 = (int)(short)((short)iVar5 + 1);
        iVar6 = iVar5 << 1;
      } while (iVar5 < *(short *)(param_1 + 0x244));
    }
    fn_82A6E360(param_1);
  }
  return 0;
}

