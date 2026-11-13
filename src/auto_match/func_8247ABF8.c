extern int fn_82F68B68();


void fn_8247ABF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x13d0);
  if (*(int *)(param_1 + 0x2030) == 0) {
    uVar4 = *(unsigned int *)(param_1 + 0x770);
    if (uVar1 == 2) {
      uVar5 = 0xffffffff821bd240;
    }
    else {
      uVar5 = 0xffffffff821bd268;
    }
  }
  else if (*(int *)(param_1 + 0x2030) == 1) {
    uVar4 = *(unsigned int *)(param_1 + 0x770);
    iVar3 = (uVar1 - 5) + (unsigned int)((unsigned __int64)uVar1 - 4 == 0);
    iVar2 = (int)((unsigned __int64)uVar1 - 4);
    if (*(int *)(param_1 + 0x17f0) == 2) {
      if (iVar2 == iVar3) {
        uVar5 = 0xffffffff821bd2a8;
      }
      else {
        uVar5 = 0xffffffff821bd284;
      }
    }
    else if (iVar2 == iVar3) {
      uVar5 = 0xffffffff821bd2e0;
    }
    else {
      uVar5 = 0xffffffff821bd2c8;
    }
  }
  else {
    uVar4 = *(unsigned int *)(param_1 + 0x770);
    if (uVar1 == 2) {
      uVar5 = 0xffffffff821bd240;
    }
    else {
      uVar5 = 0xffffffff821bd2fc;
    }
  }
  fn_82F68B68(uVar4,uVar5,param_2,param_3,0,0);
  return;
}

