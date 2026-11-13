typedef unsigned char bool;
#define true 1
extern int fn_8277E9F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827808F8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;

  uVar21 = 1;
  uVar22 = 1;
  stack_pair_a0.first = *(unsigned int *)**(int **)(param_1 + 0x1a0);
  stack_pair_a0.second = *(unsigned int *)(**(int **)(param_1 + 0x1b0) + 4);
  uStack_98 = ((unsigned int *)**(int **)(param_1 + 0x1a0))[1];
  if (((stack_pair_a0.first != stack_pair_a0.second) && (stack_pair_a0.second != uStack_98)) && (uStack_98 != stack_pair_a0.first)) {
    fn_8277E9F8(param_1 + 0x184,&stack_pair_a0.first);
  }
  iVar8 = *(int *)(param_1 + 0x194);
  uVar20 = 2;
  uVar19 = 2;
  uVar18 = *(int *)(param_1 + 0x1a4) - 1;
  dVar25 = (double)lbl_821AAD20;
  do {
    while (iVar8 - 1U <= uVar21) {
      if (uVar18 <= uVar22) {
        return;
      }
      uVar17 = uVar22 + 1;
      uVar20 = uVar20 + 1;
      stack_pair_a0.second = *(unsigned int *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                           (uVar22 & 0xff) * 4);
      uStack_98 = *(unsigned int *)(*(int *)((uVar17 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                           (uVar17 * 4 & 0x3fc));
      stack_pair_a0.first = *(unsigned int *)(*(int *)((uVar21 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                           (uVar21 & 0xff) * 4);
      uVar22 = uVar17;
LAB_827809d4:
      if (((stack_pair_a0.first != stack_pair_a0.second) && (stack_pair_a0.second != uStack_98)) && (uStack_98 != stack_pair_a0.first)) {
        fn_8277E9F8(param_1 + 0x184,&stack_pair_a0.first);
      }
    }
    iVar9 = *(int *)(param_1 + 0x1a0);
    iVar10 = *(int *)(param_1 + 0x1b0);
    iVar12 = *(int *)((uVar21 >> 6 & 0x3fffffc) + iVar9);
    if (uVar18 <= uVar22) {
      uVar17 = uVar21 + 1;
      uVar19 = uVar19 + 1;
      stack_pair_a0.first = *(unsigned int *)(iVar12 + (uVar21 & 0xff) * 4);
      stack_pair_a0.second = *(unsigned int *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + iVar10) + (uVar22 & 0xff) * 4);
      uStack_98 = *(unsigned int *)(*(int *)((uVar17 >> 6 & 0x3fffffc) + iVar9) + (uVar17 * 4 & 0x3fc));
      uVar21 = uVar17;
      goto LAB_827809d4;
    }
    iVar11 = *(int *)(param_1 + 0x110);
    stack_pair_a0.first = *(unsigned int *)(iVar12 + (uVar21 & 0xff) * 4);
    stack_pair_a0.second = *(unsigned int *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + iVar10) + (uVar22 & 0xff) * 4);
    uStack_98 = *(unsigned int *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + iVar9) + (uVar19 & 0xff) * 4);
    iVar12 = (stack_pair_a0.first & 0x3ff) * 8;
    uStack_88 = *(unsigned int *)(*(int *)((uVar20 >> 6 & 0x3fffffc) + iVar10) + (uVar20 & 0xff) * 4);
    pfVar15 = (float *)(*(int *)((stack_pair_a0.second >> 8 & 0xfffffc) + iVar11) + (stack_pair_a0.second & 0x3ff) * 8);
    iVar9 = *(int *)((stack_pair_a0.first >> 8 & 0xfffffc) + iVar11);
    pfVar16 = (float *)(*(int *)((uStack_98 >> 8 & 0xfffffc) + iVar11) + (uStack_98 & 0x3ff) * 8);
    fVar1 = *pfVar15;
    pfVar14 = (float *)(*(int *)((uStack_88 >> 8 & 0xfffffc) + iVar11) + (uStack_88 & 0x3ff) * 8);
    fVar7 = *(float *)(iVar9 + iVar12);
    fVar2 = pfVar16[1];
    fVar3 = *(float *)(iVar9 + iVar12 + 4);
    fVar4 = *pfVar16;
    fVar13 = fVar4 - fVar1;
    bVar23 = (double)((pfVar15[1] - fVar3) * fVar13 - (fVar2 - pfVar15[1]) * (fVar1 - fVar7)) <=
             dVar25;
    fVar5 = *pfVar14;
    fVar6 = pfVar14[1];
    bVar24 = (double)((pfVar15[1] - fVar3) * (fVar5 - fVar1) -
                     (fVar6 - pfVar15[1]) * (fVar1 - fVar7)) <= dVar25;
    if ((bVar23) && (bVar24)) {
      bVar23 = (double)((pfVar14[1] - pfVar15[1]) * (fVar4 - fVar5) -
                       (fVar2 - pfVar14[1]) * (fVar5 - fVar1)) <= dVar25;
      bVar24 = dVar25 <= (double)((pfVar16[1] - fVar3) * (fVar5 - fVar4) -
                                 (fVar6 - pfVar16[1]) * (fVar4 - fVar7));
    }
    stack_pair_90.first = stack_pair_a0.first;
    stack_pair_90.second = stack_pair_a0.second;
    if ((bVar23) && (bVar24)) {
      if ((fVar2 - pfVar15[1]) * (fVar2 - pfVar15[1]) + fVar13 * fVar13 <
          (fVar6 - fVar3) * (fVar6 - fVar3) + (fVar5 - fVar7) * (fVar5 - fVar7)) goto LAB_82780c14;
LAB_82780bdc:
      if (((stack_pair_a0.first != stack_pair_a0.second) && (stack_pair_a0.second != uStack_88)) && (uStack_88 != stack_pair_a0.first)) {
        fn_8277E9F8(param_1 + 0x184,&stack_pair_90.first);
      }
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + 1;
    }
    else {
      if (!bVar23) goto LAB_82780bdc;
LAB_82780c14:
      if (((stack_pair_a0.first != stack_pair_a0.second) && (stack_pair_a0.second != uStack_98)) && (uStack_98 != stack_pair_a0.first)) {
        fn_8277E9F8(param_1 + 0x184,&stack_pair_a0.first);
      }
      uVar21 = uVar21 + 1;
      uVar19 = uVar19 + 1;
    }
  } while( true );
}
