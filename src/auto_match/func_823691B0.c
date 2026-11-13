extern int fn_822AC918();
extern unsigned int lbl_82196750;


unsigned __int64 fn_823691B0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar5 = 0;
  if (param_3 != 0) {
    puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (param_4 != 0) {
    puVar3 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if ((iVar1 < 2) && (*(int *)(param_2 + 0x28) < 7)) {
    iVar6 = (iVar1 * 7 + *(int *)(param_2 + 0x28)) * 0x30 + param_1;
    if (*(int *)(iVar6 + 0x10b0) != -1) {
      piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar1 * 4);
      uVar5 = fn_822AC918(*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x48),
                            *(int *)(iVar6 + 0x10b0),param_3,param_4);
      if ((*(char *)(iVar6 + 0x10b4) != '\0') && (uVar5 = 1, param_3 != 0)) {
        puVar3 = (unsigned int *)(in_r0 + iVar6 + 0x1090 & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
      }
      if ((*(char *)(iVar6 + 0x10b5) != '\0') && (param_4 != 0)) {
        puVar3 = (unsigned int *)(iVar6 + 0x10a0U & 0xfffffff0);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
      }
    }
  }
  return uVar5;
}

