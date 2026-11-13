typedef unsigned char bool;
extern int fn_8277BCA0();
extern int fn_8277CB68();
extern int fn_8277D350();
extern int fn_8277ECE0();
extern unsigned int lbl_82015510;
extern unsigned int lbl_82015514;
extern unsigned int lbl_821AAD20;


void fn_827806D0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  float fVar8;
  float fVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int *puVar15;
  unsigned __int64 uVar14;
  int *piVar16;
  bool bVar17;
  
  puVar15 = (unsigned int *)(param_1 + 0x7c);
  fn_8277D350(puVar15,0,*(unsigned int *)(param_1 + 0x7c),param_1 + 0x30);
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_82015510;
  fVar1 = *(float *)(param_1 + 0xe0);
  if (fVar1 < lbl_821AAD20) {
    fVar1 = -fVar1;
  }
  fVar2 = *(float *)(param_1 + 0xe8);
  if (fVar2 < lbl_821AAD20) {
    fVar2 = -fVar2;
  }
  if (fVar1 < fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0xe4);
  bVar17 = fVar2 < lbl_821AAD20;
  *(float *)(param_1 + 0xf0) = fVar1 * lbl_82015510;
  fVar1 = lbl_82015514;
  if (bVar17) {
    fVar2 = -fVar2;
  }
  fVar3 = *(float *)(param_1 + 0xec);
  if (fVar3 < fVar9) {
    fVar3 = -fVar3;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  uVar10 = 0;
  *(float *)(param_1 + 0xf4) = fVar3 * fVar8;
  uVar12 = 0;
  if (*puVar15 != 0) {
    do {
      uVar5 = *(unsigned int *)(*(int *)((uVar12 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x88)) +
                       (uVar12 & 0x3ff) * 4);
      iVar11 = *(int *)((uVar5 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) + (uVar5 & 0x3ff) * 8;
      if (*(float *)(iVar11 + 4) - fVar1 <= *(float *)(param_1 + 0xf4)) {
        *(float *)(iVar11 + 4) = fVar1;
      }
      else {
        uVar6 = uVar10 >> 8;
        uVar7 = uVar10 & 0x3ff;
        uVar10 = uVar10 + 1;
        *(unsigned int *)(*(int *)((uVar6 & 0xfffffc) + *(int *)(param_1 + 0x88)) + uVar7 * 4) = uVar5;
        fVar1 = *(float *)(iVar11 + 4);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar15);
  }
  if (uVar10 < *puVar15) {
    *puVar15 = uVar10;
  }
  uVar14 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      fn_8277ECE0(param_1,(unsigned __int64)
                            *(unsigned int *)(((unsigned int)((uVar14 & 0xffffffff) >> 4) & 0xffffffc) +
                                     *(int *)(param_1 + 0x4c)) + (uVar14 & 0x3f) * 0x10);
      uVar14 = uVar14 + 1;
    } while ((uVar14 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x40));
  }
  uVar4 = *(unsigned int *)(param_1 + 0x60);
  piVar16 = (int *)(param_1 + 0x70);
  fn_8277CB68(piVar16,uVar4,0x20);
  *(unsigned int *)(param_1 + 0x74) = uVar4;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar11 = 0;
    do {
      uVar12 = uVar10 >> 4;
      uVar5 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
      puVar13 = (unsigned int *)
                (*(int *)((uVar12 & 0xffffffc) + *(int *)(param_1 + 0x6c)) + uVar5 * 0x38);
      puVar13[1] = *(unsigned int *)
                    (*(int *)((*(unsigned int *)*puVar13 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x3c)) +
                     (*(unsigned int *)*puVar13 & 0x3ff) * 8 + 4);
      *(unsigned int **)(iVar11 + *piVar16) = puVar13;
      iVar11 = iVar11 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0x60));
  }
  fn_8277BCA0(piVar16,0,*(unsigned int *)(param_1 + 0x74),0xffffffff8277ba98);
  return;
}

