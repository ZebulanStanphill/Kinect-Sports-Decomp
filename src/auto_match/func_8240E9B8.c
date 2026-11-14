extern int fn_824106F8();
extern int fn_82536288();
extern int fn_825735B8();
extern int fn_82573868();
extern int fn_82575DF0();
extern int XMemSet();
extern unsigned int lbl_82195530;
extern unsigned int lbl_821962C0;
extern unsigned int ltcg_pool_0_0f;


void fn_8240E9B8(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int in_r0;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  *(unsigned int *)(param_1 + 0x2c) = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x28) + 0x8c0) + 0x128;
  if ((lVar5 != 0) && (iVar6 = fn_825735B8(lVar5,0xffffffff821b81f4), iVar6 != 0)) {
    *(unsigned int *)(*(int *)(iVar6 + 4) + 400) = 0;
  }
  if (*(unsigned int **)(param_1 + 0x18) != (unsigned int *)0x0) {
    (**(int (***)())**(unsigned int **)(param_1 + 0x18))();
  }
  fn_82536288(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  uVar4 = ltcg_pool_0_0f;
  piVar1 = *(int **)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x10) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x14) = uVar4;
  *(unsigned int *)(param_1 + 0x48) = uVar4;
  *(unsigned int *)(param_1 + 0x4c) = uVar4;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  uVar7 = lbl_82195530;
  *(unsigned int *)(param_1 + 0x60) = uVar4;
  *(unsigned int *)(param_1 + 100) = uVar7;
  iVar6 = *piVar1;
  if (*(int *)(iVar6 + 0xcb8) == 0) {
    uVar7 = *(unsigned int *)(iVar6 + 0x2b0);
  }
  else {
    uVar7 = *(unsigned int *)(iVar6 + 0x2ac);
  }
  *(unsigned int *)(param_1 + 0x68) = uVar7;
  iVar6 = *piVar1;
  if (*(int *)(iVar6 + 0xcb8) == 0) {
    uVar7 = *(unsigned int *)(iVar6 + 0x2b0);
  }
  else {
    uVar7 = *(unsigned int *)(iVar6 + 0x2ac);
  }
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x6c) = uVar7;
  *(unsigned int *)(param_1 + 0x70) = uVar4;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x40) = 2;
  *(unsigned int *)(param_1 + 0x8c) = uVar4;
  *(unsigned int *)(param_1 + 0x90) = uVar4;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x94) = uVar4;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 1;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  iVar6 = *(int *)(param_1 + 600);
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0xf0) = 0;
  puVar2 = (unsigned int *)(param_1 + 0xe0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x110) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x100U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x130) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x150) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x140U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x178) = 1;
  puVar2 = (unsigned int *)(param_1 + 0x160U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(unsigned int *)(param_1 + 0x174) = 0x18;
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x17c) = 0;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)(param_1 + 0x180U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 400) = uVar4;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x1b0) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x1a0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(unsigned int *)(param_1 + 0x280) = 0;
  *(unsigned int *)(param_1 + 0x1b4) = uVar4;
  *(unsigned int *)(param_1 + 0x1b8) = 0;
  *(unsigned int *)(param_1 + 0x1bc) = uVar4;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x1c0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(unsigned int *)(param_1 + 0x260) = 0;
  *(unsigned int *)(param_1 + 0x25c) = uVar4;
  puVar2 = (unsigned int *)(param_1 + 0x1e0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  if (iVar6 != 0) {
    fn_82573868(*(unsigned int *)(param_1 + 0x28),param_1 + 0x1f0);
  }
  XMemSet(param_1 + 0x1f0,0,0x68);
  *(unsigned int *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    fn_82575DF0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) + 0x93c));
    *(unsigned int *)(param_1 + 0x264) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x4c) != 0) {
    fn_824106F8(param_1,0);
  }
  return;
}

