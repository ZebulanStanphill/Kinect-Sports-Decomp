unsigned __int64
fn_829A66D8(int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  uVar2 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
  *param_3 = uVar2;
  uVar3 = 0;
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = 0;
  }
  if (iVar1 == 1) {
    if (*param_3 != 0) {
      return 0xffffffff80004005;
    }
    *param_4 = 4;
    *param_3 = 0;
  }
  else {
    if (iVar1 == 5) {
      if (*param_3 != 0) {
        return 0xffffffff80004005;
      }
      *param_4 = 4;
      *param_3 = 2;
    }
    else {
      if (iVar1 != 0xc) {
        if (iVar1 == 0xb) {
          if (1 < *param_3) {
            return 0xffffffff80004005;
          }
          uVar3 = 5;
        }
        else if (iVar1 == 6) {
          if (7 < *param_3) {
            return 0xffffffff80004005;
          }
          uVar3 = 6;
        }
        else if (iVar1 != 0xffff) {
          return 0xffffffff80004005;
        }
        *param_4 = uVar3;
        return 0;
      }
      if (*param_3 != 0) {
        return 0xffffffff80004005;
      }
      *param_4 = 4;
      *param_3 = 1;
    }
    if (param_5 != (unsigned int *)0x0) {
      *param_5 = 1;
    }
  }
  return 0;
}

