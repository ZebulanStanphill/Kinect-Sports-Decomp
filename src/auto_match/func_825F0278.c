extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825EA908();
extern int fn_825F04B8();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();


void fn_825F0278(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  char cVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [64];
  unsigned char auStack_80 [128];
  
  piVar2 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar9 = *piVar2;
  uVar4 = fn_825C7348(1);
  fn_82623298(piVar2,0,uVar4);
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar9,((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar9 + 0x2f14) = 1;
  *(unsigned int *)(iVar9 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar9 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar9 + 0x2934) & 0xfffffffd;
  uVar8 = *(unsigned __int64 *)(iVar9 + 0x10);
  *(unsigned __int64 *)(iVar9 + 0x10) = uVar8 | 0x800;
  *(unsigned __int64 *)(iVar9 + 0x10) = uVar8 | 0x20800;
  *(unsigned int *)(iVar9 + 0x2934) = *(unsigned int *)(iVar9 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar9 + 0x10) = *(unsigned __int64 *)(iVar9 + 0x10) | 0x800;
  *(unsigned int *)(iVar9 + 0x2934) = *(unsigned int *)(iVar9 + 0x2934) & 0xffffff8f | 0x60;
  uVar8 = *(unsigned __int64 *)(iVar9 + 0x10);
  *(unsigned __int64 *)(iVar9 + 0x10) = uVar8 | 0x800;
  *(unsigned __int64 *)(iVar9 + 0x10) = uVar8 | 0x20800;
  fn_825402B0(auStack_80,*(unsigned int *)(param_1 + 0x18),0x20,
               *(unsigned int *)(*(int *)(param_1 + 4) + 0xae4),*(unsigned int *)(param_1 + 0x10),1,0);
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(unsigned int *)(param_1 + 0x18));
  lVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
           (unsigned __int64)*(unsigned int *)(param_1 + 4);
  fn_82F68CC0(auStack_c0,lVar11 + 0x50,0x40);
  iVar9 = (int)lVar11;
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  puVar6 = (unsigned int *)(in_r0 + iVar9 + 0x90 & 0xfffffff0);
  uVar13 = puVar6[1];
  uVar14 = puVar6[2];
  uVar15 = puVar6[3];
  puVar3 = (unsigned int *)(iVar9 + 0xa0U & 0xfffffff0);
  uVar24 = *puVar3;
  uVar25 = puVar3[1];
  uVar26 = puVar3[2];
  uVar27 = puVar3[3];
  puVar3 = (unsigned int *)(iVar9 + 0xb0U & 0xfffffff0);
  uVar20 = *puVar3;
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar3 = (unsigned int *)(iVar9 + 0xc0U & 0xfffffff0);
  uVar16 = *puVar3;
  uVar17 = puVar3[1];
  uVar18 = puVar3[2];
  uVar19 = puVar3[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar6;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  puVar6 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar24;
  puVar6[1] = uVar25;
  puVar6[2] = uVar26;
  puVar6[3] = uVar27;
  puVar6 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar20;
  puVar6[1] = uVar21;
  puVar6[2] = uVar22;
  puVar6[3] = uVar23;
  puVar6 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  puVar6[2] = uVar18;
  puVar6[3] = uVar19;
  fn_82540870(uVar1,auStack_c0);
  fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_100);
  fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x18),0x20);
  iVar9 = *(int *)(param_1 + 0x10);
  iVar12 = 0;
  iVar7 = *(int *)(param_1 + 8);
  if (0 < *(int *)((iVar9 + 1) * 4 + iVar7)) {
    iVar10 = 0;
    do {
      puVar6 = (unsigned int *)(*(int *)((iVar9 + 3) * 4 + iVar7) + iVar10);
      cVar5 = fn_825F04B8(param_1);
      if (cVar5 != '\0') {
        fn_825EA908(param_1,*puVar6,auStack_80);
      }
      iVar9 = *(int *)(param_1 + 0x10);
      iVar12 = iVar12 + 1;
      iVar7 = *(int *)(param_1 + 8);
      iVar10 = iVar10 + 0x18;
    } while (iVar12 < *(int *)((iVar9 + 1) * 4 + iVar7));
  }
  fn_82623338(piVar2);
  return;
}

