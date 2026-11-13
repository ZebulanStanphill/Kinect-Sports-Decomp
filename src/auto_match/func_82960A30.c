unsigned __int64
fn_82960A30(int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  uVar2 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
  *param_3 = uVar2;
  uVar4 = 0;
  if ((param_1[0x1c] & 0x1000000U) == 0) {
    if (iVar1 == 0xb) {
      if (3 < uVar2) {
        return 0xffffffff80004005;
      }
      uVar3 = 8;
      uVar4 = 0;
    }
    else {
      if (iVar1 != 0xd) {
        if (iVar1 == 0x11) {
          if (uVar2 != 0) {
            return 0xffffffff80004005;
          }
          *param_4 = 0x11;
          *param_3 = 1;
        }
        else if (iVar1 == 0x12) {
          if (uVar2 != 0) {
            return 0xffffffff80004005;
          }
          *param_4 = 0x11;
          *param_3 = 0;
        }
        else {
          if (iVar1 != 0xffff) {
            return 0xffffffff80004005;
          }
          *param_4 = 0;
        }
        goto LAB_82960b70;
      }
      if (uVar2 != 0) {
        return 0xffffffff80004005;
      }
      uVar3 = 9;
      uVar4 = 1;
    }
    *param_4 = uVar3;
LAB_82960b70:
    if (param_5 == (unsigned int *)0x0) {
      return 0;
    }
    *param_5 = uVar4;
    return 0;
  }
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = 0;
  }
  if (iVar1 == 5) {
    if ((*param_3 != 0) || (param_5 == (unsigned int *)0x0)) goto LAB_82960ad4;
    *param_5 = 1;
  }
  if (iVar1 == 0xffff) {
    *param_4 = 0;
    return 0;
  }
LAB_82960ad4:
  *param_4 = 6;
  *param_3 = *(unsigned int *)(param_2 + 0xc);
  return 0;
}

