extern int fn_82AA66A8();
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82ACB458();
extern int fn_82ACBE00();
extern int fn_82ACC5D8();
extern int fn_82ACCBB8();
extern int fn_82ACD310();


unsigned __int64 fn_82ACD3D8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar7;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(unsigned int *)(param_1 + 0x30),0x12c0);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  cVar6 = fn_82AC8B10(param_1 + 4,uVar1);
  if (cVar6 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar2 = *(unsigned int *)(uVar1 + 0x1c);
    uVar4 = fn_82ACBE00(*(unsigned int *)(param_1 + 0x30),uVar1,uVar2,
                          *(unsigned int *)(param_1 + 0x38));
    fn_82AC8CE8(param_1 + 4,uVar1);
    if (((((uVar4 & 2) == 0) &&
         ((*(char *)(param_1 + 0x4a) != '\0' ||
          (*(unsigned int *)(*(int *)(param_1 + 0x38) + 0x10) < *(unsigned int *)(param_1 + 0x40))))) ||
        (uVar5 = fn_82ACD310(param_1,uVar2,uVar1), uVar5 == uVar1)) &&
       ((fn_82ACCBB8(*(unsigned int *)(param_1 + 0x30),uVar1,uVar2,*(unsigned int *)(param_1 + 0x38),
                       uVar1), *(char *)(param_1 + 0x4a) != '\0' ||
        (*(unsigned int *)(*(int *)(param_1 + 0x38) + 0x10) < *(unsigned int *)(param_1 + 0x40))))) {
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x24);
      if ((uVar1 & 1) == 0) {
        iVar7 = (uVar1 & 0xfffffffe) - 0x28;
      }
      else {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x3c) = iVar7;
      return 0;
    }
    fn_82ACC5D8(param_1,uVar1,0);
    fn_82ACB458(*(unsigned int *)(param_1 + 0x30),uVar2,1);
    uVar3 = 2;
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  return uVar3;
}

