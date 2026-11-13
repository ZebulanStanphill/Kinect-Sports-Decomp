unsigned __int64
fn_8299BF68(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *piVar5;
  unsigned int *p4;
  unsigned int uVar6;
  
  if (param_6 == 0) {
    uVar6 = 0;
    if (param_5 != 0) {
      do {
        puVar1 = (unsigned int *)*param_4;
        if (((*puVar1 & 0xfff00000) != 0x11000000) && ((*puVar1 & 0xfff00000) != 0x72100000)) {
          iVar2 = *(unsigned int *)puVar1[2];
          iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
          if ((*(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x840)
              != 0) {
            uVar4 = *(unsigned int *)(iVar3 + 0xc);
            if ((uVar4 >= 6) || (param_2[uVar4] != 0)) {
              return 0;
            }
            if (param_3[uVar4] == 0xffffffff) {
              param_3[uVar4] = iVar2;
            }
            else if (param_3[uVar4] != iVar2) {
              return 0;
            }
            param_2[uVar4] = (unsigned int)puVar1;
            *param_4 = 0;
            param_3[uVar4] = *(unsigned int *)puVar1[2];
          }
        }
        uVar6 = uVar6 + 1;
        param_4 = param_4 + 1;
      } while (uVar6 < param_5);
    }
  }
  else if (param_6 == 1) {
    uVar6 = 0;
    if (param_5 != 0) {
      p4 = param_4;
      do {
        puVar1 = (unsigned int *)*p4;
        if (((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0xfff00000) != 0x11000000)) &&
           ((*puVar1 & 0xfff00000) != 0x72100000)) {
          uVar4 = 0;
          piVar5 = param_3;
          do {
            if ((*(unsigned int *)(((int)param_2 - (int)param_3) + (int)piVar5) == 0) &&
               ((*piVar5 == *(unsigned int *)puVar1[2] || (*piVar5 == 0xffffffff)))) break;
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar4 < 6);
          if (uVar4 == 6) {
            return 0;
          }
          param_3[uVar4] = *(unsigned int *)puVar1[2];
          param_2[uVar4] = (unsigned int)puVar1;
          *p4 = 0;
        }
        uVar6 = uVar6 + 1;
        p4 = p4 + 1;
      } while (uVar6 < param_5);
    }
  }
  else if ((param_6 == 2) && (uVar6 = 0, param_5 != 0)) {
    p4 = param_4;
    do {
      puVar1 = (unsigned int *)*p4;
      if ((puVar1 != (unsigned int *)0x0) &&
         (((*puVar1 & 0xfff00000) == 0x11000000 || ((*puVar1 & 0xfff00000) == 0x72100000)))) {
        uVar4 = 0;
        piVar5 = param_2;
        do {
          if (*piVar5 == 0) break;
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < 6);
        if (uVar4 == 6) {
          return 0;
        }
        param_3[uVar4] = *(unsigned int *)puVar1[2];
        param_2[uVar4] = (unsigned int)puVar1;
        *p4 = 0;
      }
      uVar6 = uVar6 + 1;
      p4 = p4 + 1;
    } while (uVar6 < param_5);
  }
  return 1;
}

