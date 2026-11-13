extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F6FA8();
extern int fn_828FCDE0();
extern int fn_829548C8();
extern int fn_82958D40();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern unsigned int uStack_41;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_829A95D0(int *param_1,int param_2,unsigned int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar9;
  unsigned __int64 uVar6;
  unsigned int *puVar10;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int *puVar14;
  char *pcVar16;
  unsigned __int64 uVar15;
  __int64 lVar17;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_68 [4];
  unsigned int uStack_64;
  unsigned int auStack_60 [7];
  unsigned char uStack_41;
  
  iVar9 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  uVar6 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
  if (param_1[0x57] != 0) {
    if (*(int *)(param_2 + 0x6c) == -1) {
      return 0;
    }
    if (iVar9 != 0xffff) {
      puVar10 = (unsigned int *)fn_82958D40(param_1,iVar9);
      fn_828F6FA8(auStack_60,0x20,0xffffffff8203877c,*puVar10,uVar6);
      uStack_41 = 0;
      uVar7 = fn_828FCDE0(param_1 + 0x76,auStack_60,*(unsigned int *)(param_2 + 0xc),1);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      param_1[0x7d] = param_1[0x7d] + 1;
      if (((((param_1[0x33] & 1U) != 0) && (iVar9 = *(int *)(param_2 + 0x60), iVar9 != 0)) &&
          (*(int *)(iVar9 + 4) == 6)) && (iVar9 = *(int *)(iVar9 + 0x14), *(int *)(iVar9 + 4) == 3))
      {
        pcVar2 = *(char **)(iVar9 + 0x18);
        pcVar16 = pcVar2;
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
        lVar8 = fn_8265C940(pcVar16 + (2 - (int)pcVar2),0x24810000);
        if (lVar8 == 0) {
          return 0xffffffff8007000e;
        }
        fn_828F6FA8(lVar8,pcVar16 + (2 - (int)pcVar2),0xffffffff8203876c,
                          *(unsigned int *)(iVar9 + 0x18));
        uVar7 = fn_828FCDE0(param_1 + 0x76,lVar8,*(unsigned int *)(param_2 + 0xc),1);
        fn_8265C990(lVar8,0x24810000);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        param_1[0x7d] = param_1[0x7d] + 1;
      }
    }
    if (param_3 == (unsigned int *)0x0) {
      return 0;
    }
    *param_3 = *(unsigned int *)(param_2 + 0x6c);
    return 0;
  }
  switch(iVar9) {
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
    goto code_r0x829a97c8;
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
    goto LAB_829a99e0;
  }
  if (0xf < (uVar6 & 0xffffffff)) {
LAB_829a99e0:
    return 0xffffffff80004005;
  }
code_r0x829a97c8:
  uVar15 = (uVar6 & 0x7fff) << 0x10 | 0xffffffff80000000 | uVar15;
  uVar7 = fn_8295D0A8(param_1,0x1f);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = fn_8295A330(param_1,uVar15);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if ((param_1[0x33] & 1U) != 0) {
    lVar8 = 0;
    uVar11 = 0;
    auStack_60[1] = 0xffffffff;
    auStack_60[2] = 0xffffffff;
    auStack_60[3] = 0xffffffff;
    if (param_1[2] != 0) {
      iVar9 = param_1[5];
      iVar13 = 0;
      iVar3 = *(int *)(param_2 + 4);
      uVar4 = param_1[2];
      do {
        iVar5 = *(int *)(iVar13 + iVar9);
        if (((iVar3 == *(int *)(iVar5 + 4)) && (*(int *)(param_2 + 8) == *(int *)(iVar5 + 8))) &&
           (*(int *)(param_2 + 0xc) == *(int *)(iVar5 + 0xc))) {
          auStack_60[*(int *)(iVar5 + 0x10)] = uVar11;
        }
        uVar11 = uVar11 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar11 < uVar4);
    }
    puVar14 = &uStack_64;
    puVar12 = auStack_60;
    lVar17 = 4;
    do {
      if (*puVar12 != 0xffffffff) {
        puVar14 = puVar14 + 1;
        *puVar14 = *puVar12;
        lVar8 = lVar8 + 1;
      }
      puVar12 = puVar12 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    uVar7 = (**(int (***)())(*param_1 + 0x144))(param_1,auStack_60,lVar8,auStack_68,1);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
  }
  uVar7 = (**(int (***)())(*param_1 + 0x15c))(param_1,param_2,&uStack_6c,&uStack_70);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  uVar7 = (**(int (***)())(*param_1 + 0x138))
                    (param_1,((uStack_70 & 7) << 0x14 | 0xff800000 | uStack_70 & 0x18) << 8 |
                             uStack_6c & 0x7ff,0xf0000,0);
  if (-1 < (int)uVar7) {
    uVar7 = (**(int (***)())(*param_1 + 0x134))(param_1);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_829548C8(param_1);
    if (-1 < (int)uVar7) {
      if (param_3 != (unsigned int *)0x0) {
        *param_3 = (int)uVar15;
      }
      return 0;
    }
    return uVar7;
  }
  return uVar7;
}

