typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_5c;
extern unsigned int ltcg_pool_0_0f;


bool fn_82490900(double param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float *pfVar7;
  bool bVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fStack_5c;
  
  if (param_2[6] != 0) {
    puVar2 = (unsigned int *)param_2[9];
    for (puVar13 = (unsigned int *)param_2[8]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      (**(int (***)())(*(int *)*puVar13 + 0x10))();
    }
  }
  puVar11 = (unsigned int *)param_2[1];
  puVar3 = (unsigned int *)param_2[2];
  fVar1 = (float)((double)(float)param_2[0xe] + param_1);
  piVar4 = (int *)param_2[7];
  param_2[0xe] = (unsigned int)fVar1;
  for (puVar12 = puVar11; (puVar12 != puVar3 && (*puVar12 != param_2[5])); puVar12 = puVar12 + 2) {
  }
  if (puVar12 == puVar3) {
LAB_824909a8:
    if (piVar4 == (int *)0x0) {
      return false;
    }
  }
  else {
    fStack_5c = (float)*(unsigned __int64 *)puVar12;
    dVar14 = (double)fStack_5c;
    if (param_2[6] == 0) {
      while (dVar14 < (double)fVar1) {
        puVar12 = puVar12 + 2;
        param_2[0xe] = (unsigned int)(float)((double)(float)param_2[0xe] - dVar14);
        if (puVar12 == puVar3) goto LAB_824909a8;
        fStack_5c = (float)*(unsigned __int64 *)puVar12;
        dVar14 = (double)fStack_5c;
        param_2[5] = param_2[5] + 1;
        fVar1 = (float)param_2[0xe];
      }
    }
    else {
      param_2[6] = 0;
    }
    uVar5 = param_2[5];
    if (uVar5 == *param_2) {
      if (piVar4 == (int *)0x0) {
        return false;
      }
    }
    else if ((piVar4 == (int *)0x0) || (uVar5 <= (unsigned int)piVar4[0xe])) {
      uVar6 = param_2[0x16];
      dVar14 = (double)(float)((double)(float)param_2[0xe] / dVar14);
      uVar10 = (uVar5 / uVar6) * uVar6;
      for (puVar12 = puVar11; (puVar12 != puVar3 && (*puVar12 != uVar10)); puVar12 = puVar12 + 2) {
      }
      for (; (puVar11 != puVar3 && (*puVar11 != uVar6 + uVar10)); puVar11 = puVar11 + 2) {
      }
      if (puVar12 == puVar3) {
        if (puVar11 == puVar3) {
          return false;
        }
        if (puVar12 == puVar3) {
          puVar12 = puVar11;
        }
      }
      if (puVar11 == puVar3) {
        puVar11 = puVar12;
      }
      bVar8 = false;
      dVar15 = (double)ltcg_pool_0_0f;
      dVar16 = dVar15;
      if (puVar12 != puVar11) {
        do {
          if (uVar5 <= *puVar12) {
            bVar8 = true;
          }
          if (!bVar8) {
            dVar16 = (double)(float)((double)(float)puVar12[1] + dVar16);
          }
          pfVar7 = (float *)(puVar12 + 1);
          puVar12 = puVar12 + 2;
          dVar15 = (double)(float)((double)*pfVar7 + dVar15);
        } while (puVar12 != puVar11);
        dVar15 = (double)(float)((double)(float)((double)(float)param_2[0xe] + dVar16) / dVar15);
      }
      puVar2 = (unsigned int *)param_2[9];
      for (puVar13 = (unsigned int *)param_2[8]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
        (**(int (***)())(*(int *)*puVar13 + 8))
                  (param_1,dVar14,dVar15,(int *)*puVar13,param_2[5],(unsigned __int64)*param_2 - 1);
      }
      if (piVar4 != (int *)0x0) {
        (**(int (***)())(*piVar4 + 0xc))(param_1,piVar4);
      }
      return true;
    }
  }
  iVar9 = (**(int (***)())(*piVar4 + 0x10))(piVar4,param_2);
  return iVar9 == 0;
}

