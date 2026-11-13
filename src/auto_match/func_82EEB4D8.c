extern int fn_82EEB368();
extern int memset();


void fn_82EEB4D8(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  
  lVar2 = 3;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      fn_82EEB368(param_1);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  memset(param_1,0,0x34);
}

