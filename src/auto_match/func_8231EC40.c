extern unsigned int *auStack_30;
extern int fn_822C8C08();
extern int fn_8231F730();
extern int fn_8231F800();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


/* WARNING: Removing unreachable block (ram,0x8231ed8c) */
/* WARNING: Removing unreachable block (ram,0x8231ed94) */

void fn_8231EC40(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  __int64 alStack_40 [1];
  unsigned char auStack_30 [48];
  
  fVar4 = ltcg_pool_0_0f;
  iVar5 = (int)in_r0;
  puVar2 = (unsigned int *)(*(int *)(param_1 + 0x10) + 0xd30U & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  *(float *)(param_1 + 0x48) = ltcg_pool_0_0f;
  *(unsigned char *)(param_1 + 0x30) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x60U & 0xfffffff0);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = lbl_83265A28 & 0x7fffff;
  *(unsigned int *)(param_1 + 0x44) = 0;
  uVar9 = 0;
  uVar1 = (unsigned int)(((float)(uVar1 | 0x3f800000) - lbl_821CA460) * fVar4 + lbl_821CA460);
  alStack_40[0] = (__int64)(int)uVar1;
  lVar7 = (unsigned __int64)uVar1 + 1;
  *(int *)(param_1 + 0x4c) = (int)lVar7;
  if (lVar7 != 0) {
    do {
      iVar6 = fn_8231F730(param_1,*(unsigned int *)(param_1 + 0x44));
      iVar5 = (int)in_r0;
      if (iVar6 != 0) {
        *(int *)(param_1 + 0x44) = iVar6;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(*(int *)(param_1 + 0x10) + 0x470) = *(int *)(param_1 + 0x44);
  }
  *(unsigned char *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar6 != 0) {
    puVar2 = (unsigned int *)(iVar6 + 0x140U & 0xfffffff0);
    *puVar2 = in_register_000104b0;
    puVar2[1] = in_register_000104b4;
    puVar2[2] = in_register_000104b8;
    puVar2[3] = in_vr75;
    fn_8231F800(param_1,alStack_40,auStack_30);
    *(unsigned int *)(iVar6 + 0x160) = 1;
    puVar2 = (unsigned int *)((int)alStack_40 + iVar5 & 0xfffffff0);
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar3 = (unsigned int *)(iVar6 + 0x130U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    iVar5 = *(int *)(iVar6 + 0xf0);
    iVar6 = *(int *)(iVar5 + 0x90);
    if (iVar6 != *(int *)(iVar5 + 0x94)) {
      for (iVar8 = iVar6; iVar8 != *(int *)(iVar5 + 0x94); iVar8 = iVar8 + 0x20) {
      }
      *(int *)(iVar5 + 0x94) = iVar6;
    }
    *(unsigned int *)(iVar5 + 0x88) = 0;
    *(unsigned int *)(iVar5 + 0x80) = 0;
    *(unsigned int *)(iVar5 + 0x84) = 0xffffffff;
  }
  fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821ae914);
  return;
}

