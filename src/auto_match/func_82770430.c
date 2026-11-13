extern int fn_827701A8();


void fn_82770430(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar2 = (unsigned __int64)(unsigned int)param_2[1];
  uVar3 = 0;
  uVar1 = 0;
  if (*(char *)(*(int *)(param_1 + 8) + 0x1c) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar5 = 1;
    if (1 < uVar2) {
      iVar4 = 0x28;
      do {
        if (((int *)(iVar4 + *param_2))[-10] != *(int *)(iVar4 + *param_2)) {
          uVar3 = fn_827701A8(param_1,param_2,uVar1,uVar5,uVar3);
          uVar1 = uVar5;
        }
        uVar2 = (unsigned __int64)(unsigned int)param_2[1];
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x28;
      } while ((uVar5 & 0xffffffff) < uVar2);
    }
  }
  fn_827701A8(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}

