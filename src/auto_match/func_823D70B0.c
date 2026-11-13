#define true 1
extern int fn_823D7488();


unsigned int *
fn_823D70B0(unsigned int *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3,int (**param_4)())

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  char cVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  unsigned __int64 *puVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 *puVar9;
  unsigned __int64 *puVar10;
  unsigned __int64 *puVar11;
  
  puVar11 = param_3 + -1;
  uVar6 = (int)param_3 - (int)param_2 >> 3;
  iVar1 = (int)puVar11 - (int)param_2 >> 3;
  puVar8 = param_2 + ((int)param_3 - (int)param_2 >> 4) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0)
  ;
  puVar3 = param_2;
  if (0x28 < iVar1) {
    uVar6 = iVar1 + 1;
    uVar6 = ((int)uVar6 >> 3) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    fn_823D7488(param_2,param_2 + uVar6,param_2 + uVar6 * 2);
    fn_823D7488(puVar8 + -(uVar6 & 0x1fffffff),puVar8,puVar8 + uVar6,param_4);
    fn_823D7488(puVar11 + (uVar6 & 0xfffffff) * -2,puVar11 + -(uVar6 & 0x1fffffff),puVar11,
                    param_4);
    puVar11 = puVar11 + -(uVar6 & 0x1fffffff);
    puVar3 = param_2 + uVar6;
  }
  fn_823D7488(puVar3,puVar8,puVar11,param_4);
  puVar11 = puVar8 + 1;
  while (puVar3 = puVar8, param_2 < puVar3) {
    puVar8 = puVar3 + -1;
    cVar4 = (*param_4)(puVar8,puVar3);
    if ((cVar4 != '\0') || (cVar4 = (*param_4)(puVar3,puVar8), cVar4 != '\0')) break;
  }
  while ((puVar8 = puVar3, puVar9 = puVar11, puVar11 < param_3 &&
         ((cVar4 = (*param_4)(puVar11,puVar3), cVar4 == '\0' &&
          (cVar4 = (*param_4)(puVar3,puVar11), cVar4 == '\0'))))) {
    puVar11 = puVar11 + 1;
  }
  do {
    for (; puVar2 = puVar3, puVar7 = puVar8, puVar11 < param_3; puVar11 = puVar11 + 1) {
      cVar4 = (*param_4)(puVar3,puVar11);
      if (cVar4 == '\0') {
        cVar4 = (*param_4)(puVar11,puVar3);
        if (cVar4 != '\0') break;
        uVar5 = *puVar9;
        *(unsigned int *)puVar9 = *(unsigned int *)puVar11;
        *(unsigned int *)((int)puVar9 + 4) = *(unsigned int *)((int)puVar11 + 4);
        *puVar11 = uVar5;
        goto LAB_823d724c;
      }
LAB_823d7250:;}
    for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
      puVar10 = puVar7 + -1;
      cVar4 = (*param_4)(puVar10,puVar2);
      puVar3 = puVar2;
      if (cVar4 == '\0') {
        cVar4 = (*param_4)(puVar2,puVar10);
        if (cVar4 != '\0') break;
        puVar3 = puVar2 + -1;
        uVar5 = *puVar3;
        *(unsigned int *)puVar3 = *(unsigned int *)puVar10;
        *(unsigned int *)((int)puVar2 + -4) = *(unsigned int *)((int)puVar7 + -4);
        *puVar10 = uVar5;
      }
      puVar2 = puVar3;
      puVar7 = puVar10;
    }
    if (puVar8 == param_2) {
      if (puVar11 == param_3) {
        *param_1 = puVar2;
        param_1[1] = puVar9;
        return param_1;
      }
      if (puVar9 != puVar11) {
        uVar5 = *puVar2;
        *(unsigned int *)puVar2 = *(unsigned int *)puVar9;
        *(unsigned int *)((int)puVar2 + 4) = *(unsigned int *)((int)puVar9 + 4);
        *puVar9 = uVar5;
      }
      puVar3 = puVar2 + 1;
      uVar5 = *puVar2;
      *(unsigned int *)puVar2 = *(unsigned int *)puVar11;
      *(unsigned int *)((int)puVar2 + 4) = *(unsigned int *)((int)puVar11 + 4);
      *puVar11 = uVar5;
LAB_823d724c:
      puVar9 = puVar9 + 1;
      goto LAB_823d7250;
    }
    puVar7 = puVar8 + -1;
    if (puVar11 != param_3) {
      uVar5 = *puVar11;
      *(unsigned int *)puVar11 = *(unsigned int *)puVar7;
      *(unsigned int *)((int)puVar11 + 4) = *(unsigned int *)((int)puVar8 + -4);
      *puVar7 = uVar5;
      puVar8 = puVar7;
      puVar3 = puVar2;
      goto LAB_823d7250;
    }
    puVar3 = puVar2 + -1;
    if (puVar7 != puVar3) {
      uVar5 = *puVar7;
      *(unsigned int *)puVar7 = *(unsigned int *)puVar3;
      *(unsigned int *)((int)puVar8 + -4) = *(unsigned int *)((int)puVar2 + -4);
      *puVar3 = uVar5;
    }
    puVar10 = puVar9 + -1;
    uVar5 = *puVar3;
    *(unsigned int *)puVar3 = *(unsigned int *)puVar10;
    *(unsigned int *)((int)puVar2 + -4) = *(unsigned int *)((int)puVar9 + -4);
    *puVar10 = uVar5;
    puVar8 = puVar7;
    puVar9 = puVar10;
  } while( true );
}

