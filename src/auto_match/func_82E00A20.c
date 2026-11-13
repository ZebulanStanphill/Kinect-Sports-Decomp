extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E00A20(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  if (0 < (int)*(unsigned int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + iVar4);
      iVar2 = fn_82CE5410();
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_2,4);
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 0x60;
      *(unsigned int *)(param_2[1] * 4 + *param_2) = uVar1;
      param_2[1] = param_2[1] + 1;
    } while (uVar3 != 0);
  }
  return;
}

