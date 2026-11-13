typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_823D9F58();
extern int fn_823DA180();
extern int fn_823E0DA0();
extern unsigned int ltcg_pool_0_0f;


char fn_823E0EA0(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3,int *param_4)

{
  unsigned __int64 uVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  char cVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned __int64 uVar11;
  char *pcVar12;
  unsigned int *puVar13;
  unsigned int **ppuVar14;
  unsigned int uVar15;
  __int64 lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int *puStack_40;
  unsigned int *apuStack_3c [15];
  
  uVar15 = *param_3;
  lVar16 = param_1 + 4;
  iVar4 = (int)param_1;
  *(unsigned char *)(iVar4 + 100) = 0;
  pcVar6 = (char *)fn_823E0DA0(param_2,uVar15);
  uVar11 = param_1 + 0x24;
  iVar10 = (int)uVar11;
  do {
    pcVar12 = (char *)uVar11;
    uVar1 = param_1 + 100U & 0xffffffff;
    bVar2 = (uVar11 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar11 & 0xffffffff)) goto LAB_823e0efc;
    cVar7 = pcVar12[(int)pcVar6 - iVar10];
    *pcVar12 = cVar7;
    uVar11 = uVar11 + 1;
    pcVar12 = (char *)uVar11;
  } while (cVar7 != '\0');
  bVar2 = (uVar11 & 0xffffffff) == (param_1 + 100U & 0xffffffff);
LAB_823e0efc:
  if (bVar2) {
    pcVar12[-1] = '\0';
  }
  if (*pcVar6 == '\0') {
    return '\x04';
  }
  iVar10 = *(int *)((int)param_1 + 0x20);
  puVar13 = (unsigned int *)((unsigned int)(param_3 + 4) & 0xfffffff0);
  uVar23 = puVar13[1];
  uVar24 = puVar13[2];
  uVar25 = puVar13[3];
  puVar9 = (unsigned int *)((int)param_1 + 0xb0U & 0xfffffff0);
  *puVar9 = *puVar13;
  puVar9[1] = uVar23;
  puVar9[2] = uVar24;
  puVar9[3] = uVar25;
  puStack_40 = *(unsigned int **)(iVar10 + 0x1a4);
  puVar13 = (unsigned int *)puStack_40[1];
  while (*(char *)((int)puVar13 + 0x51) == '\0') {
    if ((unsigned int)puVar13[4] < uVar15) {
      puVar13 = (unsigned int *)puVar13[2];
    }
    else {
      puStack_40 = puVar13;
      puVar13 = (unsigned int *)*puVar13;
    }
  }
  puVar13 = *(unsigned int **)(iVar10 + 0x1a4);
  if ((puStack_40 == puVar13) || (uVar15 < (unsigned int)puStack_40[4])) {
    apuStack_3c[0] = puVar13;
    ppuVar14 = apuStack_3c;
  }
  else {
    ppuVar14 = &puStack_40;
  }
  puVar9 = *ppuVar14 + 8;
  if (*ppuVar14 == puVar13) {
    puVar9 = (unsigned int *)0x0;
  }
  dVar17 = (double)((float)puVar9[9] * (float)puVar9[0xb]);
  dVar19 = (double)((float)puVar9[0xb] + (float)((double)(float)param_3[1] - dVar17));
  dVar18 = (double)fn_823D9F58(lVar16,1);
  dVar22 = (double)ltcg_pool_0_0f;
  bVar2 = *param_4 == 0;
  dVar20 = dVar22;
  dVar21 = dVar22;
  if (bVar2) {
    dVar21 = (double)(float)(dVar18 + dVar17);
    dVar20 = (double)(float)((double)(float)puVar9[10] * (double)(float)puVar9[0xb] + dVar18);
  }
  uVar15 = (unsigned int)bVar2;
  bVar5 = true;
  if ((dVar22 < (double)(float)param_3[2]) && (param_4[1] == 0)) {
    bVar5 = false;
    uVar15 = (unsigned int)bVar2;
    fn_823D9F58((double)(float)((double)*(float *)(pcVar6 + 0x80) + dVar19),lVar16,5);
  }
  if (uVar15 != 0) {
    if (*(int *)(pcVar6 + 0x84) == 0) {
      fn_823D9F58(dVar21,lVar16,3);
    }
    fn_823D9F58(dVar20,lVar16,4);
  }
  bVar2 = true;
  if (param_4[2] == 0) {
    if (*(int *)(pcVar6 + 0x74) != 0) {
      if (!bVar5) {
        bVar2 = false;
        goto LAB_823e10fc;
      }
      uVar15 = *(unsigned int *)(iVar4 + 0xc);
      if (uVar15 < *(unsigned int *)(iVar4 + 8)) {
        uVar3 = *(unsigned int *)lVar16;
        iVar10 = uVar15 * 0xc;
        do {
          if (*(int *)(iVar10 + uVar3) == 6) {
            iVar10 = uVar15 * 0xc + uVar3;
            goto LAB_823e10c0;
          }
          uVar15 = uVar15 + 1;
          iVar10 = iVar10 + 0xc;
        } while (uVar15 < *(unsigned int *)(iVar4 + 8));
      }
      iVar10 = 0;
LAB_823e10c0:
      if (iVar10 != 0) {
        dVar19 = (double)*(float *)(iVar10 + 8);
      }
    }
    fn_823D9F58(dVar19,lVar16,0);
  }
LAB_823e10fc:
  uVar11 = (unsigned __int64)*(unsigned int *)lVar16;
  lVar16 = (unsigned __int64)*(unsigned int *)(iVar4 + 0xc) * 0xc + uVar11;
  lVar8 = ((unsigned __int64)*(unsigned int *)(iVar4 + 8) - (unsigned __int64)*(unsigned int *)(iVar4 + 0xc)) * 0xc + uVar11;
  fn_823DA180(lVar16,lVar8,((int)lVar8 - (int)lVar16) / 0xc,0xffffffff823d9f38);
  if (bVar2) {
    cVar7 = !bVar5;
  }
  else {
    cVar7 = !bVar5 + '\x02';
  }
  return cVar7;
}

