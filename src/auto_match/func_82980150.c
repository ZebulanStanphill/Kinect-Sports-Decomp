extern unsigned int lbl_82005710;
extern unsigned int lbl_82005F78;


unsigned __int64 fn_82980150(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  double dVar2;
  unsigned int uVar3;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    uVar3 = *param_3;
    if (((uVar3 != 0) && (uVar3 != 1)) && (2 < uVar3)) {
      if (uVar3 != 3) {
        return 0xffffffff80004005;
      }
      uVar3 = 1;
      if (*(double *)(param_3 + 2) == lbl_82005710) {
        uVar3 = 0;
      }
      goto code_r0x8298031c;
    }
code_r0x82980310:
    uVar3 = (unsigned int)(param_3[2] != 0);
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *param_3;
      if (uVar3 == 0) goto code_r0x82980310;
      if ((uVar3 != 1) && (2 < uVar3)) {
        if (uVar3 != 3) {
          return 0xffffffff80004005;
        }
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        uVar3 = (unsigned int)dVar2;
code_r0x82980270:
        param_2[2] = uVar3;
        return 0;
      }
    }
    else if (uVar3 < 3) {
      uVar3 = *param_3;
      if (uVar3 == 0) goto code_r0x82980310;
      if ((uVar3 != 1) && (2 < uVar3)) {
        if (uVar3 != 3) {
          return 0xffffffff80004005;
        }
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        uVar3 = (unsigned int)(__int64)dVar2;
        goto code_r0x82980270;
      }
    }
    else {
      if (uVar3 == 3) {
        uVar3 = *param_3;
        if (uVar3 == 0) {
          uVar1 = (unsigned __int64)(int)(unsigned int)(param_3[2] != 0);
        }
        else if (uVar3 == 1) {
          uVar1 = (unsigned __int64)(int)param_3[2];
        }
        else {
          if (2 < uVar3) {
            if (uVar3 != 3) {
              return 0xffffffff80004005;
            }
            dVar2 = *(double *)(param_3 + 2);
            goto code_r0x829801e0;
          }
          uVar1 = (unsigned __int64)param_3[2];
        }
        dVar2 = (double)(__int64)uVar1;
code_r0x829801e0:
        *(double *)(param_2 + 2) = dVar2;
        return 0;
      }
      if (uVar3 < 5) {
        if (*param_3 != 4) {
          return 0xffffffff80004005;
        }
      }
      else {
        if (uVar3 != 5) {
          return 0xffffffff80004005;
        }
        if (*param_3 != 4) {
          if (*param_3 == 5) {
            param_2[2] = param_3[2];
            param_2[3] = param_3[3];
            return 0;
          }
          return 0xffffffff80004005;
        }
        *param_2 = 4;
      }
    }
    uVar3 = param_3[2];
  }
code_r0x8298031c:
  param_2[2] = uVar3;
  return 0;
}

