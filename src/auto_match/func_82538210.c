extern int fn_82537D18();
extern int fn_82538468();
extern int fn_82A1C098();
extern int fn_82A1E740();


int fn_82538210(int param_1,unsigned char param_2)

{
  unsigned int iVar1;
  unsigned int iVar2;
  unsigned int uStack_20;
  unsigned char auStack_1c [4];
  
  if (*(int *)(param_1 + 0x1c) != -1) {
    iVar1 = fn_82A1E740(param_1,&uStack_20,param_2);
    iVar2 = fn_82A1C098(param_1);
    if (iVar1 == 0x3e4) {
      return 0;
    }
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x30) = 0;
      fn_82538468(param_1 + 0x20,uStack_20);
    }
    else {
      if ((iVar1 == 0x12) || (iVar2 == 0x80070012)) {
        *(unsigned int *)(param_1 + 0x30) = 0;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar1;
      }
      fn_82537D18(auStack_1c,param_1 + 0x20,*(unsigned int *)(param_1 + 0x20),
                    *(unsigned int *)(param_1 + 0x24));
    }
  }
  return 1;
}

