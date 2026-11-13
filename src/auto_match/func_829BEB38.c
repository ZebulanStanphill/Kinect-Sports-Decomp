extern int d3dx_jcopy_sample_rows();


void fn_829BEB38(int param_1,int param_2,int *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  int iVar12;
  unsigned int uVar13;
  
  iVar12 = 0;
  iVar8 = *(int *)(param_2 + 4) + *(int *)(param_1 + 0x1c8);
  puVar4 = (unsigned int *)*param_4;
  bVar1 = *(unsigned char *)(iVar8 + 0x8c);
  bVar2 = *(unsigned char *)(iVar8 + 0x96);
  uVar10 = (unsigned int)bVar2;
  puVar11 = puVar4;
  if (0 < *(int *)(param_1 + 0x13c)) {
    do {
      uVar9 = *puVar11;
      uVar5 = *(int *)(param_1 + 0x70) + uVar9;
      if (uVar9 < uVar5) {
        puVar6 = (unsigned char *)(*param_3 + -1);
        do {
          puVar6 = puVar6 + 1;
          uVar3 = *puVar6;
          if (bVar1 != 0) {
            puVar7 = (unsigned char *)(uVar9 - 1);
            uVar13 = (unsigned int)bVar1;
            if (bVar1 != 0) {
              do {
                puVar7 = puVar7 + 1;
                *puVar7 = uVar3;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar9 = uVar9 + bVar1;
          }
        } while (uVar9 < uVar5);
      }
      if (1 < bVar2) {
        d3dx_jcopy_sample_rows(puVar4,iVar12,puVar4,iVar12 + 1,uVar10 - 1,*(unsigned int *)(param_1 + 0x70));
      }
      iVar12 = iVar12 + uVar10;
      param_3 = param_3 + 1;
      puVar11 = puVar11 + uVar10;
    } while (iVar12 < *(int *)(param_1 + 0x13c));
  }
  return;
}

