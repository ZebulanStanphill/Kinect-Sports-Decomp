extern int fn_82EDDA58();
extern int fn_82EDF558();
extern int fn_82EDF600();


void fn_82E4F0C8(int param_1,int param_2,int param_3,int param_4,__int64 param_5,__int64 param_6
                  ,int param_7)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  int iVar8;
  __int64 lVar7;
  int iVar9;
  int iVar10;
  
  uVar1 = *(unsigned int *)(param_7 + 0x3924);
  uVar5 = uVar1 * (int)param_5;
  param_6 = param_6 - param_5;
  iVar8 = ((int)uVar5 >> 2) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 3) != 0);
  param_1 = *(int *)(param_7 + 0x38bc) * (int)param_5 + *(int *)(param_7 + 0x38c4) + param_1;
  iVar10 = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  param_2 = *(int *)(param_7 + 0x38a4) + uVar5 + param_2;
  param_3 = *(int *)(param_7 + 0x38a8) + iVar8 + param_3;
  param_4 = *(int *)(param_7 + 0x38ac) + iVar8 + param_4;
  if (*(int *)(param_7 + 0x395c) == 0) {
    if (0 < (int)param_6) {
      lVar7 = ((param_6 - 1U & 0xffffffff) >> 1) + 1;
      do {
        iVar8 = *(int *)(param_7 + 0x38bc);
        iVar9 = 0;
        iVar2 = *(int *)(param_7 + 0x3924);
        if (0 < *(int *)(param_7 + 0x3894)) {
          puVar6 = (unsigned char *)(param_1 + -1);
          do {
            *(unsigned char *)(iVar9 + param_3) = puVar6[2];
            puVar6 = puVar6 + 4;
            *(unsigned char *)(iVar9 + param_4) = *puVar6;
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_7 + 0x3894));
        }
        iVar9 = 0;
        if (0 < *(int *)(param_7 + 0x388c)) {
          puVar3 = (unsigned char *)(iVar2 + param_2 + -1);
          puVar4 = (unsigned char *)(iVar8 + param_1 + -2);
          puVar6 = (unsigned char *)(param_1 + -2);
          do {
            *(unsigned char *)(iVar9 + param_2) = puVar6[2];
            puVar6 = puVar6 + 4;
            *(unsigned char *)(param_2 + 1 + iVar9) = *puVar6;
            iVar9 = iVar9 + 2;
            puVar3[1] = puVar4[2];
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 2;
            *puVar3 = *puVar4;
          } while (iVar9 < *(int *)(param_7 + 0x388c));
        }
        param_2 = uVar1 * 2 + param_2;
        param_3 = iVar10 + param_3;
        param_1 = *(int *)(param_7 + 0x38c0) + param_1;
        param_4 = iVar10 + param_4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else {
    fn_82EDF558(param_1,param_2,*(int *)(param_7 + 0x38bc),*(unsigned int *)(param_7 + 0x3924),2,1
                    ,*(unsigned int *)(param_7 + 0x388c),param_6);
    if (*(int *)(param_7 + 0x3960) == 0) {
      fn_82EDF600(param_1 + 1,param_1 + 3,param_3,param_4,*(unsigned int *)(param_7 + 0x38bc),
                        *(unsigned int *)(param_7 + 0x3958),4,1);
    }
    else {
      fn_82EDDA58(param_1 + 1,param_1 + 3);
    }
  }
  return;
}

