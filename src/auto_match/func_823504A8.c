extern int fn_822AE3C0();
extern int fn_82350888();
extern int fn_82355ED8();
extern int fn_824904F0();
extern int fn_824C6280();
extern int fn_824C80A0();
extern int fn_824C83B8();
extern int fn_824C84E8();
extern int fn_82507EA8();
extern unsigned int lbl_8218E1AC;
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_823504A8(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  dVar7 = (double)ltcg_pool_0_0f;
  if ((double)*(float *)(*(int *)(param_1 + 0x14) + 0x838) <= dVar7) {
    dVar7 = (double)(*(float *)(*(int *)(param_1 + 0x14) + 0x820) * lbl_8327F894);
  }
  if ((*(int *)(param_1 + 8) != 10) && (*(int *)(param_1 + 0x1c) != 0)) {
    fn_822AE3C0(dVar7,*(int *)(param_1 + 0x1c),param_2,0);
  }
  if (*(int *)(param_1 + 8) == 10) {
    fn_824C83B8(param_1 + 0x40);
    iVar4 = (int)in_r0;
    dVar6 = (double)lbl_8218E1AC;
    piVar1 = *(int **)(param_1 + 0x44);
    for (piVar5 = *(int **)(param_1 + 0x40); piVar5 != piVar1; piVar5 = piVar5 + 2) {
      if (*(int *)(*piVar5 + 0x10) == 0) {
        fn_824C84E8(dVar6,param_1 + 0x40,piVar5);
        fn_824C6280(dVar7,*piVar5);
        dVar6 = (double)lbl_8218E1AC;
      }
      iVar4 = (int)in_r0;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x80);
    *(unsigned int *)(param_1 + 0x80) = 0;
    puVar3 = (unsigned int *)(iVar4 + param_1 + 0x60 & 0xfffffff0);
    uVar8 = *puVar3;
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    *(unsigned int *)(param_1 + 0x84) = uVar2;
    puVar3 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
    *puVar3 = uVar8;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    puVar3 = (unsigned int *)(iVar4 + param_1 + 0x60 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  else {
    fn_824C80A0(dVar7,param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82507EA8(dVar7);
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((*(int *)(param_1 + 8) == 9 || (*(int *)(param_1 + 8) == 10)))) {
    iVar4 = fn_824904F0(dVar7);
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 8) == 10) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x48);
        *(unsigned int *)(param_1 + 0xc) = 10;
        if (iVar4 == 0) {
          *(unsigned int *)(param_1 + 8) = 9;
        }
        else {
          *(unsigned int *)(param_1 + 8) = 0xd;
          fn_82355ED8(param_1);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 8) == 9) {
        fn_82350888(param_1,10);
      }
      if (*(int **)(param_1 + 0x18) != (int *)0x0) {
        (**(int (***)())(**(int **)(param_1 + 0x18) + 0x38))(dVar7);
      }
    }
  }
  return;
}

