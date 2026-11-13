typedef unsigned char bool;


void fn_83067180(unsigned int *param_1,__int64 param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  
  if (7 < (unsigned int)param_2) {
    return;
  }
  bVar1 = (unsigned int)param_2 != 0;
  if (param_2 == 1 && bVar1) {
    *param_3 = param_1[3];
    uVar2 = param_1[1];
  }
  else {
    if (param_2 == 2 && bVar1) {
      uVar2 = param_1[3];
    }
    else {
      if (param_2 != 3 || !bVar1) {
        if (param_2 == 4 && bVar1) {
code_r0x83067220:
          *param_3 = *param_1;
          uVar2 = param_1[4];
        }
        else {
          if (param_2 != 5 || !bVar1) {
            if (param_2 == 6 && bVar1) {
              *param_3 = param_1[3];
              param_3[1] = param_1[4];
              uVar2 = param_1[5];
code_r0x830671c0:
              param_3[2] = uVar2;
              return;
            }
            if (!bVar1) {
              *param_3 = *param_1;
              param_3[1] = param_1[1];
              uVar2 = param_1[2];
              goto code_r0x830671c0;
            }
            goto code_r0x83067220;
          }
          *param_3 = param_1[3];
          uVar2 = param_1[1];
        }
        param_3[1] = uVar2;
        uVar2 = param_1[5];
        goto code_r0x83067234;
      }
      uVar2 = *param_1;
    }
    *param_3 = uVar2;
    uVar2 = param_1[4];
  }
  param_3[1] = uVar2;
  uVar2 = param_1[2];
code_r0x83067234:
  param_3[2] = uVar2;
  return;
}

