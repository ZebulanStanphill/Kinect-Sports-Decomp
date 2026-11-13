#define true 1
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82AC8B10();
extern int fn_82AE9470();


int fn_82AE94F0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  piVar3 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    cVar2 = fn_82ABDA10(iVar1);
    if (cVar2 != '\0') break;
    piVar3 = (int *)(iVar1 + 0x20);
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  cVar2 = fn_82AC8B10(param_1 + 1,iVar1);
  if (cVar2 != '\0') {
    *piVar3 = *(int *)(iVar1 + 0x20);
    fn_82AE9470(param_1 + 1,iVar1);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1[0xe],0x12c0);
}

