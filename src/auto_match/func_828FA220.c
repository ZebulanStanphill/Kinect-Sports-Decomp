typedef unsigned char bool;


unsigned __int64 fn_828FA220(int param_1,unsigned char *param_2,unsigned char *param_3)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char *pbVar4;
  
  pbVar4 = param_2 + 1;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = *param_2;
  if (*(unsigned char **)(param_1 + 4) <= pbVar4) {
    return 1;
  }
  bVar2 = *param_2;
  if ((bVar2 == 0x23) && ((bVar3 = *pbVar4, bVar3 == 0x23 || (bVar3 == 0x40))))
  goto code_r0x828fa268;
  bVar3 = *pbVar4;
  if (bVar2 == bVar3) {
    if (bVar2 < 0x3b) {
      if ((((bVar2 != 0x3a) && (bVar2 != 0x26)) && (bVar2 != 0x2b)) && (bVar2 != 0x2d)) {
        if (bVar2 != 0x2e) {
          return 1;
        }
        param_2 = param_2 + 2;
        if (*(unsigned char **)(param_1 + 4) <= param_2) {
          return 1;
        }
        if (*param_2 != 0x2e) {
          return 1;
        }
        param_3[1] = bVar3;
        param_3[2] = *param_2;
        return 3;
      }
      goto code_r0x828fa268;
    }
    if (bVar2 == 0x3c) {
code_r0x828fa308:
      param_3[1] = bVar3;
      if (*(unsigned char **)(param_1 + 4) <= param_2 + 2) {
        return 2;
      }
      if (param_2[2] != 0x3d) {
        return 2;
      }
      param_3[2] = 0x3d;
      return 3;
    }
    if (bVar2 == 0x3d) goto code_r0x828fa268;
    if (bVar2 == 0x3e) goto code_r0x828fa308;
code_r0x828fa2f8:
    bVar1 = bVar2 == 0x7c;
  }
  else {
    if (bVar3 == 0x3d) {
      if (bVar2 < 0x30) {
        if ((bVar2 != 0x2f) && (bVar2 != 0x21)) {
          if (bVar2 < 0x25) {
            return 1;
          }
          if (0x26 < bVar2) {
            if (bVar2 < 0x2a) {
              return 1;
            }
            if ((0x2b < bVar2) && (bVar2 != 0x2d)) {
              return 1;
            }
          }
        }
        goto code_r0x828fa268;
      }
      if (((bVar2 == 0x3c) || (bVar2 == 0x3e)) || (bVar2 == 0x5e)) goto code_r0x828fa268;
      goto code_r0x828fa2f8;
    }
    if (bVar2 != 0x2d) {
      return 1;
    }
    bVar1 = bVar3 == 0x3e;
  }
  if (!bVar1) {
    return 1;
  }
code_r0x828fa268:
  param_3[1] = bVar3;
  return 2;
}

