extern unsigned int *auStack_30;
extern int fn_8233EB88();
extern int fn_8257A9F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822FAF40(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int auStack_30;
  
  puVar8 = param_1 + 1;
  fn_8233EB88(&auStack_30,puVar8,param_1[1],param_1[2]);
  auStack_30 = 0;
  if (*param_1 != 0) {
    do {
      fn_8257A9F0(puVar8,&auStack_30);
      auStack_30 = auStack_30 + 1;
    } while (auStack_30 < *param_1);
  }
  fVar5 = lbl_821CA460;
  puVar1 = (unsigned int *)param_1[2];
  puVar2 = (unsigned int *)*puVar8;
  if (puVar2 != puVar1) {
    iVar7 = 2;
    puVar4 = puVar2;
    while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar3 = *puVar4;
      iVar6 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar5) * (float)(__int64)iVar7
                   );
      iVar6 = iVar6 - (iVar6 / iVar7) * iVar7;
      iVar7 = iVar7 + 1;
      *puVar4 = puVar2[iVar6];
      puVar2[iVar6] = uVar3;
    }
  }
  return;
}

