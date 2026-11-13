unsigned __int64
fn_829943C0(int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar4 = 1;
  iVar1 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(param_2 + 0x6c));
  uVar2 = (**(int (***)())(*param_1 + 0x74))(param_1,*(unsigned int *)(param_2 + 0x6c));
  *param_3 = uVar2;
  if (iVar1 == 0xb) {
    if (3 < uVar2) {
      return 0xffffffff80004005;
    }
    uVar3 = 8;
  }
  else {
    if (iVar1 != 0xd) {
      if (iVar1 != 0xffff) {
        return 0xffffffff80004005;
      }
      uVar4 = 0;
      *param_4 = 0;
      goto LAB_8299445c;
    }
    if (uVar2 != 0) {
      return 0xffffffff80004005;
    }
    uVar3 = 9;
  }
  *param_4 = uVar3;
LAB_8299445c:
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = uVar4;
  }
  return 0;
}

