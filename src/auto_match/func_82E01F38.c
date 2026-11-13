extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E01F38(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  iVar2 = fn_82CE5410();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_2,4);
  }
  *(unsigned int *)(param_2[1] * 4 + *param_2) = uVar1;
  param_2[1] = param_2[1] + 1;
  return;
}

