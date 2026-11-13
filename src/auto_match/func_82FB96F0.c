extern int fn_82F691F0();


unsigned __int64
fn_82FB96F0(int param_1,int *param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = 0;
  for (uVar2 = (unsigned int)param_5[1] >> 0xe; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  *(unsigned int *)(param_1 + 0x48) = *param_5;
  *(int *)(param_1 + 0x40) = param_4;
  if (((param_5[1] & 0x20000) != 0) && (*(char *)(param_4 + 0x44) == '\0')) {
    *(int *)(param_1 + 0x44) = iVar1 + -1;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x44);
  if ((unsigned __int64)uVar2 != 0) {
    iVar1 = (**(int (***)())(*param_2 + 4))
                      (param_2,((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0xfffffff)
                               << 4);
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 4,0,0x3c);
}

