extern int fn_82D000A0();


void fn_82E1AB38(__int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = 0;
    if (iVar1 != 0) {
      piVar3 = param_2;
      do {
        fn_82D000A0(param_1 + 0x2c,iVar1,piVar3[1]);
        fn_82D000A0(param_1 + 0x3c,piVar3[1],*piVar3);
        iVar2 = iVar2 + 1;
        piVar3 = param_2 + iVar2 * 2;
        iVar1 = param_2[iVar2 * 2];
      } while (iVar1 != 0);
    }
  }
  return;
}

