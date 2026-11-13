typedef unsigned char bool;
#define true 1
#define false 0
#define TBLr 0
extern unsigned int *auStack_180;
extern unsigned int *auStack_1dc;
extern unsigned int *auStack_e0;
extern int fn_82637398();
extern int fn_82643A48();
extern int fn_826441E0();
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82646E80();
extern int fn_82646F48();
extern int fn_82647258();
extern int fn_82647C20();
extern int fn_82647DE8();
extern int fn_82647F88();
extern int fn_826517A0();
extern int fn_82652BA8();
extern int fn_82655F40();
extern int fn_82657E40();
extern int fn_82657F88();
extern int memcpy();
extern int memset();
extern int VdSwap();
extern int VdGetSystemCommandBuffer();
extern int VdSetDisplayMode();
extern int iRam83282400;
extern unsigned int iStack_164;
extern unsigned int iStack_178;
extern unsigned int iStack_1e8;
extern unsigned int iStack_1ec;
extern unsigned int iStack_1f0;
extern unsigned int iStack_f0;
extern unsigned int lbl_832823F8;
extern unsigned int uStack_17c;
extern unsigned int uStack_190;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1c4;
extern unsigned int uStack_1c8;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_8a;
extern unsigned int uStack_96;
extern unsigned int uStack_98;


void fn_82648160(int param_1,__int64 param_2,unsigned char *param_3)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char *pbVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned char *pbVar15;
  int iVar16;
  unsigned char *pbVar17;
  unsigned char bVar18;
  int in_r13;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  struct { int first; int second; } stack_pair_1f0;

  int iStack_1e8;
  unsigned int uStack_1e4;
  unsigned int uStack_1e0;
  unsigned int auStack_1dc [3];
  struct { unsigned int first; unsigned int second; } stack_pair_1d0;

  unsigned int uStack_1c8;
  unsigned int uStack_1c4;
  int aiStack_1b0 [3];
  unsigned int uStack_1a4;
  unsigned int uStack_1a0;
  unsigned int uStack_19c;
  unsigned __int64 uStack_198;
  unsigned int uStack_190;
  unsigned char auStack_180 [4];
  unsigned int uStack_17c;
  int iStack_178;
  int iStack_164;
  unsigned char abStack_160 [56];
  unsigned char abStack_128 [56];
  int iStack_f0;
  unsigned char auStack_e0 [72];
  unsigned short uStack_98;
  unsigned short uStack_96;
  unsigned short uStack_8a;

  lVar7 = KeGetCurrentProcessType();
  *(int *)(param_1 + 0x4188) = *(int *)(param_1 + 0x4188) + 1;
  iVar4 = (int)lVar7 + -3 + (unsigned int)(lVar7 + -2 == 0);
  iVar12 = (int)(lVar7 + -2);
  memcpy(&stack_pair_1d0.first,param_2 + 0x1c,0x18);
  uVar22 = (unsigned __int64)stack_pair_1d0.second;
  if ((stack_pair_1d0.second & 0x3f) == 0x32) {
    uVar22 = uVar22 & 0xffffffffffffffc0 | 6;
LAB_826481d4:
    stack_pair_1d0.second = (unsigned int)uVar22;
  }
  else if ((stack_pair_1d0.second & 0x3f) == 7) {
    uVar22 = uVar22 & 0xffffffffffffffc0 | 0x36;
    goto LAB_826481d4;
  }
  uVar20 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x35fc) >> 0x11);
  stack_pair_1d0.first = *(unsigned int *)(param_1 + 0x35fc) >> 7 & 0x3fc | stack_pair_1d0.first & 0xfffffc03;
  uVar20 = (unsigned __int64)uStack_1c4 & 0xffffe000 | uVar20 & 0x1ffe | uVar20 & 1;
  uStack_1c4 = (unsigned int)uVar20;
  if ((*(unsigned char *)(param_1 + 0x2ac0) & 0x40) != 0) {
    fn_82647258(param_1);
    uVar20 = (unsigned __int64)uStack_1c4;
    uVar22 = (unsigned __int64)stack_pair_1d0.second;
  }
  memcpy(param_1 + 0x3ad0,param_2,0x34);
  iVar2 = *(int *)(param_1 + 0x3600);
  iVar16 = ((unsigned int)(uVar20 >> 0x1e) & 2) + 1;
  iVar13 = (uStack_1c8 & 0x1fff) + iVar16;
  uVar20 = uVar22 & 0xfffff000;
  uVar11 = (unsigned int)uVar22 & 0x3f;
  iVar16 = (uStack_1c8 >> 0xd & 0x1fff) + iVar16;
  uVar14 = (unsigned int)uVar20;
  bVar6 = false;
  stack_pair_1f0.first = iVar2;
  stack_pair_1f0.second = iVar16;
  iStack_1e8 = iVar13;
  uStack_1e4 = uVar14;
  uStack_1e0 = uVar11;
  if (*(int *)(param_1 + 0x5558) != 0) {
    if (*(unsigned int *)(param_1 + 0x5554) - *(int *)(param_1 + 0x5550) < 6) {
      *(unsigned int *)(((*(unsigned int *)(param_1 + 0x5554) & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90)) =
           0;
      *(unsigned int *)
       (((*(int *)(param_1 + 0x5554) + 1U & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90)) = 0;
      uVar8 = *(unsigned int *)(param_1 + 0x30);
      uVar23 = ((*(unsigned int *)(param_1 + 0x5554) & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90);
      if (*(unsigned int *)(param_1 + 0x38) < uVar8) {
        uVar8 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar8 + 4) = 0xc0025800;
      *(unsigned int *)(uVar8 + 8) = 0x80000003;
      bVar6 = true;
      *(unsigned int *)(uVar8 + 0xc) = ((uVar23 >> 0x14) + 0x200 & 0x1000) + (uVar23 & 0x1fffffff);
      *(unsigned int *)(uVar8 + 0x10) = 0xdeadbeef;
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar8 + 0x10);
    }
  }
  if (param_3 == (unsigned char *)0x0) {
code_r0x82648384:
    bVar5 = false;
  }
  else {
    pbVar15 = (unsigned char *)(param_1 + 0x361c);
    pbVar10 = param_3;
    do {
      bVar18 = *pbVar10;
      bVar1 = *pbVar15;
      if ((unsigned __int64)bVar18 - (unsigned __int64)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar10 != param_3 + 0x1c);
    bVar5 = true;
    if ((int)((unsigned __int64)bVar18 - (unsigned __int64)bVar1) == 0) goto code_r0x82648384;
  }
  if (iVar12 != iVar4) {
    if (iRam83282400 != 0) {
      uVar8 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar8) {
        uVar8 = fn_82645110(param_1);
      }
      *(unsigned int *)(param_1 + 0x30) = uVar8;
    }
    if (bVar5) {
      *(unsigned int *)(param_1 + 0x5e70) = *(unsigned int *)(param_1 + 0x5e70) | 0x40000000;
    }
    fn_82657E40(param_1,param_2);
  }
  VdGetSystemCommandBuffer(auStack_180,auStack_1dc);
  if (*(int *)(param_1 + 0x54f4) == 0) {
    lVar7 = fn_82643A48(param_1,0x40);
    VdSwap(lVar7 + 4,&stack_pair_1d0.first,(unsigned __int64)*(unsigned int *)(param_1 + 0x2a90) + 8,auStack_180,
                    auStack_1dc[0],&uStack_1e4,&uStack_1e0,&stack_pair_1f0.first);
    *(int *)(param_1 + 0x30) = (int)lVar7 + 0x100;
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 8) = auStack_1dc[0];
    uVar8 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar8) {
      uVar8 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar8 + 4) = 0xc0001000;
    *(unsigned int *)(uVar8 + 8) = 0;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar8 + 8);
  }
  *(unsigned int *)(param_1 + 0x5c10) = uStack_17c;
  if (bVar6) {
    uVar8 = *(unsigned int *)(param_1 + 0x30);
    uVar23 = ((*(int *)(param_1 + 0x5554) + 1U & 7) + 0x10) * 4 + *(int *)(param_1 + 0x2a90);
    if (*(unsigned int *)(param_1 + 0x38) < uVar8) {
      uVar8 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar8 + 4) = 0xc0025800;
    *(unsigned int *)(uVar8 + 8) = 0x80000003;
    *(unsigned int *)(uVar8 + 0xc) = ((uVar23 >> 0x14) + 0x200 & 0x1000) + (uVar23 & 0x1fffffff);
    *(unsigned int *)(uVar8 + 0x10) = 0xdeadbeef;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar8 + 0x10);
    *(int *)(param_1 + 0x5554) = *(int *)(param_1 + 0x5554) + 2;
  }
  if (iStack_178 != 0) {
    *(int *)(param_1 + 0x5e84) = iStack_178;
  }
  uVar8 = *(unsigned int *)(param_1 + 0x421c);
  *(unsigned int *)(param_1 + 0x421c) = 0;
  if ((uVar8 & 8) != 0) {
    if (iVar12 != iVar4) {
      uVar9 = 0;
      uVar23 = *(unsigned int *)(param_1 + 0x35fc) & 0x3f;
      if ((uVar23 == 7) || (uVar23 == 0x36)) {
        uVar9 = 0x8000000;
      }
      uVar9 = (*(unsigned int *)(param_1 + 0x3600) & 3) << 0x1c | 0x40000000 | uVar9;
      if ((*(int *)(param_1 + 0x35bc) == 0x2d0) &&
         ((*(int *)(param_1 + 0x35c0) == 0x1e0 || (*(int *)(param_1 + 0x35c0) == 0x240)))) {
        uVar9 = uVar9 | 2;
      }
      VdSetDisplayMode(uVar9);
    }
    VdGetCurrentDisplayInformation(auStack_e0);
    *(unsigned int *)(param_1 + 0x5500) = (unsigned int)uStack_98;
    *(unsigned int *)(param_1 + 0x5504) = (unsigned int)uStack_96;
    *(unsigned int *)(param_1 + 0x5508) = (unsigned int)uStack_8a;
    fn_82645110(param_1);
  }
  if (bVar5) {
    memcpy(param_1 + 0x361c,param_3,0x1c);
    fn_82655F40(param_1,param_3);
  }
  if ((iStack_178 == 0) || (stack_pair_1f0.first != iVar2)) {
    uVar21 = *(unsigned int *)(param_1 + 0x35fc);
    pbVar10 = (unsigned char *)(param_1 + 0x3670);
    iVar19 = param_1 + 0x3b70;
    if ((*(unsigned char *)(param_1 + 0x2abe) & 0x10) != 0) {
      stack_pair_1f0.first = iVar2;
      stack_pair_1f0.second = iVar16;
      iStack_1e8 = iVar13;
      uStack_1e4 = uVar14;
      uStack_1e0 = uVar11;
                    /* WARNING: Subroutine does not return */
      memset(param_1 + 0x3638,0,0x38);
    }
    if ((*(unsigned char *)(param_1 + 0x2abf) & 0x40) != 0) {
      uVar8 = uVar8 | 3;
    }
    bVar18 = *(unsigned char *)(param_1 + 0x2abf) & 0xbf;
    stack_pair_1f0.first = iVar2;
    stack_pair_1f0.second = iVar16;
    iStack_1e8 = iVar13;
    uStack_1e4 = uVar14;
    uStack_1e0 = uVar11;
    goto LAB_8264871c;
  }
  pbVar10 = (unsigned char *)(param_1 + 0x3638);
  iVar19 = 0;
  if (uStack_1e0 == 7) {
    uVar21 = 0x28280136;
  }
  else {
    uVar21 = 0x28280106;
  }
  if (iStack_164 == 0) {
LAB_8264867c:
    if (((*(unsigned char *)(param_1 + 0x2abe) & 0x10) != 0) && (iStack_f0 == 0)) {
      pbVar10 = (unsigned char *)(param_1 + 0x3670);
      goto code_r0x82648698;
    }
  }
  else {
    pbVar17 = abStack_160;
    pbVar15 = pbVar10;
    do {
      bVar18 = *pbVar17;
      bVar1 = *pbVar15;
      if ((unsigned __int64)bVar18 - (unsigned __int64)bVar1 != 0) break;
      pbVar17 = pbVar17 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar17 != abStack_128);
    if ((int)((unsigned __int64)bVar18 - (unsigned __int64)bVar1) == 0) goto LAB_8264867c;
    memcpy(pbVar10,abStack_160,0x38);
    *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) | 0x10;
code_r0x82648698:
    uVar8 = uVar8 | 4;
  }
  if ((*(unsigned char *)(param_1 + 0x2abf) & 0x40) == 0) {
    uVar8 = uVar8 | 3;
  }
  uVar20 = (unsigned __int64)uStack_1e4;
  bVar18 = *(unsigned char *)(param_1 + 0x2abf) | 0x40;
LAB_8264871c:
  *(unsigned char *)(param_1 + 0x2abf) = bVar18;
  if ((lbl_832823F8 != 0) || ((*(unsigned char *)(param_1 + 0x2abd) & 2) != 0)) {
    uVar8 = 0;
  }
  lVar7 = ((uVar20 >> 0x14) + 0x200 & 0x1000) + (uVar20 & 0x1fffffff);
  if (uVar8 == 0) {
    if ((*(unsigned int *)(param_1 + 0x5e88) & 4) == 0) {
      uVar11 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar11) {
        uVar11 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar11 + 4) = 0x1844;
      *(unsigned int *)(uVar11 + 8) = (unsigned int)lVar7 & 0x1fffffff;
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar11 + 8);
      fn_82647DE8(param_1,uVar21);
    }
    else {
      fn_82647C20(param_1,lVar7);
    }
  }
  else {
    fn_82647F88(param_1,uVar8,lVar7,uVar21,iStack_1e8,stack_pair_1f0.second,pbVar10,iVar19);
  }
  fn_826517A0(param_1,uVar8,stack_pair_1f0.first,lVar7,uVar21,iStack_1e8,stack_pair_1f0.second,pbVar10);
  if (((uVar8 & 8) != 0) && (iVar12 != iVar4)) {
    uVar11 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar11) {
      uVar11 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar11 + 4) = 0xc0022100;
    *(unsigned int *)(uVar11 + 8) = 0x1e4e;
    *(unsigned int *)(uVar11 + 0xc) = 0xfffffffe;
    *(unsigned int *)(uVar11 + 0x10) = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar11 + 0x10);
    iVar12 = VdPersistDisplay(&uStack_198,aiStack_1b0);
    if (iVar12 != 0) {
      MmFreePhysicalMemory(1,aiStack_1b0[0]);
    }
  }
  uVar21 = *(unsigned int *)(param_1 + 0x2a9c);
  *(unsigned int *)(param_1 + 0x2ab0) = uVar21;
  fn_82645110(param_1);
  fn_82657F88(param_1,0,0);
  fn_826441E0(param_1,*(unsigned int *)(param_1 + 0x3b14) >> 2);
  if (*(int *)(param_1 + 0x3b30) != 0) {
    fn_826452A8(param_1,*(int *)(param_1 + 0x3b30),3,0);
  }
  if ((*(unsigned int *)(param_1 + 0x5e88) & 4) == 0) {
    *(unsigned int *)(param_1 + 0x3b30) = uVar21;
  }
  else {
    aiStack_1b0[1] = 3;
    uStack_1a4 = *(unsigned int *)(*(int *)(in_r13 + 0x100) + 0x58);
    aiStack_1b0[2] = **(unsigned int **)(param_1 + 0x2a90);
    uVar3 = TBLr;
    uStack_19c = (unsigned int)uVar3;
    aiStack_1b0[0] = param_1;
    uStack_1a0 = uStack_1a4;
    do {
      iVar12 = fn_82646F48(aiStack_1b0);
      if (iVar12 == 0) break;
    } while (0xe < (unsigned int)(*(int *)(param_1 + 0x4188) - *(int *)(param_1 + 0x4190)));
    fn_82646E80(aiStack_1b0);
  }
  *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) & 0xef;
  fn_82652BA8(param_1);
  if (*(int (***)())(param_1 + 0x359c) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x359c))();
  }
  fn_82637398(param_1,0);
  return;
}
