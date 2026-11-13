unsigned __int64
fn_8267FDA0(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4,int param_5,unsigned __int64 param_6,
             int param_7,unsigned int param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned char uVar9;
  int in_stack_00000054;
  
  uVar1 = (param_2 & 0xffffffff) >> 3;
  uVar2 = (param_6 & 0xffffffff) >> 3;
  if (param_3 == 1) {
    if (param_7 == 9) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          uVar7 = uVar7 + uVar1;
          *(unsigned char *)((int)uVar6 + param_5) = *(unsigned char *)(iVar3 + param_1 + 3);
          uVar6 = uVar6 + uVar2;
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
    else {
      if (param_7 != 2) {
        return 0;
      }
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          iVar4 = (int)uVar6;
          uVar7 = uVar7 + uVar1;
          *(unsigned char *)(iVar4 + param_5) = *(unsigned char *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar2;
          *(unsigned char *)(iVar4 + param_5 + 1) = *(unsigned char *)(iVar3 + param_1 + 1);
          *(unsigned char *)(iVar4 + param_5 + 2) = *(unsigned char *)(iVar3 + param_1 + 2);
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
  }
  else if (param_3 == 2) {
    if (param_7 == 9) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          uVar7 = uVar7 + uVar1;
          *(char *)((int)uVar6 + param_5) =
               (char)(((unsigned __int64)*(unsigned char *)(iVar3 + param_1 + 2) +
                       (unsigned __int64)*(unsigned char *)(iVar3 + param_1 + 1) +
                      (unsigned __int64)*(unsigned char *)(iVar3 + param_1)) / 3);
          uVar6 = uVar6 + uVar2;
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
    else {
      if (param_7 != 1) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar6;
          iVar4 = (int)uVar7;
          *(unsigned char *)(iVar4 + param_5) = *(unsigned char *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar1;
          uVar7 = uVar7 + uVar2;
          *(unsigned char *)(iVar4 + param_5 + 1) = *(unsigned char *)(iVar3 + param_1 + 1);
          *(unsigned char *)(iVar4 + param_5 + 2) = *(unsigned char *)(iVar3 + param_1 + 2);
          *(unsigned char *)(iVar4 + param_5 + 3) = 0xff;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
  }
  else if (param_3 == 100) {
    if (param_7 == 9) {
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          pbVar8 = (unsigned char *)((*(unsigned char *)((int)uVar6 + param_1) + 3) * 4 + in_stack_00000054);
          if (*(char *)(in_stack_00000054 + 8) == '\0') {
            uVar9 = (unsigned char)(((unsigned int)pbVar8[2] + (unsigned int)pbVar8[1] + (unsigned int)*pbVar8) / 3);
          }
          else {
            uVar9 = (unsigned char)*(unsigned int *)pbVar8;
          }
          uVar6 = uVar6 + uVar1;
          *(unsigned char *)((int)uVar7 + param_5) = uVar9;
          uVar7 = uVar7 + uVar2;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
    else {
      if ((param_7 != 2) && (param_7 != 1)) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          puVar5 = (unsigned int *)((*(unsigned char *)((int)uVar6 + param_1) + 3) * 4 + in_stack_00000054);
          *(unsigned char *)(iVar3 + param_5) = *(unsigned char *)puVar5;
          *(unsigned char *)(iVar3 + param_5 + 1) = *(unsigned char *)((int)puVar5 + 1);
          *(unsigned char *)(iVar3 + param_5 + 2) = *(unsigned char *)((int)puVar5 + 2);
          if (param_7 == 1) {
            *(char *)(iVar3 + param_5 + 3) = (char)*puVar5;
          }
          uVar6 = uVar6 + uVar1;
          uVar7 = uVar7 + uVar2;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
  }
  else {
    if (param_3 != 9) {
      return 0;
    }
    if (param_7 == 2) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          iVar4 = (int)uVar6;
          *(unsigned char *)(iVar4 + param_5) = *(unsigned char *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar2;
          *(unsigned char *)(iVar4 + param_5 + 1) = *(unsigned char *)(iVar3 + param_1);
          uVar7 = uVar7 + uVar1;
          *(unsigned char *)(iVar4 + param_5 + 2) = *(unsigned char *)(iVar3 + param_1);
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
    else {
      if (param_7 != 1) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((unsigned __int64)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          *(unsigned char *)(iVar3 + param_5) = 0xff;
          uVar7 = uVar7 + uVar2;
          *(unsigned char *)(iVar3 + param_5 + 1) = 0xff;
          *(unsigned char *)(iVar3 + param_5 + 2) = 0xff;
          iVar4 = (int)uVar6;
          uVar6 = uVar6 + uVar1;
          *(unsigned char *)(iVar3 + param_5 + 3) = *(unsigned char *)(iVar4 + param_1);
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)param_4);
      }
    }
  }
  return 1;
}

