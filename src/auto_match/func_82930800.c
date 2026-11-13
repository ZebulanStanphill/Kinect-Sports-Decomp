typedef unsigned char bool;


unsigned __int64 fn_82930800(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned char *pbVar4;
  char *pcVar5;
  unsigned char *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
    bVar8 = param_1[2] == param_2[2];
    break;
  case 1:
    pbVar4 = (unsigned char *)(param_2 + 2);
    pbVar6 = (unsigned char *)(param_1 + 2);
    do {
      iVar3 = (unsigned int)*pbVar6 - (unsigned int)*pbVar4;
      if (*pbVar6 == 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 == 0);
    goto LAB_82930888;
  case 5:
  case 6:
  case 7:
  case 8:
    bVar8 = *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
    break;
  case 9:
    pbVar4 = (unsigned char *)param_2[2];
    pbVar6 = (unsigned char *)param_1[2];
    do {
      iVar3 = (unsigned int)*pbVar6 - (unsigned int)*pbVar4;
      if (*pbVar6 == 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 == 0);
LAB_82930888:
    if (iVar3 != 0) {
      return 0;
    }
    return 1;
  case 10:
    pcVar5 = (char *)param_2[2];
    pcVar7 = (char *)param_1[2];
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return 0;
    }
  default:
    goto switchD_82930844_default;
  }
  if (!bVar8) {
    return 0;
  }
switchD_82930844_default:
  return 1;
}

