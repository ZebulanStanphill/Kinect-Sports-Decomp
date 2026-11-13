#define TBLr 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82DFC048();
extern int fn_82DFCA70();
extern int fn_82DFDF28();
extern int fn_82DFE328();
extern int fn_82DFEBB0();
extern unsigned int iStack_98;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a3;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82DFE480(int param_1,int param_2)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *in_r8;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned char auStack_b0 [13];
  unsigned char uStack_a3;
  unsigned char auStack_a0 [8];
  int iStack_98;
  int aiStack_80 [24];
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar6 + 4);
  if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar2 = "TtUpdateComponents";
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
  }
  iVar10 = 0;
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[2] = 0x80000000;
  aiStack_80[3] = 0;
  aiStack_80[4] = 0;
  aiStack_80[5] = 0x80000000;
  cVar1 = *(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  piVar7 = (int *)fn_82CE5410();
  dVar11 = (double)*(float *)(param_2 + 8);
  iStack_98 = *piVar7;
  *piVar7 = (cVar1 * 4 + 0x7fU & 0xffffff80) + iStack_98;
  fn_82DFCA70(dVar11,param_1);
  uStack_a3 = *(unsigned char *)(param_1 + 0xb0);
  (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))
            (dVar11,*(int **)(param_1 + 0x20),uStack_a3,param_1,*(unsigned int *)(param_1 + 0x9c),
             auStack_b0);
  *(unsigned char *)(param_1 + 0xb0) = uStack_a3;
  fn_82DFE328(dVar11,param_1);
  fn_82DFC048(dVar11,param_1);
  uStack_bc = *(unsigned int *)(param_1 + 0xb8);
  uStack_c0 = *(unsigned int *)(param_1 + 0xb4);
  iVar6 = **(int **)(param_1 + 0x28);
  (**(int (***)())(iVar6 + 0xc))
            (dVar11,*(int **)(param_1 + 0x28),iVar6,param_1,auStack_b0,auStack_a0,&uStack_c0);
  *(unsigned int *)(param_1 + 0xb8) = uStack_bc;
  *(unsigned int *)(param_1 + 0xb4) = uStack_c0;
  fn_82DFDF28(dVar11,param_1);
  (**(int (***)())(**(int **)(param_1 + 0x34) + 0xc))(dVar11);
  (**(int (***)())(**(int **)(param_1 + 0x38) + 0xc))(dVar11);
  iVar6 = iStack_98;
  iVar8 = 0;
  if ('\0' < *(char *)(*(int *)(param_1 + 0x1c) + 0x20)) {
    iVar3 = *in_r8;
    iVar9 = 0;
    do {
      iVar8 = iVar8 + 1;
      pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + iVar10);
      iVar10 = iVar10 + 0x28;
      *(float *)(iVar9 + iVar3) =
           (*(float *)(iVar9 + aiStack_80[0]) + *(float *)(iVar9 + iStack_98)) / *pfVar5;
      iVar9 = iVar9 + 4;
    } while (iVar8 < *(char *)(*(int *)(param_1 + 0x1c) + 0x20));
  }
  piVar7 = (int *)fn_82CE5410();
  *piVar7 = iVar6;
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar6 + 4);
  if (puVar2 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar2 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar2[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar2 + 3;
  }
  fn_82DFEBB0(aiStack_80);
  return;
}

