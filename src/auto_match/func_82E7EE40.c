typedef unsigned char bool;
extern int fn_82F65AC0();
extern int fn_82F6ADA8();


unsigned __int64
fn_82E7EE40(unsigned short *param_1,unsigned short param_2,double *param_3,double *param_4,int *param_5)

{
  char cVar1;
  char cVar2;
  unsigned char bVar3;
  int iVar4;
  char *pcVar5;
  double *pdVar6;
  char *pcVar8;
  float fVar9;
  unsigned __int64 uVar7;
  char *pcVar11;
  float fVar12;
  unsigned __int64 uVar10;
  unsigned __int64 uVar13;
  bool bVar14;
  unsigned char bVar15;
  
  uVar13 = 0;
  if (((param_3 == (double *)0x0) || (param_4 == (double *)0x0)) || (param_5 == (int *)0x0)) {
    return 0xffffffff80004003;
  }
  *param_5 = 0;
  if (param_2 != (*param_1 & 0xfff)) {
    return 0xffffffffc00d36eb;
  }
  switch(param_2) {
  case 0:
  case 1:
    *param_5 = 0;
    break;
  case 2:
    uVar10 = (unsigned __int64)*(short *)param_3;
    uVar7 = (unsigned __int64)*(short *)param_4;
    goto code_r0x82e7ef64;
  case 3:
  case 10:
  case 0x16:
    uVar10 = (unsigned __int64)(unsigned int)*(float *)param_3;
    uVar7 = (unsigned __int64)(unsigned int)*(float *)param_4;
    goto code_r0x82e7ef64;
  case 4:
    if (*(float *)param_3 < *(float *)param_4) goto code_r0x82e7ef6c;
    bVar15 = (*(float *)param_4 < *(float *)param_3) << 2;
    goto code_r0x82e7efe0;
  case 5:
  case 7:
    if (*param_4 <= *param_3) {
      bVar15 = (*param_4 < *param_3) << 2;
      goto code_r0x82e7efe0;
    }
    goto code_r0x82e7ef6c;
  case 6:
  case 0x14:
    bVar15 = ((__int64)*param_3 < (__int64)*param_4) << 3 |
             ((__int64)*param_4 < (__int64)*param_3) << 2;
    goto code_r0x82e7efdc;
  case 8:
  case 0x1f:
    iVar4 = fn_82F6ADA8(*(float *)param_3,*(float *)param_4);
    goto code_r0x82e7eeec;
  case 9:
  case 0xd:
    iVar4 = (int)param_4 - (int)param_3;
    goto code_r0x82e7ef4c;
  case 0xb:
    iVar4 = (unsigned int)*(unsigned short *)param_4 - (unsigned int)*(unsigned short *)param_3;
code_r0x82e7ef4c:
    bVar14 = iVar4 == 0;
    goto code_r0x82e7ef34;
  default:
    uVar13 = 0xffffffffc00d36e8;
    break;
  case 0x10:
    uVar10 = (unsigned __int64)(char)*(unsigned char *)param_3;
    uVar7 = (unsigned __int64)(char)*(unsigned char *)param_4;
code_r0x82e7ef64:
    if ((int)uVar10 < (int)uVar7) {
code_r0x82e7ef6c:
      iVar4 = -1;
    }
    else {
      iVar4 = -((int)uVar10 >> 0x1f) - ((unsigned int)(uVar7 < uVar10) - ((int)uVar7 >> 0x1f));
    }
code_r0x82e7ef38:
    *param_5 = iVar4;
    break;
  case 0x11:
    fVar12 = (float)(unsigned int)*(unsigned char *)param_3;
    fVar9 = (float)(unsigned int)*(unsigned char *)param_4;
    goto code_r0x82e7ef90;
  case 0x12:
    fVar12 = (float)(unsigned int)*(unsigned short *)param_3;
    fVar9 = (float)(unsigned int)*(unsigned short *)param_4;
    goto code_r0x82e7ef90;
  case 0x13:
  case 0x17:
    fVar12 = *(float *)param_3;
    fVar9 = *(float *)param_4;
code_r0x82e7ef90:
    if ((unsigned int)fVar12 < (unsigned int)fVar9) goto code_r0x82e7ef6c;
    bVar14 = (unsigned int)fVar12 <= (unsigned int)fVar9;
code_r0x82e7ef34:
    iVar4 = -(unsigned int)!bVar14;
    goto code_r0x82e7ef38;
  case 0x15:
    bVar15 = ((unsigned __int64)*param_3 < (unsigned __int64)*param_4) << 3 |
             ((unsigned __int64)*param_4 < (unsigned __int64)*param_3) << 2;
code_r0x82e7efdc:
    if ((bool)(bVar15 >> 3)) goto code_r0x82e7ef6c;
code_r0x82e7efe0:
    iVar4 = -1;
    if (!(bool)(bVar15 >> 2 & 1)) {
      iVar4 = 0;
    }
    goto code_r0x82e7ef38;
  case 0x1e:
    iVar4 = fn_82F65AC0(*(float *)param_3,*(float *)param_4);
code_r0x82e7eeec:
    *param_5 = iVar4;
    break;
  case 0x40:
    pdVar6 = param_3 + 1;
    do {
      bVar15 = *(unsigned char *)param_3;
      bVar3 = *(unsigned char *)param_4;
      if ((unsigned __int64)bVar15 - (unsigned __int64)bVar3 != 0) break;
      param_3 = (double *)((int)param_3 + 1);
      param_4 = (double *)((int)param_4 + 1);
    } while (param_3 != pdVar6);
    *param_5 = (int)((unsigned __int64)bVar15 - (unsigned __int64)bVar3);
    break;
  case 0x48:
    pcVar11 = *(char **)param_3;
    pcVar8 = *(char **)param_4;
    pcVar5 = pcVar11 + 0x10;
    do {
      cVar1 = *pcVar11;
      cVar2 = *pcVar8;
      if (cVar1 != cVar2) break;
      pcVar11 = pcVar11 + 1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar11 != pcVar5);
    bVar14 = cVar1 == cVar2;
    goto code_r0x82e7ef34;
  }
  return uVar13;
}

