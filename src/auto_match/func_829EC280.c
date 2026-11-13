extern int fn_82F6F868();


unsigned __int64
fn_829EC280(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 *param_3,unsigned int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  if ((param_1 & 0xffffffff) != 0) {
    uVar3 = 0;
    piVar2 = (int *)0x83218a38;
    do {
      if ((*piVar2 != 0) && (iVar1 = fn_82F6F868(param_1), iVar1 == 0)) {
        iVar1 = uVar3 * 0x20;
        *param_2 = *(unsigned int *)(iVar1 + -0x7cde75b0);
        *param_3 = *(unsigned __int64 *)(iVar1 + -0x7cde75b8);
        *param_4 = *(unsigned int *)(iVar1 + -0x7cde75c8);
        *(int *)(iVar1 + -0x7cde75c4) = *(int *)(iVar1 + -0x7cde75c4) + 1;
        return 0;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar3 < 10);
  }
  return 0xffffffff80004005;
}

