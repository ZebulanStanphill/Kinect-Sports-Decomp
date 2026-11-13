extern unsigned int *auStack_e4;
extern int fn_82644450();
extern int fn_82645110();
extern int fn_82645688();
extern int fn_8264D6C0();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1E108();
extern int VdSetSystemCommandBufferGpuIdentifierAddress();
extern int KiApcNormalRoutineNop();
extern int VdEnableRingBufferRPtrWriteBack();
extern int VdInitializeRingBuffer();
extern unsigned int lbl_821CC3F4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_c0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_826458F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  struct { unsigned int first; unsigned int second; } stack_pair_f0;

  unsigned int uStack_e8;
  unsigned int auStack_e4 [9];
  unsigned short uStack_c0;
  unsigned short uStack_be;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  
  if ((*(int *)(param_1 + 0x2a9c) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    fn_82645688();
    while (*(int *)(param_1 + 0x2af0) != *(int *)(param_1 + 0x2aec)) {
      fn_82A1E108(1);
    }
  }
  uVar5 = *(unsigned int *)(param_1 + 0x3b0c);
  if (uVar5 != 0) {
    fn_8264D6C0(((unsigned __int64)(uVar5 >> 0x14) + 0x200 & 0x1000) + ((unsigned __int64)uVar5 & 0x1fffffff) +
                 -0x40000000,
                 ((unsigned __int64)(*(unsigned int *)(param_1 + 0x3b10) >> 0x14) + 0x200 & 0x1000) +
                 ((unsigned __int64)*(unsigned int *)(param_1 + 0x3b10) & 0x1fffffff) + -0x40000000,0);
  }
  fn_8265C990(*(unsigned int *)(param_1 + 0x3ac8),0xffffffffb1800000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x3acc),0xffffffffb1800000);
  *(unsigned int *)(param_1 + 0x3ac8) = 0;
  *(unsigned int *)(param_1 + 0x3acc) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  VdSetSystemCommandBufferGpuIdentifierAddress(0);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar11 = (unsigned __int64)*(unsigned int *)(param_2 + 4);
    uVar12 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
    uVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc);
    iVar4 = *(int *)(param_2 + 0x10);
    uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x14);
    if (uVar11 == 0) {
      uVar11 = 0x8000;
    }
    if (uVar13 == 0) {
      uVar13 = 0x200000;
    }
    if (uVar9 == 0) {
      uVar9 = 0x20;
    }
    trapWord(6,uVar9,0);
    if (uVar12 == 0) {
      uVar12 = fn_8265C940(uVar11,0xffffffffb5800000);
      *(int *)(param_1 + 0x3ac8) = (int)uVar12;
    }
    if (iVar4 == 0) {
      iVar4 = fn_8265C940(uVar13,(-(unsigned __int64)(uVar13 < 0x80000) & 3) << 0x1c |
                                       0xffffffff87800000);
      *(int *)(param_1 + 0x3acc) = iVar4;
    }
    if (((uVar12 & 0xffffffff) == 0) || (iVar4 == 0)) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      uVar3 = MmGetPhysicalAddress(uVar12);
      VdInitializeRingBuffer(uVar3,0x1c - LZCOUNT((unsigned int)uVar11));
      uVar7 = 0x1f - LZCOUNT((unsigned int)uVar11 >> 9);
      if (0x13 < (uVar7 & 0xffffffff)) {
        uVar7 = 0x13;
      }
      uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2a90) + 0x3c;
      VdEnableRingBufferRPtrWriteBack((((uVar10 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff),
                      uVar7);
      iVar1 = ((unsigned int)uVar13 & 0xfffffffc) + iVar4;
      uVar5 = (unsigned int)(uVar13 / uVar9);
      *(unsigned int *)(iVar1 + -4) = 0xbadf00d;
      iVar2 = (uVar5 & 0xfffffffc) + iVar4;
      *(int *)(param_1 + 0x3b10) = iVar1 + -4;
      *(unsigned int *)(param_1 + 0x3b2c) = (unsigned int)uVar13 >> 2;
      *(int *)(param_1 + 0x3b04) = (int)uVar12;
      *(int *)(param_1 + 0x3b0c) = iVar4;
      *(int *)(param_1 + 0x3b20) = iVar4;
      *(int *)(param_1 + 0x3b24) = iVar4;
      *(unsigned int *)(param_1 + 0x3b14) = uVar5;
      *(int *)(param_1 + 0x3b08) = (int)(uVar11 >> 2) + -1;
      *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 0x3c) = 0;
      *(unsigned int *)(param_1 + 0x2acc) = 0;
      *(int *)(param_1 + 0x30) = iVar4 + -4;
      *(int *)(param_1 + 0x34) = iVar2;
      *(int *)(param_1 + 0x38) = iVar2 + -0xa0;
      *(unsigned int *)(param_1 + 0x3b18) = 0;
      if (*(int *)(param_1 + 0x2a9c) == 0) {
        *(unsigned int *)(param_1 + 0x2a9c) = 3;
      }
      **(int **)(param_1 + 0x2a90) = *(int *)(param_1 + 0x2a9c) + -2;
      *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 4) =
           *(unsigned int *)(param_1 + 0x3b1c) & 3 | *(unsigned int *)(param_1 + 0x30);
      VdSetSystemCommandBufferGpuIdentifierAddress((unsigned __int64)*(unsigned int *)(param_1 + 0x2a90) + 8);
      uStack_e8 = 0;
      lVar14 = 8;
      puVar8 = auStack_e4;
      stack_pair_f0.first = 0xc0114800;
      stack_pair_f0.second = 0x3ff;
      puVar6 = (unsigned int *)&lbl_821CC3F4;
      auStack_e4[0] = 0;
      do {
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar6;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uStack_b8 = 0;
      uStack_b4 = 0;
      *(unsigned short *)(param_1 + 0x2aac) = 1;
      *(unsigned short *)(param_1 + 0x2aae) = 0x800;
      uStack_be = 0x800;
      uStack_c0 = 1;
      uStack_bc = 7;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      KiApcNormalRoutineNop(&stack_pair_f0.first,0x13);
      fn_82644450(param_1,&stack_pair_f0.first,0x13);
      uVar5 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar5) {
        uVar5 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar5 + 4) = 0xd02;
      *(unsigned int *)(uVar5 + 8) = 0x10800;
      *(unsigned int *)(uVar5 + 0xc) = 0x30a02;
      *(unsigned int *)(uVar5 + 0x10) = 0xc0100000;
      *(unsigned int *)(uVar5 + 0x14) = 0x7f00000;
      *(unsigned int *)(uVar5 + 0x18) = 0xc0000000;
      *(unsigned int *)(uVar5 + 0x1c) = 0x100000;
      *(unsigned int *)(uVar5 + 0x20) = 0x1dd;
      *(unsigned int *)(uVar5 + 0x24) =
           ((*(unsigned int *)(param_1 + 0x2a94) >> 0x14) + 0x200 & 0x1000) +
           (*(unsigned int *)(param_1 + 0x2a94) & 0x1fffffff);
      *(unsigned int *)(uVar5 + 0x28) = 0x1dc;
      puVar6 = (unsigned int *)(uVar5 + 0x2c);
      *puVar6 = 0x20037;
      *(unsigned int **)(param_1 + 0x30) = puVar6;
      if (*(unsigned int **)(param_1 + 0x38) < puVar6) {
        puVar6 = (unsigned int *)fn_82645110(param_1);
      }
      puVar6[1] = 0x5c8;
      uVar3 = 0;
      puVar6[2] = 0x20000;
      puVar6[3] = 0xd04;
      puVar6[4] = 0;
      *(unsigned int **)(param_1 + 0x30) = puVar6 + 4;
    }
  }
  return uVar3;
}

