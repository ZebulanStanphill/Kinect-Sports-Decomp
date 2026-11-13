typedef unsigned char bool;
#define true 1
#define false 0


bool fn_822DD640(int *param_1,int *param_2)

{
  bool bVar1;
  __int64 lVar2;
  unsigned char *pbVar3;
  int iVar4;
  unsigned char *pbVar5;
  int iVar6;
  unsigned char *pbVar7;
  
  if (*param_1 == 0) {
LAB_822dd65c:
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') goto LAB_822dd65c;
  }
  if (*param_2 == 0) {
LAB_822dd680:
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    if (*(char *)(param_2 + 0xc) != '\0') goto LAB_822dd680;
  }
  if (iVar6 == 0) {
    if (iVar4 == 0) {
      pbVar7 = (unsigned char *)param_1[8];
      pbVar3 = (unsigned char *)param_2[8];
      if (param_1[9] - (int)pbVar7 == param_2[9] - (int)pbVar3) {
        iVar6 = param_1[9] - (int)pbVar7;
        lVar2 = 0;
        if (iVar6 != 0) {
          pbVar5 = pbVar7 + iVar6;
          do {
            lVar2 = (unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar3;
            if (lVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar3 = pbVar3 + 1;
          } while (pbVar7 != pbVar5);
        }
        bVar1 = (int)lVar2 == 0;
      }
      else {
        bVar1 = false;
      }
      if (((bVar1) && (param_1[10] == param_2[10])) && (param_1[0xb] == param_2[0xb])) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      goto LAB_822dd740;
    }
  }
  bVar1 = iVar4 == iVar6;
LAB_822dd740:
  return !bVar1;
}

