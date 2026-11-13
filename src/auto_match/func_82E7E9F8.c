typedef unsigned char bool;
extern int fn_82F65AC0();
extern int fn_82F6ADA8();


unsigned __int64 fn_82E7E9F8(unsigned short *param_1,unsigned short *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned short uVar3;
  int iVar4;
  char *pcVar5;
  __int64 lVar6;
  char *pcVar8;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  char *pcVar11;
  unsigned int uVar12;
  unsigned __int64 uVar10;
  unsigned short *puVar13;
  bool bVar14;
  unsigned char bVar15;
  
  lVar6 = 0;
  if (((param_2 == (unsigned short *)0x0) || (param_3 == (int *)0x0)) || (param_1 == param_2)) {
    return 0xffffffff80004003;
  }
  *param_3 = 0;
  uVar3 = *param_1;
  if ((uVar3 & 0x1000) != 0) {
    return 0xffffffffc00d36eb;
  }
  if (*param_2 != uVar3) {
    return 0xffffffffc00d36e7;
  }
  switch(uVar3 & 0xfff) {
  case 0:
  case 1:
    goto switchD_82e7eaa4_caseD_0;
  case 2:
    uVar10 = (unsigned __int64)(short)param_2[4];
    uVar7 = (unsigned __int64)(short)param_1[4];
    break;
  case 3:
  case 10:
  case 0x16:
    uVar10 = (unsigned __int64)*(unsigned int *)(param_2 + 4);
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    break;
  case 4:
    if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) goto LAB_82e7eb3c;
    bVar15 = (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) << 2;
    goto LAB_82e7ebb0;
  case 5:
  case 7:
    if (*(double *)(param_1 + 4) <= *(double *)(param_2 + 4)) {
      bVar15 = (*(double *)(param_1 + 4) < *(double *)(param_2 + 4)) << 2;
      goto LAB_82e7ebb0;
    }
    goto LAB_82e7eb3c;
  case 6:
  case 0x14:
    bVar15 = (*(__int64 *)(param_2 + 4) < *(__int64 *)(param_1 + 4)) << 3 |
             (*(__int64 *)(param_1 + 4) < *(__int64 *)(param_2 + 4)) << 2;
    goto LAB_82e7ebac;
  case 8:
  case 0x1f:
    iVar4 = fn_82F6ADA8(*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_1 + 4));
    goto LAB_82e7eabc;
  case 9:
  case 0xd:
    uVar12 = *(unsigned int *)(param_2 + 4);
    uVar9 = *(unsigned int *)(param_1 + 4);
    goto LAB_82e7eb18;
  case 0xb:
    uVar12 = (unsigned int)param_2[4];
    uVar9 = (unsigned int)param_1[4];
LAB_82e7eb18:
    bVar14 = uVar9 == uVar12;
    goto LAB_82e7eb04;
  default:
    return 0xffffffffc00d36e8;
  case 0x10:
    uVar10 = (unsigned __int64)*(char *)(param_2 + 4);
    uVar7 = (unsigned __int64)*(char *)(param_1 + 4);
    break;
  case 0x11:
    uVar12 = (unsigned int)*(unsigned char *)(param_2 + 4);
    uVar9 = (unsigned int)*(unsigned char *)(param_1 + 4);
    goto LAB_82e7eb60;
  case 0x12:
    uVar12 = (unsigned int)param_2[4];
    uVar9 = (unsigned int)param_1[4];
    goto LAB_82e7eb60;
  case 0x13:
  case 0x17:
    uVar12 = *(unsigned int *)(param_2 + 4);
    uVar9 = *(unsigned int *)(param_1 + 4);
LAB_82e7eb60:
    if (uVar9 <= uVar12) {
      bVar14 = uVar12 <= uVar9;
LAB_82e7eb04:
      iVar4 = -(unsigned int)!bVar14;
      goto LAB_82e7eb08;
    }
    goto LAB_82e7eb3c;
  case 0x15:
    bVar15 = (*(unsigned __int64 *)(param_2 + 4) < *(unsigned __int64 *)(param_1 + 4)) << 3 |
             (*(unsigned __int64 *)(param_1 + 4) < *(unsigned __int64 *)(param_2 + 4)) << 2;
LAB_82e7ebac:
    if (!(bool)(bVar15 >> 3)) {
LAB_82e7ebb0:
      iVar4 = -1;
      if (!(bool)(bVar15 >> 2 & 1)) {
        iVar4 = 0;
      }
      goto LAB_82e7eb08;
    }
    goto LAB_82e7eb3c;
  case 0x1e:
    iVar4 = fn_82F65AC0(*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_1 + 4));
LAB_82e7eabc:
    *param_3 = iVar4;
    return 0;
  case 0x40:
    puVar13 = param_2 + 4;
    param_1 = param_1 + 4;
    do {
      lVar6 = (unsigned __int64)*(unsigned char *)puVar13 - (unsigned __int64)*(unsigned char *)param_1;
      if (lVar6 != 0) break;
      puVar13 = (unsigned short *)((int)puVar13 + 1);
      param_1 = (unsigned short *)((int)param_1 + 1);
    } while (puVar13 != param_2 + 8);
    goto switchD_82e7eaa4_caseD_0;
  case 0x48:
    pcVar11 = *(char **)(param_2 + 4);
    pcVar8 = *(char **)(param_1 + 4);
    pcVar5 = pcVar11 + 0x10;
    do {
      cVar1 = *pcVar11;
      cVar2 = *pcVar8;
      if (cVar1 != cVar2) break;
      pcVar11 = pcVar11 + 1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar11 != pcVar5);
    bVar14 = cVar1 == cVar2;
    goto LAB_82e7eb04;
  }
  if ((int)uVar10 < (int)uVar7) {
LAB_82e7eb3c:
    iVar4 = -1;
  }
  else {
    iVar4 = -((int)uVar10 >> 0x1f) - ((unsigned int)(uVar7 < uVar10) - ((int)uVar7 >> 0x1f));
  }
LAB_82e7eb08:
  *param_3 = iVar4;
  return 0;
switchD_82e7eaa4_caseD_0:
  *param_3 = (int)lVar6;
  return 0;
}

