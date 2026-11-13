extern int fn_82230300();
extern int fn_82230360();
extern int fn_822C72E0();
extern int fn_8260D428();
extern int fn_82809CB0();
extern unsigned int lbl_821929B0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_823364B8(int param_1,float *param_2,int param_3)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int ****ppppuVar6;
  unsigned __int64 uVar7;
  double dVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float afStack_80 [4];
  unsigned int ***apppuStack_70 [4];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int ***apppuStack_50 [4];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fVar1 = *param_2;
  puVar2 = (unsigned int *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (unsigned int *)((int)afStack_80 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  dVar8 = (double)fn_82809CB0((double)(afStack_80[0] - fVar1));
  if (dVar8 < (double)lbl_821929B0) {
    return 1;
  }
  fn_82230300(apppuStack_50,0,0);
  fn_82230300(apppuStack_70,0,0);
  if (param_3 == 0) {
    fn_82230360(apppuStack_50,0xffffffff821aca9c,8);
    uVar7 = 9;
    uVar5 = 0xffffffff821acaa8;
  }
  else if (*(int *)(param_1 + 0x184) == 0) {
    fn_82230360(apppuStack_50,0xffffffff821b09fc,0x15);
    uVar7 = 0x16;
    uVar5 = 0xffffffff821b0a2c;
  }
  else {
    fn_82230360(apppuStack_50,0xffffffff821b09e4,0x14);
    uVar7 = 0x15;
    uVar5 = 0xffffffff821b0a14;
  }
  fn_82230360(apppuStack_70,uVar5,uVar7);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  ppppuVar6 = (unsigned int ****)apppuStack_70[0];
  if (uStack_5c < 0x10) {
    ppppuVar6 = apppuStack_70;
  }
  iVar4 = fn_8260D428(iVar4 + 4,0,*(unsigned int *)(iVar4 + 0x14),ppppuVar6,uStack_60);
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
    ppppuVar6 = (unsigned int ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar6 = apppuStack_50;
    }
    iVar4 = fn_8260D428(iVar4 + 4,0,*(unsigned int *)(iVar4 + 0x14),ppppuVar6,uStack_40);
    if (iVar4 != 0) {
      fVar1 = *param_2;
      puVar2 = (unsigned int *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      iVar4 = *(int *)(param_1 + 8);
      puVar3 = (unsigned int *)((int)afStack_80 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      if (fVar1 <= afStack_80[0]) {
        ppppuVar6 = (unsigned int ****)apppuStack_50[0];
        if (uStack_3c < 0x10) {
          ppppuVar6 = apppuStack_50;
        }
      }
      else {
        ppppuVar6 = (unsigned int ****)apppuStack_70[0];
        if (uStack_5c < 0x10) {
          ppppuVar6 = apppuStack_70;
        }
      }
      fn_822C72E0(*(unsigned int *)(iVar4 + 0x20),ppppuVar6);
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  if (uStack_5c < 0x10) {
    apppuStack_70[0] = apppuStack_70;
  }
  iVar4 = fn_8260D428(iVar4 + 4,0,*(unsigned int *)(iVar4 + 0x14),apppuStack_70[0],uStack_60);
  if (iVar4 == 0) {
    fVar1 = *param_2;
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
    uVar9 = puVar2[1];
    uVar10 = puVar2[2];
    uVar11 = puVar2[3];
    puVar3 = (unsigned int *)((int)afStack_80 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    if (afStack_80[0] <= fVar1) goto LAB_823366cc;
LAB_82336724:
    uVar5 = 1;
  }
  else {
LAB_823366cc:
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x20);
    if (uStack_3c < 0x10) {
      apppuStack_50[0] = apppuStack_50;
    }
    iVar4 = fn_8260D428(iVar4 + 4,0,*(unsigned int *)(iVar4 + 0x14),apppuStack_50[0],uStack_40);
    if (iVar4 == 0) {
      fVar1 = *param_2;
      puVar2 = (unsigned int *)(*(int *)(param_1 + 0x230) + 0x80U & 0xfffffff0);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (unsigned int *)((int)afStack_80 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      if (afStack_80[0] < fVar1) goto LAB_82336724;
    }
    uVar5 = 0;
  }
  fn_82230300(apppuStack_70,1,0);
  fn_82230300(apppuStack_50,1,0);
  return uVar5;
}

