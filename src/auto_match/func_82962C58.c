extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F6FA8();
extern int fn_828FCDE0();
extern int fn_829548C8();
extern int fn_82958D40();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern unsigned int uStack_41;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64 fn_82962C58(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  char cVar1;
  char *pcVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned int *puVar9;
  __int64 lVar7;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int *puVar14;
  char *pcVar17;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar18;
  __int64 lVar19;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [31];
  unsigned char uStack_41;
  
  iVar8 = (**(int (***)())(*param_1 + 0x70))(param_1,param_2[0x1b]);
  uVar6 = (**(int (***)())(*param_1 + 0x74))(param_1,param_2[0x1b]);
  if (param_1[0x57] != 0) {
    if (param_2[0x1b] == 0xffffffff) {
      return 0;
    }
    if (iVar8 != 0xffff) {
      if ((*(unsigned int *)(*(int *)(param_2[1] * 4 + param_1[4]) + 4) & 0x10) == 0) {
        puVar9 = (unsigned int *)fn_82958D40(param_1,iVar8);
        uVar10 = 0xffffffff82038774;
      }
      else {
        puVar9 = (unsigned int *)fn_82958D40(param_1,iVar8);
        uVar10 = 0xffffffff8203877c;
      }
      fn_828F6FA8(auStack_60,0x20,uVar10,*puVar9,uVar6);
      uStack_41 = 0;
      uVar10 = fn_828FCDE0(param_1 + 0x76,auStack_60,param_2[3],1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      param_1[0x7d] = param_1[0x7d] + 1;
      if (((((param_1[0x33] & 1U) != 0) && (uVar18 = param_2[0x18], uVar18 != 0)) &&
          (*(int *)(uVar18 + 4) == 6)) &&
         (iVar8 = *(int *)(uVar18 + 0x14), *(int *)(iVar8 + 4) == 3)) {
        pcVar2 = *(char **)(iVar8 + 0x18);
        pcVar17 = pcVar2;
        do {
          cVar1 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar1 != '\0');
        lVar7 = fn_8265C940(pcVar17 + (2 - (int)pcVar2),0x24810000);
        if (lVar7 == 0) {
          return 0xffffffff8007000e;
        }
        fn_828F6FA8(lVar7,pcVar17 + (2 - (int)pcVar2),0xffffffff8203876c,
                          *(unsigned int *)(iVar8 + 0x18));
        uVar10 = fn_828FCDE0(param_1 + 0x76,lVar7,param_2[3],1);
        fn_8265C990(lVar7,0x24810000);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        param_1[0x7d] = param_1[0x7d] + 1;
      }
    }
    if (param_3 == (unsigned int *)0x0) {
      return 0;
    }
    *param_3 = param_2[0x1b];
    return 0;
  }
  uStack_80 = 0;
  switch(iVar8) {
  case 0:
    return 1;
  case 1:
    uVar15 = 0;
    break;
  case 2:
    uVar15 = 1;
    break;
  case 3:
    uVar15 = 2;
    break;
  case 4:
    uVar15 = 3;
    break;
  case 5:
    uVar15 = 4;
    break;
  case 6:
    uVar15 = 5;
    break;
  case 7:
    uVar15 = 6;
    break;
  case 8:
    uVar15 = 7;
    break;
  case 9:
    uVar15 = 8;
    if ((uVar6 & 0xffffffff) != 0) {
      return 0xffffffff80004005;
    }
    goto code_r0x82962e84;
  case 10:
    uVar15 = 9;
    break;
  case 0xb:
    uVar15 = 10;
    break;
  case 0xc:
    uVar15 = 0xb;
    break;
  case 0xd:
    uVar15 = 0xc;
    break;
  case 0xe:
    uVar15 = 0xd;
    break;
  default:
    goto LAB_82962f78;
  case 0x11:
    uVar15 = 0xffffffff80000000;
    uStack_80 = 1;
    break;
  case 0x12:
    uVar15 = 0xffffffff80000000;
  }
  if (0xf < (uVar6 & 0xffffffff)) {
LAB_82962f78:
    return 0xffffffff80004005;
  }
code_r0x82962e84:
  uVar18 = 0;
  uVar15 = (uVar6 & 0x7fff) << 0x10 | 0xffffffff80000000 | uVar15;
  if ((*param_2 & 0x1000000) != 0) {
    uVar18 = 0x400000;
  }
  uVar10 = fn_8295D0A8(param_1,0x1f);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  uVar10 = fn_8295A330(param_1,uVar15);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  if ((*(unsigned int *)(*(int *)(param_2[1] * 4 + param_1[4]) + 4) & 0x10) == 0) {
    uVar10 = (**(int (***)())(*param_1 + 0x158))(param_1,param_2,&uStack_74,&uStack_78,&uStack_80);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uStack_80 = 0;
  }
  else {
    uStack_80 = (int)(param_1[0x1c] << 7 | (unsigned int)param_1[0x1c] >> 0x19) >> 0x1f | uStack_80;
    uVar10 = (**(int (***)())(*param_1 + 0x15c))(param_1);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
  }
  lVar7 = 0;
  uVar11 = 0;
  auStack_70[1] = 0xffffffff;
  auStack_70[2] = 0xffffffff;
  auStack_70[3] = 0xffffffff;
  if (param_1[2] != 0) {
    iVar8 = param_1[5];
    iVar13 = 0;
    uVar3 = param_2[1];
    uVar4 = param_1[2];
    do {
      iVar5 = *(int *)(iVar13 + iVar8);
      if (((uVar3 == *(unsigned int *)(iVar5 + 4)) && (param_2[2] == *(unsigned int *)(iVar5 + 8))) &&
         (param_2[3] == *(unsigned int *)(iVar5 + 0xc))) {
        auStack_70[*(int *)(iVar5 + 0x10)] = uVar11;
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar11 < uVar4);
  }
  puVar14 = &uStack_74;
  puVar12 = auStack_70;
  lVar19 = 4;
  do {
    if (*puVar12 != 0xffffffff) {
      puVar14 = puVar14 + 1;
      *puVar14 = *puVar12;
      lVar7 = lVar7 + 1;
    }
    puVar12 = puVar12 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  uVar10 = (**(int (***)())(*param_1 + 0x144))(param_1,auStack_70,lVar7,&uStack_7c,uStack_80);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  uVar6 = (**(int (***)())(*param_1 + 0x6c))(param_1,4,0);
  uVar16 = (unsigned __int64)uStack_7c;
  if ((uVar15 & 0x7fffffff) == (uVar6 & 0xffffffff)) {
    uVar16 = uVar16 | 0xf0000;
  }
  uVar6 = uVar16 << 0x20 | uVar16 & 0xffffffffffefffff;
  uStack_7c = (unsigned int)(uVar16 & 0xffffffffffefffff);
  if (((param_1[0x1c] & 0x1000000U) == 0) &&
     (((param_1[0x33] & 0x20U) != 0 || ((*param_2 & 0x2000000) != 0)))) {
    uVar6 = uVar6 | 0x200000;
    uStack_7c = (unsigned int)uVar6;
  }
  uVar10 = (**(int (***)())(*param_1 + 0x138))
                     (param_1,((uStack_78 & 7) << 0x14 | 0xff800000 | uStack_78 & 0x18) << 8 |
                              uStack_74 & 0x7ff | uVar18,uVar6,0);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  uVar10 = (**(int (***)())(*param_1 + 0x134))(param_1);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  uVar10 = fn_829548C8(param_1);
  if (-1 < (int)uVar10) {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = (unsigned int)uVar15;
    }
    return 0;
  }
  return uVar10;
}

