extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D8D918();


void fn_82D8D4E8(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = fn_82D8D918();
  if (iVar1 == 0) {
    iVar1 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0xd4) == (*(unsigned int *)(param_1 + 0xd8) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0xd0),4);
    }
    *(unsigned int *)(*(int *)(param_1 + 0xd4) * 4 + *(int *)(param_1 + 0xd0)) = param_2;
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    *(unsigned char *)(param_1 + 0xdc) = 1;
  }
  return;
}

